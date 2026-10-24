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

// Function: func_001FE428
// Address: 0x1fe428 - 0x1fe4c0
void func_001FE428_0x1fe428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FE428_0x1fe428");
#endif

    switch (ctx->pc) {
        case 0x1fe458u: goto label_1fe458;
        case 0x1fe464u: goto label_1fe464;
        case 0x1fe480u: goto label_1fe480;
        case 0x1fe48cu: goto label_1fe48c;
        case 0x1fe4a4u: goto label_1fe4a4;
        default: break;
    }

    ctx->pc = 0x1fe428u;

    // 0x1fe428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe42c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fe42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fe430: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe434: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe438: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe43c: 0x14a20019  bne         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FE43Cu;
    {
        const bool branch_taken_0x1fe43c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE43Cu;
        // 0x1fe440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe43c) {
            ctx->pc = 0x1FE4A4u;
            goto label_1fe4a4;
        }
    }
    ctx->pc = 0x1FE444u;
    // 0x1fe444: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FE444u;
    {
        const bool branch_taken_0x1fe444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE444u;
        // 0x1fe448: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe444) {
            ctx->pc = 0x1FE4A4u;
            goto label_1fe4a4;
        }
    }
    ctx->pc = 0x1FE44Cu;
    // 0x1fe44c: 0x2411009f  addiu       $s1, $zero, 0x9F
    ctx->pc = 0x1fe44cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x1fe450: 0x24509b80  addiu       $s0, $v0, -0x6480
    ctx->pc = 0x1fe450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
    // 0x1fe454: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1fe454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe458:
    // 0x1fe458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe45c: 0xc07f1f2  jal         func_1FC7C8
    ctx->pc = 0x1FE45Cu;
    SET_GPR_U32(ctx, 31, 0x1FE464u);
    ctx->pc = 0x1FE460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE45Cu;
    // 0x1fe460: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC7C8u, 0x1FE45Cu, 0x1FE464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE464u;
label_1fe464:
    // 0x1fe464: 0x0  nop
    ctx->pc = 0x1fe464u;
    // NOP
    // 0x1fe468: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FE468u;
    {
        const bool branch_taken_0x1fe468 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1FE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE468u;
        // 0x1fe46c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe468) {
            ctx->pc = 0x1FE458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe458;
        }
    }
    ctx->pc = 0x1FE470u;
    // 0x1fe470: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1fe470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1fe474: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x1fe474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x1fe478: 0x2451c380  addiu       $s1, $v0, -0x3C80
    ctx->pc = 0x1fe478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951808));
    // 0x1fe47c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1fe47cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe480:
    // 0x1fe480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe484: 0xc07f1f2  jal         func_1FC7C8
    ctx->pc = 0x1FE484u;
    SET_GPR_U32(ctx, 31, 0x1FE48Cu);
    ctx->pc = 0x1FE488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE484u;
    // 0x1fe488: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC7C8u, 0x1FE484u, 0x1FE48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE48Cu;
label_1fe48c:
    // 0x1fe48c: 0x0  nop
    ctx->pc = 0x1fe48cu;
    // NOP
    // 0x1fe490: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FE490u;
    {
        const bool branch_taken_0x1fe490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x1FE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE490u;
        // 0x1fe494: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe490) {
            ctx->pc = 0x1FE480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe480;
        }
    }
    ctx->pc = 0x1FE498u;
    // 0x1fe498: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1fe498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1fe49c: 0xc07f780  jal         func_1FDE00
    ctx->pc = 0x1FE49Cu;
    SET_GPR_U32(ctx, 31, 0x1FE4A4u);
    ctx->pc = 0x1FE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE49Cu;
    // 0x1fe4a0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDE00u, 0x1FE49Cu, 0x1FE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4A4u;
label_1fe4a4:
    // 0x1fe4a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe4a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe4ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe4acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe4b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4B4u;
        // 0x1fe4b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE4BCu;
    // 0x1fe4bc: 0x0  nop
    ctx->pc = 0x1fe4bcu;
    // NOP
    ctx->pc = 0x1fe4c0u;
}
