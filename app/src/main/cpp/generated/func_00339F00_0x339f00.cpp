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

// Function: func_00339F00
// Address: 0x339f00 - 0x339ff8
void func_00339F00_0x339f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339F00_0x339f00");
#endif

    switch (ctx->pc) {
        case 0x339f00u: goto label_339f00;
        case 0x339f04u: goto label_339f04;
        case 0x339f08u: goto label_339f08;
        case 0x339f0cu: goto label_339f0c;
        case 0x339f10u: goto label_339f10;
        case 0x339f14u: goto label_339f14;
        case 0x339f18u: goto label_339f18;
        case 0x339f1cu: goto label_339f1c;
        case 0x339f20u: goto label_339f20;
        case 0x339f24u: goto label_339f24;
        case 0x339f28u: goto label_339f28;
        case 0x339f2cu: goto label_339f2c;
        case 0x339f30u: goto label_339f30;
        case 0x339f34u: goto label_339f34;
        case 0x339f38u: goto label_339f38;
        case 0x339f3cu: goto label_339f3c;
        case 0x339f40u: goto label_339f40;
        case 0x339f44u: goto label_339f44;
        case 0x339f48u: goto label_339f48;
        case 0x339f4cu: goto label_339f4c;
        case 0x339f50u: goto label_339f50;
        case 0x339f54u: goto label_339f54;
        case 0x339f58u: goto label_339f58;
        case 0x339f5cu: goto label_339f5c;
        case 0x339f60u: goto label_339f60;
        case 0x339f64u: goto label_339f64;
        case 0x339f68u: goto label_339f68;
        case 0x339f6cu: goto label_339f6c;
        case 0x339f70u: goto label_339f70;
        case 0x339f74u: goto label_339f74;
        case 0x339f78u: goto label_339f78;
        case 0x339f7cu: goto label_339f7c;
        case 0x339f80u: goto label_339f80;
        case 0x339f84u: goto label_339f84;
        case 0x339f88u: goto label_339f88;
        case 0x339f8cu: goto label_339f8c;
        case 0x339f90u: goto label_339f90;
        case 0x339f94u: goto label_339f94;
        case 0x339f98u: goto label_339f98;
        case 0x339f9cu: goto label_339f9c;
        case 0x339fa0u: goto label_339fa0;
        case 0x339fa4u: goto label_339fa4;
        case 0x339fa8u: goto label_339fa8;
        case 0x339facu: goto label_339fac;
        case 0x339fb0u: goto label_339fb0;
        case 0x339fb4u: goto label_339fb4;
        case 0x339fb8u: goto label_339fb8;
        case 0x339fbcu: goto label_339fbc;
        case 0x339fc0u: goto label_339fc0;
        case 0x339fc4u: goto label_339fc4;
        case 0x339fc8u: goto label_339fc8;
        case 0x339fccu: goto label_339fcc;
        case 0x339fd0u: goto label_339fd0;
        case 0x339fd4u: goto label_339fd4;
        case 0x339fd8u: goto label_339fd8;
        case 0x339fdcu: goto label_339fdc;
        case 0x339fe0u: goto label_339fe0;
        case 0x339fe4u: goto label_339fe4;
        case 0x339fe8u: goto label_339fe8;
        case 0x339fecu: goto label_339fec;
        case 0x339ff0u: goto label_339ff0;
        case 0x339ff4u: goto label_339ff4;
        default: break;
    }

    ctx->pc = 0x339f00u;

label_339f00:
    // 0x339f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_339f04:
    // 0x339f04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x339f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_339f08:
    // 0x339f08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x339f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_339f0c:
    // 0x339f0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x339f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_339f10:
    // 0x339f10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x339f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_339f14:
    // 0x339f14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_339f18:
    // 0x339f18: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_339f1c:
    if (ctx->pc == 0x339F1Cu) {
        ctx->pc = 0x339F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F18u;
        // 0x339f1c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F20u;
        goto label_339f20;
    }
    ctx->pc = 0x339F18u;
    {
        const bool branch_taken_0x339f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x339F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F18u;
        // 0x339f1c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f18) {
            ctx->pc = 0x339F38u;
            goto label_339f38;
        }
    }
    ctx->pc = 0x339F20u;
label_339f20:
    // 0x339f20: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339f24:
    // 0x339f24: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339f28:
    // 0x339f28: 0x24845b88  addiu       $a0, $a0, 0x5B88
    ctx->pc = 0x339f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23432));
label_339f2c:
    // 0x339f2c: 0x10000009  b           . + 4 + (0x9 << 2)
label_339f30:
    if (ctx->pc == 0x339F30u) {
        ctx->pc = 0x339F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F2Cu;
        // 0x339f30: 0x24a55a80  addiu       $a1, $a1, 0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F34u;
        goto label_339f34;
    }
    ctx->pc = 0x339F2Cu;
    {
        const bool branch_taken_0x339f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F2Cu;
        // 0x339f30: 0x24a55a80  addiu       $a1, $a1, 0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f2c) {
            ctx->pc = 0x339F54u;
            goto label_339f54;
        }
    }
    ctx->pc = 0x339F34u;
label_339f34:
    // 0x339f34: 0x0  nop
    ctx->pc = 0x339f34u;
    // NOP
label_339f38:
    // 0x339f38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x339f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339f3c:
    // 0x339f3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_339f40:
    if (ctx->pc == 0x339F40u) {
        ctx->pc = 0x339F44u;
        goto label_339f44;
    }
    ctx->pc = 0x339F3Cu;
    {
        const bool branch_taken_0x339f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339f3c) {
            ctx->pc = 0x339F68u;
            goto label_339f68;
        }
    }
    ctx->pc = 0x339F44u;
label_339f44:
    // 0x339f44: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339f48:
    // 0x339f48: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339f4c:
    // 0x339f4c: 0x24845b98  addiu       $a0, $a0, 0x5B98
    ctx->pc = 0x339f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23448));
label_339f50:
    // 0x339f50: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x339f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
label_339f54:
    // 0x339f54: 0xc0ce516  jal         func_339458
label_339f58:
    if (ctx->pc == 0x339F58u) {
        ctx->pc = 0x339F5Cu;
        goto label_339f5c;
    }
    ctx->pc = 0x339F54u;
    SET_GPR_U32(ctx, 31, 0x339F5Cu);
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339F54u, 0x339F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339F5Cu;
label_339f5c:
    // 0x339f5c: 0x10000020  b           . + 4 + (0x20 << 2)
label_339f60:
    if (ctx->pc == 0x339F60u) {
        ctx->pc = 0x339F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F5Cu;
        // 0x339f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F64u;
        goto label_339f64;
    }
    ctx->pc = 0x339F5Cu;
    {
        const bool branch_taken_0x339f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F5Cu;
        // 0x339f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f5c) {
            ctx->pc = 0x339FE0u;
            goto label_339fe0;
        }
    }
    ctx->pc = 0x339F64u;
label_339f64:
    // 0x339f64: 0x0  nop
    ctx->pc = 0x339f64u;
    // NOP
label_339f68:
    // 0x339f68: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_339f6c:
    if (ctx->pc == 0x339F6Cu) {
        ctx->pc = 0x339F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F68u;
        // 0x339f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F70u;
        goto label_339f70;
    }
    ctx->pc = 0x339F68u;
    {
        const bool branch_taken_0x339f68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x339F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F68u;
        // 0x339f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f68) {
            ctx->pc = 0x339F88u;
            goto label_339f88;
        }
    }
    ctx->pc = 0x339F70u;
label_339f70:
    // 0x339f70: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x339f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_339f74:
    // 0x339f74: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x339f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339f78:
    // 0x339f78: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x339f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_339f7c:
    // 0x339f7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x339f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_339f80:
    // 0x339f80: 0x10000008  b           . + 4 + (0x8 << 2)
label_339f84:
    if (ctx->pc == 0x339F84u) {
        ctx->pc = 0x339F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F80u;
        // 0x339f84: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F88u;
        goto label_339f88;
    }
    ctx->pc = 0x339F80u;
    {
        const bool branch_taken_0x339f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F80u;
        // 0x339f84: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f80) {
            ctx->pc = 0x339FA4u;
            goto label_339fa4;
        }
    }
    ctx->pc = 0x339F88u;
label_339f88:
    // 0x339f88: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
label_339f8c:
    if (ctx->pc == 0x339F8Cu) {
        ctx->pc = 0x339F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F88u;
        // 0x339f8c: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F90u;
        goto label_339f90;
    }
    ctx->pc = 0x339F88u;
    {
        const bool branch_taken_0x339f88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x339f88) {
            ctx->pc = 0x339F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339F88u;
            // 0x339f8c: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339FC0u;
            goto label_339fc0;
        }
    }
    ctx->pc = 0x339F90u;
label_339f90:
    // 0x339f90: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x339f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_339f94:
    // 0x339f94: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x339f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339f98:
    // 0x339f98: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x339f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_339f9c:
    // 0x339f9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x339f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_339fa0:
    // 0x339fa0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x339fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_339fa4:
    // 0x339fa4: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x339fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_339fa8:
    // 0x339fa8: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x339fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_339fac:
    // 0x339fac: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x339facu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_339fb0:
    // 0x339fb0: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x339fb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_339fb4:
    // 0x339fb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_339fb8:
    if (ctx->pc == 0x339FB8u) {
        ctx->pc = 0x339FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FB4u;
        // 0x339fb8: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339FBCu;
        goto label_339fbc;
    }
    ctx->pc = 0x339FB4u;
    {
        const bool branch_taken_0x339fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FB4u;
        // 0x339fb8: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339fb4) {
            ctx->pc = 0x339FD4u;
            goto label_339fd4;
        }
    }
    ctx->pc = 0x339FBCu;
label_339fbc:
    // 0x339fbc: 0x0  nop
    ctx->pc = 0x339fbcu;
    // NOP
label_339fc0:
    // 0x339fc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_339fc4:
    if (ctx->pc == 0x339FC4u) {
        ctx->pc = 0x339FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FC0u;
        // 0x339fc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339FC8u;
        goto label_339fc8;
    }
    ctx->pc = 0x339FC0u;
    {
        const bool branch_taken_0x339fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FC0u;
        // 0x339fc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339fc0) {
            ctx->pc = 0x339FD4u;
            goto label_339fd4;
        }
    }
    ctx->pc = 0x339FC8u;
label_339fc8:
    // 0x339fc8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x339fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_339fcc:
    // 0x339fcc: 0x40f809  jalr        $v0
label_339fd0:
    if (ctx->pc == 0x339FD0u) {
        ctx->pc = 0x339FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FCCu;
        // 0x339fd0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339FD4u;
        goto label_339fd4;
    }
    ctx->pc = 0x339FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339FD4u);
        ctx->pc = 0x339FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FCCu;
        // 0x339fd0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339FCCu, 0x339FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339FD4u;
label_339fd4:
    // 0x339fd4: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x339fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_339fd8:
    // 0x339fd8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x339fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_339fdc:
    // 0x339fdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x339fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_339fe0:
    // 0x339fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339fe4:
    // 0x339fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339fe8:
    // 0x339fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x339fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339fec:
    // 0x339fec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x339fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_339ff0:
    // 0x339ff0: 0x3e00008  jr          $ra
label_339ff4:
    if (ctx->pc == 0x339FF4u) {
        ctx->pc = 0x339FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FF0u;
        // 0x339ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339FF8u;
        goto label_fallthrough_0x339ff0;
    }
    ctx->pc = 0x339FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FF0u;
        // 0x339ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339ff0:
    ctx->pc = 0x339FF8u;
}
