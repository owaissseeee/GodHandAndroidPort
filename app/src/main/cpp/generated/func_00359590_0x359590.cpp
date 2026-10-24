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

// Function: func_00359590
// Address: 0x359590 - 0x359628
void func_00359590_0x359590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359590_0x359590");
#endif

    switch (ctx->pc) {
        case 0x3595c0u: goto label_3595c0;
        default: break;
    }

    ctx->pc = 0x359590u;

    // 0x359590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35959c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3595a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3595a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3595a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3595a8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3595a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3595acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3595b0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3595B0u;
    {
        const bool branch_taken_0x3595b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595B0u;
        // 0x3595b4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595b0) {
            ctx->pc = 0x359614u;
            goto label_359614;
        }
    }
    ctx->pc = 0x3595B8u;
    // 0x3595b8: 0xc0d658a  jal         func_359628
    ctx->pc = 0x3595B8u;
    SET_GPR_U32(ctx, 31, 0x3595C0u);
    ctx->pc = 0x359628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359628u, 0x3595B8u, 0x3595C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3595C0u;
label_3595c0:
    // 0x3595c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3595c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3595c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3595c8: 0x50c20013  beql        $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3595C8u;
    {
        const bool branch_taken_0x3595c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3595c8) {
            ctx->pc = 0x3595CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3595C8u;
            // 0x3595cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359618u;
            goto label_359618;
        }
    }
    ctx->pc = 0x3595D0u;
    // 0x3595d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3595d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3595d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3595d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3595d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3595d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3595dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3595dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3595e0: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x3595e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3595e4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3595e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3595e8: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3595e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3595ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3595ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3595f0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3595f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3595f4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3595f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3595f8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3595f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3595fc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3595fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x359600: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x359600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x359604: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x359604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x359608: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x359608u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x35960c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x35960cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x359610: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x359610u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
label_359614:
    // 0x359614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_359618:
    // 0x359618: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35961c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35961cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359620: 0x3e00008  jr          $ra
    ctx->pc = 0x359620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359620u;
        // 0x359624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359628u;
}
