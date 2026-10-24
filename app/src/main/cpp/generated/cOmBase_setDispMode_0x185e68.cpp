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

// Function: cOmBase_setDispMode
// Address: 0x185e68 - 0x185f50
void cOmBase_setDispMode_0x185e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_setDispMode_0x185e68");
#endif

    switch (ctx->pc) {
        case 0x185e8cu: goto label_185e8c;
        case 0x185e9cu: goto label_185e9c;
        case 0x185eecu: goto label_185eec;
        case 0x185f14u: goto label_185f14;
        case 0x185f3cu: goto label_185f3c;
        default: break;
    }

    ctx->pc = 0x185e68u;

    // 0x185e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x185e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x185e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185e78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x185e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x185e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185e84: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185E84u;
    SET_GPR_U32(ctx, 31, 0x185E8Cu);
    ctx->pc = 0x185E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E84u;
    // 0x185e88: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185E84u, 0x185E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E8Cu;
label_185e8c:
    // 0x185e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e90: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x185e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x185e94: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185E94u;
    SET_GPR_U32(ctx, 31, 0x185E9Cu);
    ctx->pc = 0x185E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E94u;
    // 0x185e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185E94u, 0x185E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E9Cu;
label_185e9c:
    // 0x185e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185ea0: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x185EA0u;
    {
        const bool branch_taken_0x185ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x185EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA0u;
        // 0x185ea4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ea0) {
            ctx->pc = 0x185EDCu;
            goto label_185edc;
        }
    }
    ctx->pc = 0x185EA8u;
    // 0x185ea8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x185EA8u;
    {
        const bool branch_taken_0x185ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ea8) {
            ctx->pc = 0x185EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185EA8u;
            // 0x185eac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185EC0u;
            goto label_185ec0;
        }
    }
    ctx->pc = 0x185EB0u;
    // 0x185eb0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185EB0u;
    {
        const bool branch_taken_0x185eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB0u;
        // 0x185eb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185eb0) {
            ctx->pc = 0x185ED0u;
            goto label_185ed0;
        }
    }
    ctx->pc = 0x185EB8u;
    // 0x185eb8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x185EB8u;
    {
        const bool branch_taken_0x185eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB8u;
        // 0x185ebc: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185eb8) {
            ctx->pc = 0x185F44u;
            goto label_185f44;
        }
    }
    ctx->pc = 0x185EC0u;
label_185ec0:
    // 0x185ec0: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185EC0u;
    {
        const bool branch_taken_0x185ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x185EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EC0u;
        // 0x185ec4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ec0) {
            ctx->pc = 0x185EF4u;
            goto label_185ef4;
        }
    }
    ctx->pc = 0x185EC8u;
    // 0x185ec8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x185EC8u;
    {
        const bool branch_taken_0x185ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EC8u;
        // 0x185ecc: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ec8) {
            ctx->pc = 0x185F44u;
            goto label_185f44;
        }
    }
    ctx->pc = 0x185ED0u;
label_185ed0:
    // 0x185ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185ED4u;
    {
        const bool branch_taken_0x185ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185ED4u;
        // 0x185ed8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ed4) {
            ctx->pc = 0x185EE4u;
            goto label_185ee4;
        }
    }
    ctx->pc = 0x185EDCu;
label_185edc:
    // 0x185edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ee0: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x185ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_185ee4:
    // 0x185ee4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185EE4u;
    SET_GPR_U32(ctx, 31, 0x185EECu);
    ctx->pc = 0x185EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EE4u;
    // 0x185ee8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185EE4u, 0x185EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185EECu;
label_185eec:
    // 0x185eec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x185EECu;
    {
        const bool branch_taken_0x185eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EECu;
        // 0x185ef0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185eec) {
            ctx->pc = 0x185F40u;
            goto label_185f40;
        }
    }
    ctx->pc = 0x185EF4u;
label_185ef4:
    // 0x185ef4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x185ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x185ef8: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x185ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x185efc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185f00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x185f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185f0c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x185F0Cu;
    SET_GPR_U32(ctx, 31, 0x185F14u);
    ctx->pc = 0x185F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F0Cu;
    // 0x185f10: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x185F0Cu, 0x185F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F14u;
label_185f14:
    // 0x185f14: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185f18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x185f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f1c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185f20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185f24: 0x24060113  addiu       $a2, $zero, 0x113
    ctx->pc = 0x185f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x185f28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185f2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185f30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f34: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185F34u;
    SET_GPR_U32(ctx, 31, 0x185F3Cu);
    ctx->pc = 0x185F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F34u;
    // 0x185f38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185F34u, 0x185F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F3Cu;
label_185f3c:
    // 0x185f3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x185f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185f40:
    // 0x185f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185f44:
    // 0x185f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185f48: 0x3e00008  jr          $ra
    ctx->pc = 0x185F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F48u;
        // 0x185f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185F50u;
}
