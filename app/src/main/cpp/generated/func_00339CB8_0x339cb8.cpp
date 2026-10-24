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

// Function: func_00339CB8
// Address: 0x339cb8 - 0x339e98
void func_00339CB8_0x339cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339CB8_0x339cb8");
#endif

    switch (ctx->pc) {
        case 0x339cb8u: goto label_339cb8;
        case 0x339cbcu: goto label_339cbc;
        case 0x339cc0u: goto label_339cc0;
        case 0x339cc4u: goto label_339cc4;
        case 0x339cc8u: goto label_339cc8;
        case 0x339cccu: goto label_339ccc;
        case 0x339cd0u: goto label_339cd0;
        case 0x339cd4u: goto label_339cd4;
        case 0x339cd8u: goto label_339cd8;
        case 0x339cdcu: goto label_339cdc;
        case 0x339ce0u: goto label_339ce0;
        case 0x339ce4u: goto label_339ce4;
        case 0x339ce8u: goto label_339ce8;
        case 0x339cecu: goto label_339cec;
        case 0x339cf0u: goto label_339cf0;
        case 0x339cf4u: goto label_339cf4;
        case 0x339cf8u: goto label_339cf8;
        case 0x339cfcu: goto label_339cfc;
        case 0x339d00u: goto label_339d00;
        case 0x339d04u: goto label_339d04;
        case 0x339d08u: goto label_339d08;
        case 0x339d0cu: goto label_339d0c;
        case 0x339d10u: goto label_339d10;
        case 0x339d14u: goto label_339d14;
        case 0x339d18u: goto label_339d18;
        case 0x339d1cu: goto label_339d1c;
        case 0x339d20u: goto label_339d20;
        case 0x339d24u: goto label_339d24;
        case 0x339d28u: goto label_339d28;
        case 0x339d2cu: goto label_339d2c;
        case 0x339d30u: goto label_339d30;
        case 0x339d34u: goto label_339d34;
        case 0x339d38u: goto label_339d38;
        case 0x339d3cu: goto label_339d3c;
        case 0x339d40u: goto label_339d40;
        case 0x339d44u: goto label_339d44;
        case 0x339d48u: goto label_339d48;
        case 0x339d4cu: goto label_339d4c;
        case 0x339d50u: goto label_339d50;
        case 0x339d54u: goto label_339d54;
        case 0x339d58u: goto label_339d58;
        case 0x339d5cu: goto label_339d5c;
        case 0x339d60u: goto label_339d60;
        case 0x339d64u: goto label_339d64;
        case 0x339d68u: goto label_339d68;
        case 0x339d6cu: goto label_339d6c;
        case 0x339d70u: goto label_339d70;
        case 0x339d74u: goto label_339d74;
        case 0x339d78u: goto label_339d78;
        case 0x339d7cu: goto label_339d7c;
        case 0x339d80u: goto label_339d80;
        case 0x339d84u: goto label_339d84;
        case 0x339d88u: goto label_339d88;
        case 0x339d8cu: goto label_339d8c;
        case 0x339d90u: goto label_339d90;
        case 0x339d94u: goto label_339d94;
        case 0x339d98u: goto label_339d98;
        case 0x339d9cu: goto label_339d9c;
        case 0x339da0u: goto label_339da0;
        case 0x339da4u: goto label_339da4;
        case 0x339da8u: goto label_339da8;
        case 0x339dacu: goto label_339dac;
        case 0x339db0u: goto label_339db0;
        case 0x339db4u: goto label_339db4;
        case 0x339db8u: goto label_339db8;
        case 0x339dbcu: goto label_339dbc;
        case 0x339dc0u: goto label_339dc0;
        case 0x339dc4u: goto label_339dc4;
        case 0x339dc8u: goto label_339dc8;
        case 0x339dccu: goto label_339dcc;
        case 0x339dd0u: goto label_339dd0;
        case 0x339dd4u: goto label_339dd4;
        case 0x339dd8u: goto label_339dd8;
        case 0x339ddcu: goto label_339ddc;
        case 0x339de0u: goto label_339de0;
        case 0x339de4u: goto label_339de4;
        case 0x339de8u: goto label_339de8;
        case 0x339decu: goto label_339dec;
        case 0x339df0u: goto label_339df0;
        case 0x339df4u: goto label_339df4;
        case 0x339df8u: goto label_339df8;
        case 0x339dfcu: goto label_339dfc;
        case 0x339e00u: goto label_339e00;
        case 0x339e04u: goto label_339e04;
        case 0x339e08u: goto label_339e08;
        case 0x339e0cu: goto label_339e0c;
        case 0x339e10u: goto label_339e10;
        case 0x339e14u: goto label_339e14;
        case 0x339e18u: goto label_339e18;
        case 0x339e1cu: goto label_339e1c;
        case 0x339e20u: goto label_339e20;
        case 0x339e24u: goto label_339e24;
        case 0x339e28u: goto label_339e28;
        case 0x339e2cu: goto label_339e2c;
        case 0x339e30u: goto label_339e30;
        case 0x339e34u: goto label_339e34;
        case 0x339e38u: goto label_339e38;
        case 0x339e3cu: goto label_339e3c;
        case 0x339e40u: goto label_339e40;
        case 0x339e44u: goto label_339e44;
        case 0x339e48u: goto label_339e48;
        case 0x339e4cu: goto label_339e4c;
        case 0x339e50u: goto label_339e50;
        case 0x339e54u: goto label_339e54;
        case 0x339e58u: goto label_339e58;
        case 0x339e5cu: goto label_339e5c;
        case 0x339e60u: goto label_339e60;
        case 0x339e64u: goto label_339e64;
        case 0x339e68u: goto label_339e68;
        case 0x339e6cu: goto label_339e6c;
        case 0x339e70u: goto label_339e70;
        case 0x339e74u: goto label_339e74;
        case 0x339e78u: goto label_339e78;
        case 0x339e7cu: goto label_339e7c;
        case 0x339e80u: goto label_339e80;
        case 0x339e84u: goto label_339e84;
        case 0x339e88u: goto label_339e88;
        case 0x339e8cu: goto label_339e8c;
        case 0x339e90u: goto label_339e90;
        case 0x339e94u: goto label_339e94;
        default: break;
    }

    ctx->pc = 0x339cb8u;

label_339cb8:
    // 0x339cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_339cbc:
    // 0x339cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_339cc0:
    // 0x339cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339cc4:
    // 0x339cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x339cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_339cc8:
    // 0x339cc8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x339cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_339ccc:
    // 0x339ccc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_339cd0:
    if (ctx->pc == 0x339CD0u) {
        ctx->pc = 0x339CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CCCu;
        // 0x339cd0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339CD4u;
        goto label_339cd4;
    }
    ctx->pc = 0x339CCCu;
    {
        const bool branch_taken_0x339ccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x339CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CCCu;
        // 0x339cd0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ccc) {
            ctx->pc = 0x339CF8u;
            goto label_339cf8;
        }
    }
    ctx->pc = 0x339CD4u;
label_339cd4:
    // 0x339cd4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339cd8:
    // 0x339cd8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339cdc:
    // 0x339cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339ce0:
    // 0x339ce0: 0x24845b58  addiu       $a0, $a0, 0x5B58
    ctx->pc = 0x339ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23384));
label_339ce4:
    // 0x339ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339ce8:
    // 0x339ce8: 0x24a55a80  addiu       $a1, $a1, 0x5A80
    ctx->pc = 0x339ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23168));
label_339cec:
    // 0x339cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339cf0:
    // 0x339cf0: 0x80ce516  j           func_339458
label_339cf4:
    if (ctx->pc == 0x339CF4u) {
        ctx->pc = 0x339CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CF0u;
        // 0x339cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339CF8u;
        goto label_339cf8;
    }
    ctx->pc = 0x339CF0u;
    ctx->pc = 0x339CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339CF0u;
    // 0x339cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339CF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339CF8u;
label_339cf8:
    // 0x339cf8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x339cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_339cfc:
    // 0x339cfc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_339d00:
    if (ctx->pc == 0x339D00u) {
        ctx->pc = 0x339D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CFCu;
        // 0x339d00: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D04u;
        goto label_339d04;
    }
    ctx->pc = 0x339CFCu;
    {
        const bool branch_taken_0x339cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339cfc) {
            ctx->pc = 0x339D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339CFCu;
            // 0x339d00: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339D28u;
            goto label_339d28;
        }
    }
    ctx->pc = 0x339D04u;
label_339d04:
    // 0x339d04: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339d08:
    // 0x339d08: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339d0c:
    // 0x339d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339d10:
    // 0x339d10: 0x24845b68  addiu       $a0, $a0, 0x5B68
    ctx->pc = 0x339d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23400));
label_339d14:
    // 0x339d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339d18:
    // 0x339d18: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x339d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
label_339d1c:
    // 0x339d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339d20:
    // 0x339d20: 0x80ce516  j           func_339458
label_339d24:
    if (ctx->pc == 0x339D24u) {
        ctx->pc = 0x339D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D20u;
        // 0x339d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D28u;
        goto label_339d28;
    }
    ctx->pc = 0x339D20u;
    ctx->pc = 0x339D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339D20u;
    // 0x339d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339D20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339D28u;
label_339d28:
    // 0x339d28: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
label_339d2c:
    if (ctx->pc == 0x339D2Cu) {
        ctx->pc = 0x339D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D28u;
        // 0x339d2c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D30u;
        goto label_339d30;
    }
    ctx->pc = 0x339D28u;
    {
        const bool branch_taken_0x339d28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x339d28) {
            ctx->pc = 0x339D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339D28u;
            // 0x339d2c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339D58u;
            goto label_339d58;
        }
    }
    ctx->pc = 0x339D30u;
label_339d30:
    // 0x339d30: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339d34:
    // 0x339d34: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339d38:
    // 0x339d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339d3c:
    // 0x339d3c: 0x24845b78  addiu       $a0, $a0, 0x5B78
    ctx->pc = 0x339d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23416));
label_339d40:
    // 0x339d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339d44:
    // 0x339d44: 0x24a55b20  addiu       $a1, $a1, 0x5B20
    ctx->pc = 0x339d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23328));
label_339d48:
    // 0x339d48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339d4c:
    // 0x339d4c: 0x80ce516  j           func_339458
label_339d50:
    if (ctx->pc == 0x339D50u) {
        ctx->pc = 0x339D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D4Cu;
        // 0x339d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D54u;
        goto label_339d54;
    }
    ctx->pc = 0x339D4Cu;
    ctx->pc = 0x339D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339D4Cu;
    // 0x339d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339D4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339D54u;
label_339d54:
    // 0x339d54: 0x0  nop
    ctx->pc = 0x339d54u;
    // NOP
label_339d58:
    // 0x339d58: 0x58e0004a  blezl       $a3, . + 4 + (0x4A << 2)
label_339d5c:
    if (ctx->pc == 0x339D5Cu) {
        ctx->pc = 0x339D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D58u;
        // 0x339d5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D60u;
        goto label_339d60;
    }
    ctx->pc = 0x339D58u;
    {
        const bool branch_taken_0x339d58 = (GPR_S64(ctx, 7) <= 0);
        if (branch_taken_0x339d58) {
            ctx->pc = 0x339D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339D58u;
            // 0x339d5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339E84u;
            goto label_339e84;
        }
    }
    ctx->pc = 0x339D60u;
label_339d60:
    // 0x339d60: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x339d60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_339d64:
    // 0x339d64: 0x51000047  beql        $t0, $zero, . + 4 + (0x47 << 2)
label_339d68:
    if (ctx->pc == 0x339D68u) {
        ctx->pc = 0x339D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D64u;
        // 0x339d68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D6Cu;
        goto label_339d6c;
    }
    ctx->pc = 0x339D64u;
    {
        const bool branch_taken_0x339d64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d64) {
            ctx->pc = 0x339D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339D64u;
            // 0x339d68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339E84u;
            goto label_339e84;
        }
    }
    ctx->pc = 0x339D6Cu;
label_339d6c:
    // 0x339d6c: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
label_339d70:
    if (ctx->pc == 0x339D70u) {
        ctx->pc = 0x339D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D6Cu;
        // 0x339d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D74u;
        goto label_339d74;
    }
    ctx->pc = 0x339D6Cu;
    {
        const bool branch_taken_0x339d6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x339D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D6Cu;
        // 0x339d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d6c) {
            ctx->pc = 0x339DE8u;
            goto label_339de8;
        }
    }
    ctx->pc = 0x339D74u;
label_339d74:
    // 0x339d74: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x339d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_339d78:
    // 0x339d78: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_339d7c:
    if (ctx->pc == 0x339D7Cu) {
        ctx->pc = 0x339D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D78u;
        // 0x339d7c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D80u;
        goto label_339d80;
    }
    ctx->pc = 0x339D78u;
    {
        const bool branch_taken_0x339d78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d78) {
            ctx->pc = 0x339D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339D78u;
            // 0x339d7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x339D80u;
            goto label_339d80;
        }
    }
    ctx->pc = 0x339D80u;
label_339d80:
    // 0x339d80: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x339d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_339d84:
    // 0x339d84: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x339d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_339d88:
    // 0x339d88: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x339d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_339d8c:
    // 0x339d8c: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x339d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_339d90:
    // 0x339d90: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x339d90u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_339d94:
    // 0x339d94: 0x7066001a  div1        $zero, $v1, $a2
    ctx->pc = 0x339d94u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_339d98:
    // 0x339d98: 0x2010  mfhi        $a0
    ctx->pc = 0x339d98u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_339d9c:
    // 0x339d9c: 0x70002810  mfhi1       $a1
    ctx->pc = 0x339d9cu;
    SET_GPR_U64(ctx, 5, ctx->hi1);
label_339da0:
    // 0x339da0: 0x54850007  bnel        $a0, $a1, . + 4 + (0x7 << 2)
label_339da4:
    if (ctx->pc == 0x339DA4u) {
        ctx->pc = 0x339DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DA0u;
        // 0x339da4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DA8u;
        goto label_339da8;
    }
    ctx->pc = 0x339DA0u;
    {
        const bool branch_taken_0x339da0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x339da0) {
            ctx->pc = 0x339DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339DA0u;
            // 0x339da4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339DC0u;
            goto label_339dc0;
        }
    }
    ctx->pc = 0x339DA8u;
label_339da8:
    // 0x339da8: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x339da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_339dac:
    // 0x339dac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x339dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_339db0:
    // 0x339db0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x339db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_339db4:
    // 0x339db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_339db8:
    // 0x339db8: 0x10000006  b           . + 4 + (0x6 << 2)
label_339dbc:
    if (ctx->pc == 0x339DBCu) {
        ctx->pc = 0x339DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DB8u;
        // 0x339dbc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DC0u;
        goto label_339dc0;
    }
    ctx->pc = 0x339DB8u;
    {
        const bool branch_taken_0x339db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DB8u;
        // 0x339dbc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339db8) {
            ctx->pc = 0x339DD4u;
            goto label_339dd4;
        }
    }
    ctx->pc = 0x339DC0u;
label_339dc0:
    // 0x339dc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_339dc4:
    if (ctx->pc == 0x339DC4u) {
        ctx->pc = 0x339DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DC0u;
        // 0x339dc4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DC8u;
        goto label_339dc8;
    }
    ctx->pc = 0x339DC0u;
    {
        const bool branch_taken_0x339dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339dc0) {
            ctx->pc = 0x339DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339DC0u;
            // 0x339dc4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339DDCu;
            goto label_339ddc;
        }
    }
    ctx->pc = 0x339DC8u;
label_339dc8:
    // 0x339dc8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x339dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_339dcc:
    // 0x339dcc: 0x40f809  jalr        $v0
label_339dd0:
    if (ctx->pc == 0x339DD0u) {
        ctx->pc = 0x339DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DCCu;
        // 0x339dd0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DD4u;
        goto label_339dd4;
    }
    ctx->pc = 0x339DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339DD4u);
        ctx->pc = 0x339DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DCCu;
        // 0x339dd0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339DCCu, 0x339DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339DD4u;
label_339dd4:
    // 0x339dd4: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x339dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_339dd8:
    // 0x339dd8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x339dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_339ddc:
    // 0x339ddc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x339ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_339de0:
    // 0x339de0: 0x10000027  b           . + 4 + (0x27 << 2)
label_339de4:
    if (ctx->pc == 0x339DE4u) {
        ctx->pc = 0x339DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DE0u;
        // 0x339de4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DE8u;
        goto label_339de8;
    }
    ctx->pc = 0x339DE0u;
    {
        const bool branch_taken_0x339de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DE0u;
        // 0x339de4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339de0) {
            ctx->pc = 0x339E80u;
            goto label_339e80;
        }
    }
    ctx->pc = 0x339DE8u;
label_339de8:
    // 0x339de8: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_339dec:
    if (ctx->pc == 0x339DECu) {
        ctx->pc = 0x339DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DE8u;
        // 0x339dec: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DF0u;
        goto label_339df0;
    }
    ctx->pc = 0x339DE8u;
    {
        const bool branch_taken_0x339de8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x339de8) {
            ctx->pc = 0x339DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339DE8u;
            // 0x339dec: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339E68u;
            goto label_339e68;
        }
    }
    ctx->pc = 0x339DF0u;
label_339df0:
    // 0x339df0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x339df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_339df4:
    // 0x339df4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_339df8:
    if (ctx->pc == 0x339DF8u) {
        ctx->pc = 0x339DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DF4u;
        // 0x339df8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DFCu;
        goto label_339dfc;
    }
    ctx->pc = 0x339DF4u;
    {
        const bool branch_taken_0x339df4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x339df4) {
            ctx->pc = 0x339DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339DF4u;
            // 0x339df8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x339DFCu;
            goto label_339dfc;
        }
    }
    ctx->pc = 0x339DFCu;
label_339dfc:
    // 0x339dfc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x339dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_339e00:
    // 0x339e00: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x339e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_339e04:
    // 0x339e04: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x339e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_339e08:
    // 0x339e08: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x339e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_339e0c:
    // 0x339e0c: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x339e0cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_339e10:
    // 0x339e10: 0x7086001a  div1        $zero, $a0, $a2
    ctx->pc = 0x339e10u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_339e14:
    // 0x339e14: 0x1010  mfhi        $v0
    ctx->pc = 0x339e14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_339e18:
    // 0x339e18: 0x70001810  mfhi1       $v1
    ctx->pc = 0x339e18u;
    SET_GPR_U64(ctx, 3, ctx->hi1);
label_339e1c:
    // 0x339e1c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_339e20:
    if (ctx->pc == 0x339E20u) {
        ctx->pc = 0x339E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E1Cu;
        // 0x339e20: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E24u;
        goto label_339e24;
    }
    ctx->pc = 0x339E1Cu;
    {
        const bool branch_taken_0x339e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x339e1c) {
            ctx->pc = 0x339E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339E1Cu;
            // 0x339e20: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339E40u;
            goto label_339e40;
        }
    }
    ctx->pc = 0x339E24u;
label_339e24:
    // 0x339e24: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x339e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_339e28:
    // 0x339e28: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x339e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_339e2c:
    // 0x339e2c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x339e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_339e30:
    // 0x339e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_339e34:
    // 0x339e34: 0x10000007  b           . + 4 + (0x7 << 2)
label_339e38:
    if (ctx->pc == 0x339E38u) {
        ctx->pc = 0x339E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E34u;
        // 0x339e38: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E3Cu;
        goto label_339e3c;
    }
    ctx->pc = 0x339E34u;
    {
        const bool branch_taken_0x339e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E34u;
        // 0x339e38: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e34) {
            ctx->pc = 0x339E54u;
            goto label_339e54;
        }
    }
    ctx->pc = 0x339E3Cu;
label_339e3c:
    // 0x339e3c: 0x0  nop
    ctx->pc = 0x339e3cu;
    // NOP
label_339e40:
    // 0x339e40: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_339e44:
    if (ctx->pc == 0x339E44u) {
        ctx->pc = 0x339E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E40u;
        // 0x339e44: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E48u;
        goto label_339e48;
    }
    ctx->pc = 0x339E40u;
    {
        const bool branch_taken_0x339e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339e40) {
            ctx->pc = 0x339E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339E40u;
            // 0x339e44: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339E5Cu;
            goto label_339e5c;
        }
    }
    ctx->pc = 0x339E48u;
label_339e48:
    // 0x339e48: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x339e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_339e4c:
    // 0x339e4c: 0x40f809  jalr        $v0
label_339e50:
    if (ctx->pc == 0x339E50u) {
        ctx->pc = 0x339E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E4Cu;
        // 0x339e50: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E54u;
        goto label_339e54;
    }
    ctx->pc = 0x339E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339E54u);
        ctx->pc = 0x339E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E4Cu;
        // 0x339e50: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339E4Cu, 0x339E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339E54u;
label_339e54:
    // 0x339e54: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x339e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_339e58:
    // 0x339e58: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x339e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_339e5c:
    // 0x339e5c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x339e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_339e60:
    // 0x339e60: 0x10000007  b           . + 4 + (0x7 << 2)
label_339e64:
    if (ctx->pc == 0x339E64u) {
        ctx->pc = 0x339E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E60u;
        // 0x339e64: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E68u;
        goto label_339e68;
    }
    ctx->pc = 0x339E60u;
    {
        const bool branch_taken_0x339e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E60u;
        // 0x339e64: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e60) {
            ctx->pc = 0x339E80u;
            goto label_339e80;
        }
    }
    ctx->pc = 0x339E68u;
label_339e68:
    // 0x339e68: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x339e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_339e6c:
    // 0x339e6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_339e70:
    if (ctx->pc == 0x339E70u) {
        ctx->pc = 0x339E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E6Cu;
        // 0x339e70: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E74u;
        goto label_339e74;
    }
    ctx->pc = 0x339E6Cu;
    {
        const bool branch_taken_0x339e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E6Cu;
        // 0x339e70: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e6c) {
            ctx->pc = 0x339E80u;
            goto label_339e80;
        }
    }
    ctx->pc = 0x339E74u;
label_339e74:
    // 0x339e74: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x339e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_339e78:
    // 0x339e78: 0x40f809  jalr        $v0
label_339e7c:
    if (ctx->pc == 0x339E7Cu) {
        ctx->pc = 0x339E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E78u;
        // 0x339e7c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E80u;
        goto label_339e80;
    }
    ctx->pc = 0x339E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339E80u);
        ctx->pc = 0x339E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E78u;
        // 0x339e7c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339E78u, 0x339E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339E80u;
label_339e80:
    // 0x339e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339e84:
    // 0x339e84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339e88:
    // 0x339e88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339e8c:
    // 0x339e8c: 0x3e00008  jr          $ra
label_339e90:
    if (ctx->pc == 0x339E90u) {
        ctx->pc = 0x339E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E8Cu;
        // 0x339e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E94u;
        goto label_339e94;
    }
    ctx->pc = 0x339E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E8Cu;
        // 0x339e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339E94u;
label_339e94:
    // 0x339e94: 0x0  nop
    ctx->pc = 0x339e94u;
    // NOP
    ctx->pc = 0x339e98u;
}
