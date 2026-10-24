#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0035E400
// Address: 0x35e400 - 0x35e4b0
void func_0035E400_0x35e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E400_0x35e400");
#endif

    switch (ctx->pc) {
        case 0x35e434u: goto label_35e434;
        case 0x35e448u: goto label_35e448;
        default: break;
    }

    ctx->pc = 0x35e400u;

    // 0x35e400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e408: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e40c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35e40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35e410: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x35e410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e418: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e418u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e41c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35e420: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x35e420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x35e424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e428: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35e428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35e42c: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E42Cu;
    SET_GPR_U32(ctx, 31, 0x35E434u);
    ctx->pc = 0x35E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E42Cu;
    // 0x35e430: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E42Cu, 0x35E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E434u;
label_35e434:
    // 0x35e434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e438: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x35E438u;
    {
        const bool branch_taken_0x35e438 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E438u;
        // 0x35e43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e438) {
            ctx->pc = 0x35E494u;
            goto label_35e494;
        }
    }
    ctx->pc = 0x35E440u;
    // 0x35e440: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E440u;
    SET_GPR_U32(ctx, 31, 0x35E448u);
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E440u, 0x35E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E448u;
label_35e448:
    // 0x35e448: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x35e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x35e44c: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35E44Cu;
    {
        const bool branch_taken_0x35e44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E44Cu;
        // 0x35e450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e44c) {
            ctx->pc = 0x35E494u;
            goto label_35e494;
        }
    }
    ctx->pc = 0x35E454u;
    // 0x35e454: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x35e454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x35e458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e45c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x35e45cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35e460: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x35e460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x35e464: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x35e464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35e468: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x35e468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x35e46c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x35e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x35e470: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x35e470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35e474: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x35e474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x35e478: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x35e478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x35e47c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x35e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x35e480: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x35e480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x35e484: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x35e484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x35e488: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x35e488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x35e48c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x35e48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x35e490: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x35e490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_35e494:
    // 0x35e494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e49c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e49cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e4a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35e4a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e4a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35e4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x35E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4A8u;
        // 0x35e4ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E4B0u;
}
