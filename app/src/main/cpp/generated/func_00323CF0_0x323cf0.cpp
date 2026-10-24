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

// Function: func_00323CF0
// Address: 0x323cf0 - 0x323e80
void func_00323CF0_0x323cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323CF0_0x323cf0");
#endif

    switch (ctx->pc) {
        case 0x323cf0u: goto label_323cf0;
        case 0x323cf4u: goto label_323cf4;
        case 0x323cf8u: goto label_323cf8;
        case 0x323cfcu: goto label_323cfc;
        case 0x323d00u: goto label_323d00;
        case 0x323d04u: goto label_323d04;
        case 0x323d08u: goto label_323d08;
        case 0x323d0cu: goto label_323d0c;
        case 0x323d10u: goto label_323d10;
        case 0x323d14u: goto label_323d14;
        case 0x323d18u: goto label_323d18;
        case 0x323d1cu: goto label_323d1c;
        case 0x323d20u: goto label_323d20;
        case 0x323d24u: goto label_323d24;
        case 0x323d28u: goto label_323d28;
        case 0x323d2cu: goto label_323d2c;
        case 0x323d30u: goto label_323d30;
        case 0x323d34u: goto label_323d34;
        case 0x323d38u: goto label_323d38;
        case 0x323d3cu: goto label_323d3c;
        case 0x323d40u: goto label_323d40;
        case 0x323d44u: goto label_323d44;
        case 0x323d48u: goto label_323d48;
        case 0x323d4cu: goto label_323d4c;
        case 0x323d50u: goto label_323d50;
        case 0x323d54u: goto label_323d54;
        case 0x323d58u: goto label_323d58;
        case 0x323d5cu: goto label_323d5c;
        case 0x323d60u: goto label_323d60;
        case 0x323d64u: goto label_323d64;
        case 0x323d68u: goto label_323d68;
        case 0x323d6cu: goto label_323d6c;
        case 0x323d70u: goto label_323d70;
        case 0x323d74u: goto label_323d74;
        case 0x323d78u: goto label_323d78;
        case 0x323d7cu: goto label_323d7c;
        case 0x323d80u: goto label_323d80;
        case 0x323d84u: goto label_323d84;
        case 0x323d88u: goto label_323d88;
        case 0x323d8cu: goto label_323d8c;
        case 0x323d90u: goto label_323d90;
        case 0x323d94u: goto label_323d94;
        case 0x323d98u: goto label_323d98;
        case 0x323d9cu: goto label_323d9c;
        case 0x323da0u: goto label_323da0;
        case 0x323da4u: goto label_323da4;
        case 0x323da8u: goto label_323da8;
        case 0x323dacu: goto label_323dac;
        case 0x323db0u: goto label_323db0;
        case 0x323db4u: goto label_323db4;
        case 0x323db8u: goto label_323db8;
        case 0x323dbcu: goto label_323dbc;
        case 0x323dc0u: goto label_323dc0;
        case 0x323dc4u: goto label_323dc4;
        case 0x323dc8u: goto label_323dc8;
        case 0x323dccu: goto label_323dcc;
        case 0x323dd0u: goto label_323dd0;
        case 0x323dd4u: goto label_323dd4;
        case 0x323dd8u: goto label_323dd8;
        case 0x323ddcu: goto label_323ddc;
        case 0x323de0u: goto label_323de0;
        case 0x323de4u: goto label_323de4;
        case 0x323de8u: goto label_323de8;
        case 0x323decu: goto label_323dec;
        case 0x323df0u: goto label_323df0;
        case 0x323df4u: goto label_323df4;
        case 0x323df8u: goto label_323df8;
        case 0x323dfcu: goto label_323dfc;
        case 0x323e00u: goto label_323e00;
        case 0x323e04u: goto label_323e04;
        case 0x323e08u: goto label_323e08;
        case 0x323e0cu: goto label_323e0c;
        case 0x323e10u: goto label_323e10;
        case 0x323e14u: goto label_323e14;
        case 0x323e18u: goto label_323e18;
        case 0x323e1cu: goto label_323e1c;
        case 0x323e20u: goto label_323e20;
        case 0x323e24u: goto label_323e24;
        case 0x323e28u: goto label_323e28;
        case 0x323e2cu: goto label_323e2c;
        case 0x323e30u: goto label_323e30;
        case 0x323e34u: goto label_323e34;
        case 0x323e38u: goto label_323e38;
        case 0x323e3cu: goto label_323e3c;
        case 0x323e40u: goto label_323e40;
        case 0x323e44u: goto label_323e44;
        case 0x323e48u: goto label_323e48;
        case 0x323e4cu: goto label_323e4c;
        case 0x323e50u: goto label_323e50;
        case 0x323e54u: goto label_323e54;
        case 0x323e58u: goto label_323e58;
        case 0x323e5cu: goto label_323e5c;
        case 0x323e60u: goto label_323e60;
        case 0x323e64u: goto label_323e64;
        case 0x323e68u: goto label_323e68;
        case 0x323e6cu: goto label_323e6c;
        case 0x323e70u: goto label_323e70;
        case 0x323e74u: goto label_323e74;
        case 0x323e78u: goto label_323e78;
        case 0x323e7cu: goto label_323e7c;
        default: break;
    }

    ctx->pc = 0x323cf0u;

label_323cf0:
    // 0x323cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_323cf4:
    // 0x323cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_323cf8:
    // 0x323cf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323cfc:
    // 0x323cfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x323cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_323d00:
    // 0x323d00: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x323d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_323d04:
    // 0x323d04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x323d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_323d08:
    // 0x323d08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x323d08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_323d0c:
    // 0x323d0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x323d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_323d10:
    // 0x323d10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x323d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323d14:
    // 0x323d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323d18:
    // 0x323d18: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x323d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_323d1c:
    // 0x323d1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_323d20:
    // 0x323d20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_323d24:
    // 0x323d24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x323d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_323d28:
    // 0x323d28: 0xc0c8a30  jal         func_3228C0
label_323d2c:
    if (ctx->pc == 0x323D2Cu) {
        ctx->pc = 0x323D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D28u;
        // 0x323d2c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D30u;
        goto label_323d30;
    }
    ctx->pc = 0x323D28u;
    SET_GPR_U32(ctx, 31, 0x323D30u);
    ctx->pc = 0x323D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D28u;
    // 0x323d2c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x323D28u, 0x323D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D30u;
label_323d30:
    // 0x323d30: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_323d34:
    if (ctx->pc == 0x323D34u) {
        ctx->pc = 0x323D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D30u;
        // 0x323d34: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D38u;
        goto label_323d38;
    }
    ctx->pc = 0x323D30u;
    {
        const bool branch_taken_0x323d30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x323D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D30u;
        // 0x323d34: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d30) {
            ctx->pc = 0x323D40u;
            goto label_323d40;
        }
    }
    ctx->pc = 0x323D38u;
label_323d38:
    // 0x323d38: 0x10000009  b           . + 4 + (0x9 << 2)
label_323d3c:
    if (ctx->pc == 0x323D3Cu) {
        ctx->pc = 0x323D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D38u;
        // 0x323d3c: 0x24841718  addiu       $a0, $a0, 0x1718 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D40u;
        goto label_323d40;
    }
    ctx->pc = 0x323D38u;
    {
        const bool branch_taken_0x323d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D38u;
        // 0x323d3c: 0x24841718  addiu       $a0, $a0, 0x1718 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d38) {
            ctx->pc = 0x323D60u;
            goto label_323d60;
        }
    }
    ctx->pc = 0x323D40u;
label_323d40:
    // 0x323d40: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_323d44:
    if (ctx->pc == 0x323D44u) {
        ctx->pc = 0x323D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D40u;
        // 0x323d44: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D48u;
        goto label_323d48;
    }
    ctx->pc = 0x323D40u;
    {
        const bool branch_taken_0x323d40 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x323D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D40u;
        // 0x323d44: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d40) {
            ctx->pc = 0x323D50u;
            goto label_323d50;
        }
    }
    ctx->pc = 0x323D48u;
label_323d48:
    // 0x323d48: 0x10000005  b           . + 4 + (0x5 << 2)
label_323d4c:
    if (ctx->pc == 0x323D4Cu) {
        ctx->pc = 0x323D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D48u;
        // 0x323d4c: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D50u;
        goto label_323d50;
    }
    ctx->pc = 0x323D48u;
    {
        const bool branch_taken_0x323d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D48u;
        // 0x323d4c: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d48) {
            ctx->pc = 0x323D60u;
            goto label_323d60;
        }
    }
    ctx->pc = 0x323D50u;
label_323d50:
    // 0x323d50: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_323d54:
    if (ctx->pc == 0x323D54u) {
        ctx->pc = 0x323D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D50u;
        // 0x323d54: 0x82040001  lb          $a0, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D58u;
        goto label_323d58;
    }
    ctx->pc = 0x323D50u;
    {
        const bool branch_taken_0x323d50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x323d50) {
            ctx->pc = 0x323D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323D50u;
            // 0x323d54: 0x82040001  lb          $a0, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323D70u;
            goto label_323d70;
        }
    }
    ctx->pc = 0x323D58u;
label_323d58:
    // 0x323d58: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x323d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_323d5c:
    // 0x323d5c: 0x24841770  addiu       $a0, $a0, 0x1770
    ctx->pc = 0x323d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6000));
label_323d60:
    // 0x323d60: 0xc0cfc4c  jal         func_33F130
label_323d64:
    if (ctx->pc == 0x323D64u) {
        ctx->pc = 0x323D68u;
        goto label_323d68;
    }
    ctx->pc = 0x323D60u;
    SET_GPR_U32(ctx, 31, 0x323D68u);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x323D60u, 0x323D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D68u;
label_323d68:
    // 0x323d68: 0x1000003c  b           . + 4 + (0x3C << 2)
label_323d6c:
    if (ctx->pc == 0x323D6Cu) {
        ctx->pc = 0x323D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D68u;
        // 0x323d6c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D70u;
        goto label_323d70;
    }
    ctx->pc = 0x323D68u;
    {
        const bool branch_taken_0x323d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D68u;
        // 0x323d6c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d68) {
            ctx->pc = 0x323E5Cu;
            goto label_323e5c;
        }
    }
    ctx->pc = 0x323D70u;
label_323d70:
    // 0x323d70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x323d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_323d74:
    // 0x323d74: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_323d78:
    if (ctx->pc == 0x323D78u) {
        ctx->pc = 0x323D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D74u;
        // 0x323d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D7Cu;
        goto label_323d7c;
    }
    ctx->pc = 0x323D74u;
    {
        const bool branch_taken_0x323d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x323D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D74u;
        // 0x323d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d74) {
            ctx->pc = 0x323E5Cu;
            goto label_323e5c;
        }
    }
    ctx->pc = 0x323D7Cu;
label_323d7c:
    // 0x323d7c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_323d80:
    // 0x323d80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_323d84:
    if (ctx->pc == 0x323D84u) {
        ctx->pc = 0x323D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D80u;
        // 0x323d84: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D88u;
        goto label_323d88;
    }
    ctx->pc = 0x323D80u;
    {
        const bool branch_taken_0x323d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D80u;
        // 0x323d84: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d80) {
            ctx->pc = 0x323D98u;
            goto label_323d98;
        }
    }
    ctx->pc = 0x323D88u;
label_323d88:
    // 0x323d88: 0xc0cfc4c  jal         func_33F130
label_323d8c:
    if (ctx->pc == 0x323D8Cu) {
        ctx->pc = 0x323D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D88u;
        // 0x323d8c: 0x24841798  addiu       $a0, $a0, 0x1798 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D90u;
        goto label_323d90;
    }
    ctx->pc = 0x323D88u;
    SET_GPR_U32(ctx, 31, 0x323D90u);
    ctx->pc = 0x323D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D88u;
    // 0x323d8c: 0x24841798  addiu       $a0, $a0, 0x1798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x323D88u, 0x323D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D90u;
label_323d90:
    // 0x323d90: 0x10000032  b           . + 4 + (0x32 << 2)
label_323d94:
    if (ctx->pc == 0x323D94u) {
        ctx->pc = 0x323D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D90u;
        // 0x323d94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323D98u;
        goto label_323d98;
    }
    ctx->pc = 0x323D90u;
    {
        const bool branch_taken_0x323d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D90u;
        // 0x323d94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d90) {
            ctx->pc = 0x323E5Cu;
            goto label_323e5c;
        }
    }
    ctx->pc = 0x323D98u;
label_323d98:
    // 0x323d98: 0x1492c0  sll         $s2, $s4, 11
    ctx->pc = 0x323d98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
label_323d9c:
    // 0x323d9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x323d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_323da0:
    // 0x323da0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x323da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_323da4:
    // 0x323da4: 0xc0ce568  jal         func_3395A0
label_323da8:
    if (ctx->pc == 0x323DA8u) {
        ctx->pc = 0x323DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DA4u;
        // 0x323da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323DACu;
        goto label_323dac;
    }
    ctx->pc = 0x323DA4u;
    SET_GPR_U32(ctx, 31, 0x323DACu);
    ctx->pc = 0x323DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323DA4u;
    // 0x323da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x323DA4u, 0x323DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323DACu;
label_323dac:
    // 0x323dac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x323dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323db0:
    // 0x323db0: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_323db4:
    if (ctx->pc == 0x323DB4u) {
        ctx->pc = 0x323DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DB0u;
        // 0x323db4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323DB8u;
        goto label_323db8;
    }
    ctx->pc = 0x323DB0u;
    {
        const bool branch_taken_0x323db0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x323DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DB0u;
        // 0x323db4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323db0) {
            ctx->pc = 0x323E5Cu;
            goto label_323e5c;
        }
    }
    ctx->pc = 0x323DB8u;
label_323db8:
    // 0x323db8: 0xc0cf99e  jal         func_33E678
label_323dbc:
    if (ctx->pc == 0x323DBCu) {
        ctx->pc = 0x323DC0u;
        goto label_323dc0;
    }
    ctx->pc = 0x323DB8u;
    SET_GPR_U32(ctx, 31, 0x323DC0u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x323DB8u, 0x323DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323DC0u;
label_323dc0:
    // 0x323dc0: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x323dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
label_323dc4:
    // 0x323dc4: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x323dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_323dc8:
    // 0x323dc8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x323dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_323dcc:
    // 0x323dcc: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x323dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
label_323dd0:
    // 0x323dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323dd4:
    // 0x323dd4: 0x8c82b708  lw          $v0, -0x48F8($a0)
    ctx->pc = 0x323dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948616)));
label_323dd8:
    // 0x323dd8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_323ddc:
    if (ctx->pc == 0x323DDCu) {
        ctx->pc = 0x323DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DD8u;
        // 0x323ddc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323DE0u;
        goto label_323de0;
    }
    ctx->pc = 0x323DD8u;
    {
        const bool branch_taken_0x323dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x323DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DD8u;
        // 0x323ddc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323dd8) {
            ctx->pc = 0x323DE8u;
            goto label_323de8;
        }
    }
    ctx->pc = 0x323DE0u;
label_323de0:
    // 0x323de0: 0xc0cfcf4  jal         func_33F3D0
label_323de4:
    if (ctx->pc == 0x323DE4u) {
        ctx->pc = 0x323DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DE0u;
        // 0x323de4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323DE8u;
        goto label_323de8;
    }
    ctx->pc = 0x323DE0u;
    SET_GPR_U32(ctx, 31, 0x323DE8u);
    ctx->pc = 0x323DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323DE0u;
    // 0x323de4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F3D0u, 0x323DE0u, 0x323DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323DE8u;
label_323de8:
    // 0x323de8: 0xc0cf9a4  jal         func_33E690
label_323dec:
    if (ctx->pc == 0x323DECu) {
        ctx->pc = 0x323DF0u;
        goto label_323df0;
    }
    ctx->pc = 0x323DE8u;
    SET_GPR_U32(ctx, 31, 0x323DF0u);
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x323DE8u, 0x323DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323DF0u;
label_323df0:
    // 0x323df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323df4:
    // 0x323df4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x323df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_323df8:
    // 0x323df8: 0xc0c8ef8  jal         func_323BE0
label_323dfc:
    if (ctx->pc == 0x323DFCu) {
        ctx->pc = 0x323DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DF8u;
        // 0x323dfc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323E00u;
        goto label_323e00;
    }
    ctx->pc = 0x323DF8u;
    SET_GPR_U32(ctx, 31, 0x323E00u);
    ctx->pc = 0x323DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323DF8u;
    // 0x323dfc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BE0u, 0x323DF8u, 0x323E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E00u;
label_323e00:
    // 0x323e00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x323e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323e04:
    // 0x323e04: 0x5e20000e  bgtzl       $s1, . + 4 + (0xE << 2)
label_323e08:
    if (ctx->pc == 0x323E08u) {
        ctx->pc = 0x323E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E04u;
        // 0x323e08: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323E0Cu;
        goto label_323e0c;
    }
    ctx->pc = 0x323E04u;
    {
        const bool branch_taken_0x323e04 = (GPR_S64(ctx, 17) > 0);
        if (branch_taken_0x323e04) {
            ctx->pc = 0x323E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323E04u;
            // 0x323e08: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323E40u;
            goto label_323e40;
        }
    }
    ctx->pc = 0x323E0Cu;
label_323e0c:
    // 0x323e0c: 0xc0cf99e  jal         func_33E678
label_323e10:
    if (ctx->pc == 0x323E10u) {
        ctx->pc = 0x323E14u;
        goto label_323e14;
    }
    ctx->pc = 0x323E0Cu;
    SET_GPR_U32(ctx, 31, 0x323E14u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x323E0Cu, 0x323E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E14u;
label_323e14:
    // 0x323e14: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x323e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_323e18:
    // 0x323e18: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_323e1c:
    if (ctx->pc == 0x323E1Cu) {
        ctx->pc = 0x323E20u;
        goto label_323e20;
    }
    ctx->pc = 0x323E18u;
    {
        const bool branch_taken_0x323e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x323e18) {
            ctx->pc = 0x323E34u;
            goto label_323e34;
        }
    }
    ctx->pc = 0x323E20u;
label_323e20:
    // 0x323e20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x323e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_323e24:
    // 0x323e24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x323e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_323e28:
    // 0x323e28: 0x40f809  jalr        $v0
label_323e2c:
    if (ctx->pc == 0x323E2Cu) {
        ctx->pc = 0x323E30u;
        goto label_323e30;
    }
    ctx->pc = 0x323E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323E30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323E28u, 0x323E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323E30u;
label_323e30:
    // 0x323e30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x323e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_323e34:
    // 0x323e34: 0xc0cf9a4  jal         func_33E690
label_323e38:
    if (ctx->pc == 0x323E38u) {
        ctx->pc = 0x323E3Cu;
        goto label_323e3c;
    }
    ctx->pc = 0x323E34u;
    SET_GPR_U32(ctx, 31, 0x323E3Cu);
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x323E34u, 0x323E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E3Cu;
label_323e3c:
    // 0x323e3c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x323e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_323e40:
    // 0x323e40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x323e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323e44:
    // 0x323e44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x323e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_323e48:
    // 0x323e48: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x323e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_323e4c:
    // 0x323e4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x323e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_323e50:
    // 0x323e50: 0xc0c8a30  jal         func_3228C0
label_323e54:
    if (ctx->pc == 0x323E54u) {
        ctx->pc = 0x323E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E50u;
        // 0x323e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323E58u;
        goto label_323e58;
    }
    ctx->pc = 0x323E50u;
    SET_GPR_U32(ctx, 31, 0x323E58u);
    ctx->pc = 0x323E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E50u;
    // 0x323e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x323E50u, 0x323E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E58u;
label_323e58:
    // 0x323e58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x323e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_323e5c:
    // 0x323e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323e60:
    // 0x323e60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_323e64:
    // 0x323e64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x323e64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_323e68:
    // 0x323e68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x323e68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_323e6c:
    // 0x323e6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x323e6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_323e70:
    // 0x323e70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x323e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_323e74:
    // 0x323e74: 0x3e00008  jr          $ra
label_323e78:
    if (ctx->pc == 0x323E78u) {
        ctx->pc = 0x323E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E74u;
        // 0x323e78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323E7Cu;
        goto label_323e7c;
    }
    ctx->pc = 0x323E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E74u;
        // 0x323e78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323E7Cu;
label_323e7c:
    // 0x323e7c: 0x0  nop
    ctx->pc = 0x323e7cu;
    // NOP
    ctx->pc = 0x323e80u;
}
