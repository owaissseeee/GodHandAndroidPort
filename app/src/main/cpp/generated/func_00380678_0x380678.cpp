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

// Function: func_00380678
// Address: 0x380678 - 0x3806d8
void func_00380678_0x380678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380678_0x380678");
#endif

    switch (ctx->pc) {
        case 0x3806c8u: goto label_3806c8;
        default: break;
    }

    ctx->pc = 0x380678u;

    // 0x380678: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x380678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x38067c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x38067cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x380680: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x380680u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x380684: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x380684u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x380688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38068c: 0x246a0008  addiu       $t2, $v1, 0x8
    ctx->pc = 0x38068cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x380690: 0x244900c8  addiu       $t1, $v0, 0xC8
    ctx->pc = 0x380690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x380694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x380698: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x380698u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x38069c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x38069cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3806a0: 0xa7a9000c  sh          $t1, 0xC($sp)
    ctx->pc = 0x3806a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x3806a4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3806a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3806a8: 0xa7aa000e  sh          $t2, 0xE($sp)
    ctx->pc = 0x3806a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 10));
    // 0x3806ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3806acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3806b0: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x3806b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3806b4: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x3806b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3806b8: 0xa7a90004  sh          $t1, 0x4($sp)
    ctx->pc = 0x3806b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x3806bc: 0xa7a30006  sh          $v1, 0x6($sp)
    ctx->pc = 0x3806bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x3806c0: 0xc0c72e0  jal         func_31CB80
    ctx->pc = 0x3806C0u;
    SET_GPR_U32(ctx, 31, 0x3806C8u);
    ctx->pc = 0x3806C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806C0u;
    // 0x3806c4: 0xa7aa000a  sh          $t2, 0xA($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CB80u, 0x3806C0u, 0x3806C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806C8u;
label_3806c8:
    // 0x3806c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3806c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3806cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3806CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3806D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3806CCu;
        // 0x3806d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3806CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3806D4u;
    // 0x3806d4: 0x0  nop
    ctx->pc = 0x3806d4u;
    // NOP
    ctx->pc = 0x3806d8u;
}
