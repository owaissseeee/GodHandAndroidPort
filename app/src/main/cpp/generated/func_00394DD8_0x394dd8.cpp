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

// Function: func_00394DD8
// Address: 0x394dd8 - 0x394f20
void func_00394DD8_0x394dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00394DD8_0x394dd8");
#endif

    switch (ctx->pc) {
        case 0x394dd8u: goto label_394dd8;
        case 0x394ddcu: goto label_394ddc;
        case 0x394de0u: goto label_394de0;
        case 0x394de4u: goto label_394de4;
        case 0x394de8u: goto label_394de8;
        case 0x394decu: goto label_394dec;
        case 0x394df0u: goto label_394df0;
        case 0x394df4u: goto label_394df4;
        case 0x394df8u: goto label_394df8;
        case 0x394dfcu: goto label_394dfc;
        case 0x394e00u: goto label_394e00;
        case 0x394e04u: goto label_394e04;
        case 0x394e08u: goto label_394e08;
        case 0x394e0cu: goto label_394e0c;
        case 0x394e10u: goto label_394e10;
        case 0x394e14u: goto label_394e14;
        case 0x394e18u: goto label_394e18;
        case 0x394e1cu: goto label_394e1c;
        case 0x394e20u: goto label_394e20;
        case 0x394e24u: goto label_394e24;
        case 0x394e28u: goto label_394e28;
        case 0x394e2cu: goto label_394e2c;
        case 0x394e30u: goto label_394e30;
        case 0x394e34u: goto label_394e34;
        case 0x394e38u: goto label_394e38;
        case 0x394e3cu: goto label_394e3c;
        case 0x394e40u: goto label_394e40;
        case 0x394e44u: goto label_394e44;
        case 0x394e48u: goto label_394e48;
        case 0x394e4cu: goto label_394e4c;
        case 0x394e50u: goto label_394e50;
        case 0x394e54u: goto label_394e54;
        case 0x394e58u: goto label_394e58;
        case 0x394e5cu: goto label_394e5c;
        case 0x394e60u: goto label_394e60;
        case 0x394e64u: goto label_394e64;
        case 0x394e68u: goto label_394e68;
        case 0x394e6cu: goto label_394e6c;
        case 0x394e70u: goto label_394e70;
        case 0x394e74u: goto label_394e74;
        case 0x394e78u: goto label_394e78;
        case 0x394e7cu: goto label_394e7c;
        case 0x394e80u: goto label_394e80;
        case 0x394e84u: goto label_394e84;
        case 0x394e88u: goto label_394e88;
        case 0x394e8cu: goto label_394e8c;
        case 0x394e90u: goto label_394e90;
        case 0x394e94u: goto label_394e94;
        case 0x394e98u: goto label_394e98;
        case 0x394e9cu: goto label_394e9c;
        case 0x394ea0u: goto label_394ea0;
        case 0x394ea4u: goto label_394ea4;
        case 0x394ea8u: goto label_394ea8;
        case 0x394eacu: goto label_394eac;
        case 0x394eb0u: goto label_394eb0;
        case 0x394eb4u: goto label_394eb4;
        case 0x394eb8u: goto label_394eb8;
        case 0x394ebcu: goto label_394ebc;
        case 0x394ec0u: goto label_394ec0;
        case 0x394ec4u: goto label_394ec4;
        case 0x394ec8u: goto label_394ec8;
        case 0x394eccu: goto label_394ecc;
        case 0x394ed0u: goto label_394ed0;
        case 0x394ed4u: goto label_394ed4;
        case 0x394ed8u: goto label_394ed8;
        case 0x394edcu: goto label_394edc;
        case 0x394ee0u: goto label_394ee0;
        case 0x394ee4u: goto label_394ee4;
        case 0x394ee8u: goto label_394ee8;
        case 0x394eecu: goto label_394eec;
        case 0x394ef0u: goto label_394ef0;
        case 0x394ef4u: goto label_394ef4;
        case 0x394ef8u: goto label_394ef8;
        case 0x394efcu: goto label_394efc;
        case 0x394f00u: goto label_394f00;
        case 0x394f04u: goto label_394f04;
        case 0x394f08u: goto label_394f08;
        case 0x394f0cu: goto label_394f0c;
        case 0x394f10u: goto label_394f10;
        case 0x394f14u: goto label_394f14;
        case 0x394f18u: goto label_394f18;
        case 0x394f1cu: goto label_394f1c;
        default: break;
    }

    ctx->pc = 0x394dd8u;

label_394dd8:
    // 0x394dd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x394dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_394ddc:
    // 0x394ddc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x394ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_394de0:
    // 0x394de0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x394de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_394de4:
    // 0x394de4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x394de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_394de8:
    // 0x394de8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x394de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_394dec:
    // 0x394dec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x394decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394df0:
    // 0x394df0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_394df4:
    if (ctx->pc == 0x394DF4u) {
        ctx->pc = 0x394DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DF0u;
        // 0x394df4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394DF8u;
        goto label_394df8;
    }
    ctx->pc = 0x394DF0u;
    {
        const bool branch_taken_0x394df0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DF0u;
        // 0x394df4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394df0) {
            ctx->pc = 0x394DFCu;
            goto label_394dfc;
        }
    }
    ctx->pc = 0x394DF8u;
label_394df8:
    // 0x394df8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x394df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_394dfc:
    // 0x394dfc: 0xc0e4fe0  jal         func_393F80
label_394e00:
    if (ctx->pc == 0x394E00u) {
        ctx->pc = 0x394E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DFCu;
        // 0x394e00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E04u;
        goto label_394e04;
    }
    ctx->pc = 0x394DFCu;
    SET_GPR_U32(ctx, 31, 0x394E04u);
    ctx->pc = 0x394E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394DFCu;
    // 0x394e00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393F80u, 0x394DFCu, 0x394E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E04u;
label_394e04:
    // 0x394e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x394e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394e08:
    // 0x394e08: 0x1600003f  bnez        $s0, . + 4 + (0x3F << 2)
label_394e0c:
    if (ctx->pc == 0x394E0Cu) {
        ctx->pc = 0x394E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E08u;
        // 0x394e0c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E10u;
        goto label_394e10;
    }
    ctx->pc = 0x394E08u;
    {
        const bool branch_taken_0x394e08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x394E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E08u;
        // 0x394e0c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e08) {
            ctx->pc = 0x394F08u;
            goto label_394f08;
        }
    }
    ctx->pc = 0x394E10u;
label_394e10:
    // 0x394e10: 0xc0e5470  jal         func_3951C0
label_394e14:
    if (ctx->pc == 0x394E14u) {
        ctx->pc = 0x394E18u;
        goto label_394e18;
    }
    ctx->pc = 0x394E10u;
    SET_GPR_U32(ctx, 31, 0x394E18u);
    ctx->pc = 0x3951C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951C0u, 0x394E10u, 0x394E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E18u;
label_394e18:
    // 0x394e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x394e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_394e1c:
    // 0x394e1c: 0xc0e520a  jal         func_394828
label_394e20:
    if (ctx->pc == 0x394E20u) {
        ctx->pc = 0x394E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E1Cu;
        // 0x394e20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E24u;
        goto label_394e24;
    }
    ctx->pc = 0x394E1Cu;
    SET_GPR_U32(ctx, 31, 0x394E24u);
    ctx->pc = 0x394E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394E1Cu;
    // 0x394e20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394828u, 0x394E1Cu, 0x394E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E24u;
label_394e24:
    // 0x394e24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x394e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394e28:
    // 0x394e28: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_394e2c:
    if (ctx->pc == 0x394E2Cu) {
        ctx->pc = 0x394E30u;
        goto label_394e30;
    }
    ctx->pc = 0x394E28u;
    {
        const bool branch_taken_0x394e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x394e28) {
            ctx->pc = 0x394E40u;
            goto label_394e40;
        }
    }
    ctx->pc = 0x394E30u;
label_394e30:
    // 0x394e30: 0xc0e5474  jal         func_3951D0
label_394e34:
    if (ctx->pc == 0x394E34u) {
        ctx->pc = 0x394E38u;
        goto label_394e38;
    }
    ctx->pc = 0x394E30u;
    SET_GPR_U32(ctx, 31, 0x394E38u);
    ctx->pc = 0x3951D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D0u, 0x394E30u, 0x394E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E38u;
label_394e38:
    // 0x394e38: 0x10000032  b           . + 4 + (0x32 << 2)
label_394e3c:
    if (ctx->pc == 0x394E3Cu) {
        ctx->pc = 0x394E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E38u;
        // 0x394e3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E40u;
        goto label_394e40;
    }
    ctx->pc = 0x394E38u;
    {
        const bool branch_taken_0x394e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E38u;
        // 0x394e3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e38) {
            ctx->pc = 0x394F04u;
            goto label_394f04;
        }
    }
    ctx->pc = 0x394E40u;
label_394e40:
    // 0x394e40: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_394e44:
    if (ctx->pc == 0x394E44u) {
        ctx->pc = 0x394E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E40u;
        // 0x394e44: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E48u;
        goto label_394e48;
    }
    ctx->pc = 0x394E40u;
    {
        const bool branch_taken_0x394e40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x394e40) {
            ctx->pc = 0x394E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E40u;
            // 0x394e44: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E60u;
            goto label_394e60;
        }
    }
    ctx->pc = 0x394E48u;
label_394e48:
    // 0x394e48: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x394e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_394e4c:
    // 0x394e4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_394e50:
    if (ctx->pc == 0x394E50u) {
        ctx->pc = 0x394E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E4Cu;
        // 0x394e50: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E54u;
        goto label_394e54;
    }
    ctx->pc = 0x394E4Cu;
    {
        const bool branch_taken_0x394e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394e4c) {
            ctx->pc = 0x394E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E4Cu;
            // 0x394e50: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E60u;
            goto label_394e60;
        }
    }
    ctx->pc = 0x394E54u;
label_394e54:
    // 0x394e54: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x394e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_394e58:
    // 0x394e58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x394e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_394e5c:
    // 0x394e5c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x394e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_394e60:
    // 0x394e60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x394e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_394e64:
    // 0x394e64: 0xc0e5306  jal         func_394C18
label_394e68:
    if (ctx->pc == 0x394E68u) {
        ctx->pc = 0x394E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E64u;
        // 0x394e68: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E6Cu;
        goto label_394e6c;
    }
    ctx->pc = 0x394E64u;
    SET_GPR_U32(ctx, 31, 0x394E6Cu);
    ctx->pc = 0x394E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394E64u;
    // 0x394e68: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394C18u, 0x394E64u, 0x394E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E6Cu;
label_394e6c:
    // 0x394e6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x394e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394e70:
    // 0x394e70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x394e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_394e74:
    // 0x394e74: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x394e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_394e78:
    // 0x394e78: 0xc0e5474  jal         func_3951D0
label_394e7c:
    if (ctx->pc == 0x394E7Cu) {
        ctx->pc = 0x394E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E78u;
        // 0x394e7c: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E80u;
        goto label_394e80;
    }
    ctx->pc = 0x394E78u;
    SET_GPR_U32(ctx, 31, 0x394E80u);
    ctx->pc = 0x394E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394E78u;
    // 0x394e7c: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D0u, 0x394E78u, 0x394E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E80u;
label_394e80:
    // 0x394e80: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
label_394e84:
    if (ctx->pc == 0x394E84u) {
        ctx->pc = 0x394E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E80u;
        // 0x394e84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E88u;
        goto label_394e88;
    }
    ctx->pc = 0x394E80u;
    {
        const bool branch_taken_0x394e80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x394E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E80u;
        // 0x394e84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e80) {
            ctx->pc = 0x394F04u;
            goto label_394f04;
        }
    }
    ctx->pc = 0x394E88u;
label_394e88:
    // 0x394e88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x394e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_394e8c:
    // 0x394e8c: 0x8c438528  lw          $v1, -0x7AD8($v0)
    ctx->pc = 0x394e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935848)));
label_394e90:
    // 0x394e90: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_394e94:
    if (ctx->pc == 0x394E94u) {
        ctx->pc = 0x394E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E90u;
        // 0x394e94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E98u;
        goto label_394e98;
    }
    ctx->pc = 0x394E90u;
    {
        const bool branch_taken_0x394e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x394E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E90u;
        // 0x394e94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e90) {
            ctx->pc = 0x394EA8u;
            goto label_394ea8;
        }
    }
    ctx->pc = 0x394E98u;
label_394e98:
    // 0x394e98: 0xc0e546c  jal         func_3951B0
label_394e9c:
    if (ctx->pc == 0x394E9Cu) {
        ctx->pc = 0x394EA0u;
        goto label_394ea0;
    }
    ctx->pc = 0x394E98u;
    SET_GPR_U32(ctx, 31, 0x394EA0u);
    ctx->pc = 0x3951B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951B0u, 0x394E98u, 0x394EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394EA0u;
label_394ea0:
    // 0x394ea0: 0x10000013  b           . + 4 + (0x13 << 2)
label_394ea4:
    if (ctx->pc == 0x394EA4u) {
        ctx->pc = 0x394EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EA0u;
        // 0x394ea4: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EA8u;
        goto label_394ea8;
    }
    ctx->pc = 0x394EA0u;
    {
        const bool branch_taken_0x394ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EA0u;
        // 0x394ea4: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ea0) {
            ctx->pc = 0x394EF0u;
            goto label_394ef0;
        }
    }
    ctx->pc = 0x394EA8u;
label_394ea8:
    // 0x394ea8: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_394eac:
    if (ctx->pc == 0x394EACu) {
        ctx->pc = 0x394EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EA8u;
        // 0x394eac: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EB0u;
        goto label_394eb0;
    }
    ctx->pc = 0x394EA8u;
    {
        const bool branch_taken_0x394ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x394ea8) {
            ctx->pc = 0x394EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394EA8u;
            // 0x394eac: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394EF0u;
            goto label_394ef0;
        }
    }
    ctx->pc = 0x394EB0u;
label_394eb0:
    // 0x394eb0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x394eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_394eb4:
    // 0x394eb4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x394eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_394eb8:
    // 0x394eb8: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x394eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_394ebc:
    // 0x394ebc: 0x24425520  addiu       $v0, $v0, 0x5520
    ctx->pc = 0x394ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21792));
label_394ec0:
    // 0x394ec0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x394ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_394ec4:
    // 0x394ec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x394ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394ec8:
    // 0x394ec8: 0x2484dbd8  addiu       $a0, $a0, -0x2428
    ctx->pc = 0x394ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958040));
label_394ecc:
    // 0x394ecc: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x394eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_394ed0:
    // 0x394ed0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x394ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_394ed4:
    // 0x394ed4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x394ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_394ed8:
    // 0x394ed8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x394ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_394edc:
    // 0x394edc: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x394edcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_394ee0:
    // 0x394ee0: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x394ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_394ee4:
    // 0x394ee4: 0xc0e9a88  jal         func_3A6A20
label_394ee8:
    if (ctx->pc == 0x394EE8u) {
        ctx->pc = 0x394EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EE4u;
        // 0x394ee8: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EECu;
        goto label_394eec;
    }
    ctx->pc = 0x394EE4u;
    SET_GPR_U32(ctx, 31, 0x394EECu);
    ctx->pc = 0x394EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394EE4u;
    // 0x394ee8: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x394EE4u, 0x394EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394EECu;
label_394eec:
    // 0x394eec: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x394eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_394ef0:
    // 0x394ef0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_394ef4:
    if (ctx->pc == 0x394EF4u) {
        ctx->pc = 0x394EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EF0u;
        // 0x394ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EF8u;
        goto label_394ef8;
    }
    ctx->pc = 0x394EF0u;
    {
        const bool branch_taken_0x394ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x394EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EF0u;
        // 0x394ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ef0) {
            ctx->pc = 0x394F04u;
            goto label_394f04;
        }
    }
    ctx->pc = 0x394EF8u;
label_394ef8:
    // 0x394ef8: 0x80f809  jalr        $a0
label_394efc:
    if (ctx->pc == 0x394EFCu) {
        ctx->pc = 0x394F00u;
        goto label_394f00;
    }
    ctx->pc = 0x394EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x394F00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394EF8u, 0x394F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394F00u;
label_394f00:
    // 0x394f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x394f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394f04:
    // 0x394f04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x394f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_394f08:
    // 0x394f08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x394f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_394f0c:
    // 0x394f0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x394f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394f10:
    // 0x394f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_394f14:
    // 0x394f14: 0x3e00008  jr          $ra
label_394f18:
    if (ctx->pc == 0x394F18u) {
        ctx->pc = 0x394F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F14u;
        // 0x394f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F1Cu;
        goto label_394f1c;
    }
    ctx->pc = 0x394F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F14u;
        // 0x394f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394F1Cu;
label_394f1c:
    // 0x394f1c: 0x0  nop
    ctx->pc = 0x394f1cu;
    // NOP
    ctx->pc = 0x394f20u;
}
