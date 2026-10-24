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

// Function: func_00330D58
// Address: 0x330d58 - 0x330e70
void func_00330D58_0x330d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330D58_0x330d58");
#endif

    switch (ctx->pc) {
        case 0x330d58u: goto label_330d58;
        case 0x330d5cu: goto label_330d5c;
        case 0x330d60u: goto label_330d60;
        case 0x330d64u: goto label_330d64;
        case 0x330d68u: goto label_330d68;
        case 0x330d6cu: goto label_330d6c;
        case 0x330d70u: goto label_330d70;
        case 0x330d74u: goto label_330d74;
        case 0x330d78u: goto label_330d78;
        case 0x330d7cu: goto label_330d7c;
        case 0x330d80u: goto label_330d80;
        case 0x330d84u: goto label_330d84;
        case 0x330d88u: goto label_330d88;
        case 0x330d8cu: goto label_330d8c;
        case 0x330d90u: goto label_330d90;
        case 0x330d94u: goto label_330d94;
        case 0x330d98u: goto label_330d98;
        case 0x330d9cu: goto label_330d9c;
        case 0x330da0u: goto label_330da0;
        case 0x330da4u: goto label_330da4;
        case 0x330da8u: goto label_330da8;
        case 0x330dacu: goto label_330dac;
        case 0x330db0u: goto label_330db0;
        case 0x330db4u: goto label_330db4;
        case 0x330db8u: goto label_330db8;
        case 0x330dbcu: goto label_330dbc;
        case 0x330dc0u: goto label_330dc0;
        case 0x330dc4u: goto label_330dc4;
        case 0x330dc8u: goto label_330dc8;
        case 0x330dccu: goto label_330dcc;
        case 0x330dd0u: goto label_330dd0;
        case 0x330dd4u: goto label_330dd4;
        case 0x330dd8u: goto label_330dd8;
        case 0x330ddcu: goto label_330ddc;
        case 0x330de0u: goto label_330de0;
        case 0x330de4u: goto label_330de4;
        case 0x330de8u: goto label_330de8;
        case 0x330decu: goto label_330dec;
        case 0x330df0u: goto label_330df0;
        case 0x330df4u: goto label_330df4;
        case 0x330df8u: goto label_330df8;
        case 0x330dfcu: goto label_330dfc;
        case 0x330e00u: goto label_330e00;
        case 0x330e04u: goto label_330e04;
        case 0x330e08u: goto label_330e08;
        case 0x330e0cu: goto label_330e0c;
        case 0x330e10u: goto label_330e10;
        case 0x330e14u: goto label_330e14;
        case 0x330e18u: goto label_330e18;
        case 0x330e1cu: goto label_330e1c;
        case 0x330e20u: goto label_330e20;
        case 0x330e24u: goto label_330e24;
        case 0x330e28u: goto label_330e28;
        case 0x330e2cu: goto label_330e2c;
        case 0x330e30u: goto label_330e30;
        case 0x330e34u: goto label_330e34;
        case 0x330e38u: goto label_330e38;
        case 0x330e3cu: goto label_330e3c;
        case 0x330e40u: goto label_330e40;
        case 0x330e44u: goto label_330e44;
        case 0x330e48u: goto label_330e48;
        case 0x330e4cu: goto label_330e4c;
        case 0x330e50u: goto label_330e50;
        case 0x330e54u: goto label_330e54;
        case 0x330e58u: goto label_330e58;
        case 0x330e5cu: goto label_330e5c;
        case 0x330e60u: goto label_330e60;
        case 0x330e64u: goto label_330e64;
        case 0x330e68u: goto label_330e68;
        case 0x330e6cu: goto label_330e6c;
        default: break;
    }

    ctx->pc = 0x330d58u;

label_330d58:
    // 0x330d58: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x330d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_330d5c:
    // 0x330d5c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x330d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_330d60:
    // 0x330d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_330d64:
    // 0x330d64: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x330d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_330d68:
    // 0x330d68: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_330d6c:
    if (ctx->pc == 0x330D6Cu) {
        ctx->pc = 0x330D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D68u;
        // 0x330d6c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D70u;
        goto label_330d70;
    }
    ctx->pc = 0x330D68u;
    {
        const bool branch_taken_0x330d68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x330D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D68u;
        // 0x330d6c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d68) {
            ctx->pc = 0x330D80u;
            goto label_330d80;
        }
    }
    ctx->pc = 0x330D70u;
label_330d70:
    // 0x330d70: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330d74:
    // 0x330d74: 0x1000001f  b           . + 4 + (0x1F << 2)
label_330d78:
    if (ctx->pc == 0x330D78u) {
        ctx->pc = 0x330D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D74u;
        // 0x330d78: 0x24843470  addiu       $a0, $a0, 0x3470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D7Cu;
        goto label_330d7c;
    }
    ctx->pc = 0x330D74u;
    {
        const bool branch_taken_0x330d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D74u;
        // 0x330d78: 0x24843470  addiu       $a0, $a0, 0x3470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d74) {
            ctx->pc = 0x330DF4u;
            goto label_330df4;
        }
    }
    ctx->pc = 0x330D7Cu;
label_330d7c:
    // 0x330d7c: 0x0  nop
    ctx->pc = 0x330d7cu;
    // NOP
label_330d80:
    // 0x330d80: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x330d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_330d84:
    // 0x330d84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x330d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_330d88:
    // 0x330d88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_330d8c:
    // 0x330d8c: 0xc0cc248  jal         func_330920
label_330d90:
    if (ctx->pc == 0x330D90u) {
        ctx->pc = 0x330D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D8Cu;
        // 0x330d90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D94u;
        goto label_330d94;
    }
    ctx->pc = 0x330D8Cu;
    SET_GPR_U32(ctx, 31, 0x330D94u);
    ctx->pc = 0x330D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D8Cu;
    // 0x330d90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330920u, 0x330D8Cu, 0x330D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D94u;
label_330d94:
    // 0x330d94: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x330d94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_330d98:
    // 0x330d98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_330d9c:
    if (ctx->pc == 0x330D9Cu) {
        ctx->pc = 0x330D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D98u;
        // 0x330d9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330DA0u;
        goto label_330da0;
    }
    ctx->pc = 0x330D98u;
    {
        const bool branch_taken_0x330d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D98u;
        // 0x330d9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d98) {
            ctx->pc = 0x330DB0u;
            goto label_330db0;
        }
    }
    ctx->pc = 0x330DA0u;
label_330da0:
    // 0x330da0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330da4:
    // 0x330da4: 0x10000013  b           . + 4 + (0x13 << 2)
label_330da8:
    if (ctx->pc == 0x330DA8u) {
        ctx->pc = 0x330DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DA4u;
        // 0x330da8: 0x24843470  addiu       $a0, $a0, 0x3470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330DACu;
        goto label_330dac;
    }
    ctx->pc = 0x330DA4u;
    {
        const bool branch_taken_0x330da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DA4u;
        // 0x330da8: 0x24843470  addiu       $a0, $a0, 0x3470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330da4) {
            ctx->pc = 0x330DF4u;
            goto label_330df4;
        }
    }
    ctx->pc = 0x330DACu;
label_330dac:
    // 0x330dac: 0x0  nop
    ctx->pc = 0x330dacu;
    // NOP
label_330db0:
    // 0x330db0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x330db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_330db4:
    // 0x330db4: 0xc0cc1b6  jal         func_3306D8
label_330db8:
    if (ctx->pc == 0x330DB8u) {
        ctx->pc = 0x330DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DB4u;
        // 0x330db8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330DBCu;
        goto label_330dbc;
    }
    ctx->pc = 0x330DB4u;
    SET_GPR_U32(ctx, 31, 0x330DBCu);
    ctx->pc = 0x330DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330DB4u;
    // 0x330db8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3306D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3306D8u, 0x330DB4u, 0x330DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DBCu;
label_330dbc:
    // 0x330dbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x330dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_330dc0:
    // 0x330dc0: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_330dc4:
    if (ctx->pc == 0x330DC4u) {
        ctx->pc = 0x330DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DC0u;
        // 0x330dc4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330DC8u;
        goto label_330dc8;
    }
    ctx->pc = 0x330DC0u;
    {
        const bool branch_taken_0x330dc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x330dc0) {
            ctx->pc = 0x330DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330DC0u;
            // 0x330dc4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330DD8u;
            goto label_330dd8;
        }
    }
    ctx->pc = 0x330DC8u;
label_330dc8:
    // 0x330dc8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330dcc:
    // 0x330dcc: 0xc0cc0b8  jal         func_3302E0
label_330dd0:
    if (ctx->pc == 0x330DD0u) {
        ctx->pc = 0x330DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DCCu;
        // 0x330dd0: 0x248434c0  addiu       $a0, $a0, 0x34C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330DD4u;
        goto label_330dd4;
    }
    ctx->pc = 0x330DCCu;
    SET_GPR_U32(ctx, 31, 0x330DD4u);
    ctx->pc = 0x330DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330DCCu;
    // 0x330dd0: 0x248434c0  addiu       $a0, $a0, 0x34C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330DCCu, 0x330DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DD4u;
label_330dd4:
    // 0x330dd4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x330dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_330dd8:
    // 0x330dd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_330ddc:
    if (ctx->pc == 0x330DDCu) {
        ctx->pc = 0x330DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DD8u;
        // 0x330ddc: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330DE0u;
        goto label_330de0;
    }
    ctx->pc = 0x330DD8u;
    {
        const bool branch_taken_0x330dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330dd8) {
            ctx->pc = 0x330DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330DD8u;
            // 0x330ddc: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330DF0u;
            goto label_330df0;
        }
    }
    ctx->pc = 0x330DE0u;
label_330de0:
    // 0x330de0: 0x40f809  jalr        $v0
label_330de4:
    if (ctx->pc == 0x330DE4u) {
        ctx->pc = 0x330DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DE0u;
        // 0x330de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330DE8u;
        goto label_330de8;
    }
    ctx->pc = 0x330DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330DE8u);
        ctx->pc = 0x330DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DE0u;
        // 0x330de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330DE0u, 0x330DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330DE8u;
label_330de8:
    // 0x330de8: 0x10000006  b           . + 4 + (0x6 << 2)
label_330dec:
    if (ctx->pc == 0x330DECu) {
        ctx->pc = 0x330DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DE8u;
        // 0x330dec: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330DF0u;
        goto label_330df0;
    }
    ctx->pc = 0x330DE8u;
    {
        const bool branch_taken_0x330de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DE8u;
        // 0x330dec: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330de8) {
            ctx->pc = 0x330E04u;
            goto label_330e04;
        }
    }
    ctx->pc = 0x330DF0u;
label_330df0:
    // 0x330df0: 0x248434e8  addiu       $a0, $a0, 0x34E8
    ctx->pc = 0x330df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13544));
label_330df4:
    // 0x330df4: 0xc0cc0b8  jal         func_3302E0
label_330df8:
    if (ctx->pc == 0x330DF8u) {
        ctx->pc = 0x330DFCu;
        goto label_330dfc;
    }
    ctx->pc = 0x330DF4u;
    SET_GPR_U32(ctx, 31, 0x330DFCu);
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330DF4u, 0x330DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DFCu;
label_330dfc:
    // 0x330dfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330e00:
    // 0x330e00: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x330e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_330e04:
    // 0x330e04: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x330e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_330e08:
    // 0x330e08: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x330e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_330e0c:
    // 0x330e0c: 0x3e00008  jr          $ra
label_330e10:
    if (ctx->pc == 0x330E10u) {
        ctx->pc = 0x330E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E0Cu;
        // 0x330e10: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330E14u;
        goto label_330e14;
    }
    ctx->pc = 0x330E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E0Cu;
        // 0x330e10: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330E14u;
label_330e14:
    // 0x330e14: 0x0  nop
    ctx->pc = 0x330e14u;
    // NOP
label_330e18:
    // 0x330e18: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x330e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_330e1c:
    // 0x330e1c: 0x0  nop
    ctx->pc = 0x330e1cu;
    // NOP
label_330e20:
    // 0x330e20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x330e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_330e24:
    // 0x330e24: 0x0  nop
    ctx->pc = 0x330e24u;
    // NOP
label_330e28:
    // 0x330e28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x330e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_330e2c:
    // 0x330e2c: 0x0  nop
    ctx->pc = 0x330e2cu;
    // NOP
label_330e30:
    // 0x330e30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x330e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_330e34:
    // 0x330e34: 0x0  nop
    ctx->pc = 0x330e34u;
    // NOP
label_330e38:
    // 0x330e38: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x330e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_330e3c:
    // 0x330e3c: 0x0  nop
    ctx->pc = 0x330e3cu;
    // NOP
label_330e40:
    // 0x330e40: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x330e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_330e44:
    // 0x330e44: 0x0  nop
    ctx->pc = 0x330e44u;
    // NOP
label_330e48:
    // 0x330e48: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x330e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_330e4c:
    // 0x330e4c: 0x0  nop
    ctx->pc = 0x330e4cu;
    // NOP
label_330e50:
    // 0x330e50: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x330e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_330e54:
    // 0x330e54: 0x0  nop
    ctx->pc = 0x330e54u;
    // NOP
label_330e58:
    // 0x330e58: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x330e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_330e5c:
    // 0x330e5c: 0x0  nop
    ctx->pc = 0x330e5cu;
    // NOP
label_330e60:
    // 0x330e60: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x330e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_330e64:
    // 0x330e64: 0x0  nop
    ctx->pc = 0x330e64u;
    // NOP
label_330e68:
    // 0x330e68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x330e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_330e6c:
    // 0x330e6c: 0x0  nop
    ctx->pc = 0x330e6cu;
    // NOP
    ctx->pc = 0x330e70u;
}
