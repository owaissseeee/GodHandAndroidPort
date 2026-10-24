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

// Function: func_00349988
// Address: 0x349988 - 0x349a30
void func_00349988_0x349988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349988_0x349988");
#endif

    switch (ctx->pc) {
        case 0x3499ccu: goto label_3499cc;
        case 0x3499f4u: goto label_3499f4;
        case 0x349a04u: goto label_349a04;
        default: break;
    }

    ctx->pc = 0x349988u;

    // 0x349988: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x349988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x34998c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x34998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x349990: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x349990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349994: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x349994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x349998: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x349998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34999c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x34999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x3499a0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3499a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499a4: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x3499a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x3499a8: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x3499a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499ac: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x3499acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x3499b0: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x3499b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x3499b4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3499b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499b8: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x3499b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x3499bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3499bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499c0: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x3499c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x3499c4: 0xc0d1b16  jal         func_346C58
    ctx->pc = 0x3499C4u;
    SET_GPR_U32(ctx, 31, 0x3499CCu);
    ctx->pc = 0x3499C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499C4u;
    // 0x3499c8: 0x8c9400a8  lw          $s4, 0xA8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C58u, 0x3499C4u, 0x3499CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499CCu;
label_3499cc:
    // 0x3499cc: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x3499ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3499d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3499d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499d4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3499d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499d8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3499d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499dc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3499dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499e0: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x3499e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499e4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3499e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499e8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3499e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499ec: 0xc0d7d5e  jal         func_35F578
    ctx->pc = 0x3499ECu;
    SET_GPR_U32(ctx, 31, 0x3499F4u);
    ctx->pc = 0x3499F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499ECu;
    // 0x3499f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F578u, 0x3499ECu, 0x3499F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499F4u;
label_3499f4:
    // 0x3499f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3499f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499f8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3499f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499fc: 0xc0d7de2  jal         func_35F788
    ctx->pc = 0x3499FCu;
    SET_GPR_U32(ctx, 31, 0x349A04u);
    ctx->pc = 0x349A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499FCu;
    // 0x349a00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F788u, 0x3499FCu, 0x349A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A04u;
label_349a04:
    // 0x349a04: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x349a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x349a08: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x349a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x349a0c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x349a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x349a10: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x349a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x349a14: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x349a14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x349a18: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x349a18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x349a1c: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x349a1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x349a20: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x349a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x349a24: 0x3e00008  jr          $ra
    ctx->pc = 0x349A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A24u;
        // 0x349a28: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A2Cu;
    // 0x349a2c: 0x0  nop
    ctx->pc = 0x349a2cu;
    // NOP
    ctx->pc = 0x349a30u;
}
