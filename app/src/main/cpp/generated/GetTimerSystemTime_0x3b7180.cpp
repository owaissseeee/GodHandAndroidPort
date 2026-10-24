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

// Function: GetTimerSystemTime
// Address: 0x3b7180 - 0x3b7200
void GetTimerSystemTime_0x3b7180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTimerSystemTime_0x3b7180");
#endif

    switch (ctx->pc) {
        case 0x3b7194u: goto label_3b7194;
        case 0x3b71e8u: goto label_3b71e8;
        default: break;
    }

    ctx->pc = 0x3b7180u;

    // 0x3b7180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b7184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b7188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b718c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B718Cu;
    SET_GPR_U32(ctx, 31, 0x3B7194u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B718Cu, 0x3B7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7194u;
label_3b7194:
    // 0x3b7194: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b7194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3b7198: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3b7198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3b719c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3b719cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3b71a0: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x3b71a0u;
    SET_GPR_ZE32(ctx, 16, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x3b71a4: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x3b71a4u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u));
    // 0x3b71a8: 0xdc8abe90  ld          $t2, -0x4170($a0)
    ctx->pc = 0x3b71a8u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x3FBE90u));
    // 0x3b71ac: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3b71acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x3b71b0: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B71B0u;
    {
        const bool branch_taken_0x3b71b0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71B0u;
        // 0x3b71b4: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b71b0) {
            ctx->pc = 0x3B71C0u;
            goto label_3b71c0;
        }
    }
    ctx->pc = 0x3B71B8u;
    // 0x3b71b8: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x3b71b8u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b71bc: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3b71bcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3b71c0:
    // 0x3b71c0: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3b71c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3b71c4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3b71c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3b71c8: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3b71c8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x3b71cc: 0x20a8025  or          $s0, $s0, $t2
    ctx->pc = 0x3b71ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 10));
    // 0x3b71d0: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3b71d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x3b71d4: 0x1308014  dsllv       $s0, $s0, $t1
    ctx->pc = 0x3b71d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x3b71d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B71D8u;
    {
        const bool branch_taken_0x3b71d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71D8u;
        // 0x3b71dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b71d8) {
            ctx->pc = 0x3B71ECu;
            goto label_3b71ec;
        }
    }
    ctx->pc = 0x3B71E0u;
    // 0x3b71e0: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B71E0u;
    SET_GPR_U32(ctx, 31, 0x3B71E8u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B71E0u, 0x3B71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B71E8u;
label_3b71e8:
    // 0x3b71e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b71e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b71ec:
    // 0x3b71ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b71ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b71f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b71f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b71f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B71F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B71F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71F4u;
        // 0x3b71f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B71F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B71FCu;
    // 0x3b71fc: 0x0  nop
    ctx->pc = 0x3b71fcu;
    // NOP
    ctx->pc = 0x3b7200u;
}
