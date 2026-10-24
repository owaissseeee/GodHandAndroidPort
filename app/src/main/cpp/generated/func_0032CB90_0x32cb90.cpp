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

// Function: func_0032CB90
// Address: 0x32cb90 - 0x32cc90
void func_0032CB90_0x32cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032CB90_0x32cb90");
#endif

    switch (ctx->pc) {
        case 0x32cb90u: goto label_32cb90;
        case 0x32cb94u: goto label_32cb94;
        case 0x32cb98u: goto label_32cb98;
        case 0x32cb9cu: goto label_32cb9c;
        case 0x32cba0u: goto label_32cba0;
        case 0x32cba4u: goto label_32cba4;
        case 0x32cba8u: goto label_32cba8;
        case 0x32cbacu: goto label_32cbac;
        case 0x32cbb0u: goto label_32cbb0;
        case 0x32cbb4u: goto label_32cbb4;
        case 0x32cbb8u: goto label_32cbb8;
        case 0x32cbbcu: goto label_32cbbc;
        case 0x32cbc0u: goto label_32cbc0;
        case 0x32cbc4u: goto label_32cbc4;
        case 0x32cbc8u: goto label_32cbc8;
        case 0x32cbccu: goto label_32cbcc;
        case 0x32cbd0u: goto label_32cbd0;
        case 0x32cbd4u: goto label_32cbd4;
        case 0x32cbd8u: goto label_32cbd8;
        case 0x32cbdcu: goto label_32cbdc;
        case 0x32cbe0u: goto label_32cbe0;
        case 0x32cbe4u: goto label_32cbe4;
        case 0x32cbe8u: goto label_32cbe8;
        case 0x32cbecu: goto label_32cbec;
        case 0x32cbf0u: goto label_32cbf0;
        case 0x32cbf4u: goto label_32cbf4;
        case 0x32cbf8u: goto label_32cbf8;
        case 0x32cbfcu: goto label_32cbfc;
        case 0x32cc00u: goto label_32cc00;
        case 0x32cc04u: goto label_32cc04;
        case 0x32cc08u: goto label_32cc08;
        case 0x32cc0cu: goto label_32cc0c;
        case 0x32cc10u: goto label_32cc10;
        case 0x32cc14u: goto label_32cc14;
        case 0x32cc18u: goto label_32cc18;
        case 0x32cc1cu: goto label_32cc1c;
        case 0x32cc20u: goto label_32cc20;
        case 0x32cc24u: goto label_32cc24;
        case 0x32cc28u: goto label_32cc28;
        case 0x32cc2cu: goto label_32cc2c;
        case 0x32cc30u: goto label_32cc30;
        case 0x32cc34u: goto label_32cc34;
        case 0x32cc38u: goto label_32cc38;
        case 0x32cc3cu: goto label_32cc3c;
        case 0x32cc40u: goto label_32cc40;
        case 0x32cc44u: goto label_32cc44;
        case 0x32cc48u: goto label_32cc48;
        case 0x32cc4cu: goto label_32cc4c;
        case 0x32cc50u: goto label_32cc50;
        case 0x32cc54u: goto label_32cc54;
        case 0x32cc58u: goto label_32cc58;
        case 0x32cc5cu: goto label_32cc5c;
        case 0x32cc60u: goto label_32cc60;
        case 0x32cc64u: goto label_32cc64;
        case 0x32cc68u: goto label_32cc68;
        case 0x32cc6cu: goto label_32cc6c;
        case 0x32cc70u: goto label_32cc70;
        case 0x32cc74u: goto label_32cc74;
        case 0x32cc78u: goto label_32cc78;
        case 0x32cc7cu: goto label_32cc7c;
        case 0x32cc80u: goto label_32cc80;
        case 0x32cc84u: goto label_32cc84;
        case 0x32cc88u: goto label_32cc88;
        case 0x32cc8cu: goto label_32cc8c;
        default: break;
    }

    ctx->pc = 0x32cb90u;

label_32cb90:
    // 0x32cb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32cb94:
    // 0x32cb94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32cb98:
    // 0x32cb98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32cb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32cb9c:
    // 0x32cb9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32cba0:
    // 0x32cba0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_32cba4:
    // 0x32cba4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_32cba8:
    // 0x32cba8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32cba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_32cbac:
    // 0x32cbac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x32cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_32cbb0:
    // 0x32cbb0: 0x8202006c  lb          $v0, 0x6C($s0)
    ctx->pc = 0x32cbb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_32cbb4:
    // 0x32cbb4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_32cbb8:
    if (ctx->pc == 0x32CBB8u) {
        ctx->pc = 0x32CBBCu;
        goto label_32cbbc;
    }
    ctx->pc = 0x32CBB4u;
    {
        const bool branch_taken_0x32cbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cbb4) {
            ctx->pc = 0x32CBECu;
            goto label_32cbec;
        }
    }
    ctx->pc = 0x32CBBCu;
label_32cbbc:
    // 0x32cbbc: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x32cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_32cbc0:
    // 0x32cbc0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_32cbc4:
    if (ctx->pc == 0x32CBC4u) {
        ctx->pc = 0x32CBC8u;
        goto label_32cbc8;
    }
    ctx->pc = 0x32CBC0u;
    {
        const bool branch_taken_0x32cbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cbc0) {
            ctx->pc = 0x32CBECu;
            goto label_32cbec;
        }
    }
    ctx->pc = 0x32CBC8u;
label_32cbc8:
    // 0x32cbc8: 0xc0c9dc2  jal         func_327708
label_32cbcc:
    if (ctx->pc == 0x32CBCCu) {
        ctx->pc = 0x32CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CBC8u;
        // 0x32cbcc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CBD0u;
        goto label_32cbd0;
    }
    ctx->pc = 0x32CBC8u;
    SET_GPR_U32(ctx, 31, 0x32CBD0u);
    ctx->pc = 0x32CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CBC8u;
    // 0x32cbcc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327708u, 0x32CBC8u, 0x32CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBD0u;
label_32cbd0:
    // 0x32cbd0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x32cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_32cbd4:
    // 0x32cbd4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x32cbd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32cbd8:
    // 0x32cbd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_32cbdc:
    if (ctx->pc == 0x32CBDCu) {
        ctx->pc = 0x32CBE0u;
        goto label_32cbe0;
    }
    ctx->pc = 0x32CBD8u;
    {
        const bool branch_taken_0x32cbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cbd8) {
            ctx->pc = 0x32CBECu;
            goto label_32cbec;
        }
    }
    ctx->pc = 0x32CBE0u;
label_32cbe0:
    // 0x32cbe0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32cbe4:
    // 0x32cbe4: 0xc0c9dd6  jal         func_327758
label_32cbe8:
    if (ctx->pc == 0x32CBE8u) {
        ctx->pc = 0x32CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CBE4u;
        // 0x32cbe8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CBECu;
        goto label_32cbec;
    }
    ctx->pc = 0x32CBE4u;
    SET_GPR_U32(ctx, 31, 0x32CBECu);
    ctx->pc = 0x32CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CBE4u;
    // 0x32cbe8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327758u, 0x32CBE4u, 0x32CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBECu;
label_32cbec:
    // 0x32cbec: 0xc0c99de  jal         func_326778
label_32cbf0:
    if (ctx->pc == 0x32CBF0u) {
        ctx->pc = 0x32CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CBECu;
        // 0x32cbf0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CBF4u;
        goto label_32cbf4;
    }
    ctx->pc = 0x32CBECu;
    SET_GPR_U32(ctx, 31, 0x32CBF4u);
    ctx->pc = 0x32CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CBECu;
    // 0x32cbf0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326778u, 0x32CBECu, 0x32CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBF4u;
label_32cbf4:
    // 0x32cbf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32cbf8:
    // 0x32cbf8: 0x5443001d  bnel        $v0, $v1, . + 4 + (0x1D << 2)
label_32cbfc:
    if (ctx->pc == 0x32CBFCu) {
        ctx->pc = 0x32CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CBF8u;
        // 0x32cbfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CC00u;
        goto label_32cc00;
    }
    ctx->pc = 0x32CBF8u;
    {
        const bool branch_taken_0x32cbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32cbf8) {
            ctx->pc = 0x32CBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CBF8u;
            // 0x32cbfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CC70u;
            goto label_32cc70;
        }
    }
    ctx->pc = 0x32CC00u;
label_32cc00:
    // 0x32cc00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32cc04:
    // 0x32cc04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32cc04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32cc08:
    // 0x32cc08: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x32cc08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
label_32cc0c:
    // 0x32cc0c: 0xc0c9de8  jal         func_3277A0
label_32cc10:
    if (ctx->pc == 0x32CC10u) {
        ctx->pc = 0x32CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC0Cu;
        // 0x32cc10: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CC14u;
        goto label_32cc14;
    }
    ctx->pc = 0x32CC0Cu;
    SET_GPR_U32(ctx, 31, 0x32CC14u);
    ctx->pc = 0x32CC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CC0Cu;
    // 0x32cc10: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277A0u, 0x32CC0Cu, 0x32CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC14u;
label_32cc14:
    // 0x32cc14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32cc14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32cc18:
    // 0x32cc18: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_32cc1c:
    // 0x32cc1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_32cc20:
    if (ctx->pc == 0x32CC20u) {
        ctx->pc = 0x32CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC1Cu;
        // 0x32cc20: 0xac521460  sw          $s2, 0x1460($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CC24u;
        goto label_32cc24;
    }
    ctx->pc = 0x32CC1Cu;
    {
        const bool branch_taken_0x32cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC1Cu;
        // 0x32cc20: 0xac521460  sw          $s2, 0x1460($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cc1c) {
            ctx->pc = 0x32CC2Cu;
            goto label_32cc2c;
        }
    }
    ctx->pc = 0x32CC24u;
label_32cc24:
    // 0x32cc24: 0x0  nop
    ctx->pc = 0x32cc24u;
    // NOP
label_32cc28:
    // 0x32cc28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32cc28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_32cc2c:
    // 0x32cc2c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x32cc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_32cc30:
    // 0x32cc30: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_32cc34:
    if (ctx->pc == 0x32CC34u) {
        ctx->pc = 0x32CC38u;
        goto label_32cc38;
    }
    ctx->pc = 0x32CC30u;
    {
        const bool branch_taken_0x32cc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cc30) {
            ctx->pc = 0x32CC5Cu;
            goto label_32cc5c;
        }
    }
    ctx->pc = 0x32CC38u;
label_32cc38:
    // 0x32cc38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32cc3c:
    // 0x32cc3c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32cc3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_32cc40:
    // 0x32cc40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32cc44:
    // 0x32cc44: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x32cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_32cc48:
    // 0x32cc48: 0x40f809  jalr        $v0
label_32cc4c:
    if (ctx->pc == 0x32CC4Cu) {
        ctx->pc = 0x32CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC48u;
        // 0x32cc4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CC50u;
        goto label_32cc50;
    }
    ctx->pc = 0x32CC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32CC50u);
        ctx->pc = 0x32CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC48u;
        // 0x32cc4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CC48u, 0x32CC50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32CC50u;
label_32cc50:
    // 0x32cc50: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x32cc50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_32cc54:
    // 0x32cc54: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_32cc58:
    if (ctx->pc == 0x32CC58u) {
        ctx->pc = 0x32CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC54u;
        // 0x32cc58: 0xae821464  sw          $v0, 0x1464($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CC5Cu;
        goto label_32cc5c;
    }
    ctx->pc = 0x32CC54u;
    {
        const bool branch_taken_0x32cc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC54u;
        // 0x32cc58: 0xae821464  sw          $v0, 0x1464($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cc54) {
            ctx->pc = 0x32CC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32cc28;
        }
    }
    ctx->pc = 0x32CC5Cu;
label_32cc5c:
    // 0x32cc5c: 0x56720004  bnel        $s3, $s2, . + 4 + (0x4 << 2)
label_32cc60:
    if (ctx->pc == 0x32CC60u) {
        ctx->pc = 0x32CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC5Cu;
        // 0x32cc60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CC64u;
        goto label_32cc64;
    }
    ctx->pc = 0x32CC5Cu;
    {
        const bool branch_taken_0x32cc5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x32cc5c) {
            ctx->pc = 0x32CC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CC5Cu;
            // 0x32cc60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CC70u;
            goto label_32cc70;
        }
    }
    ctx->pc = 0x32CC64u;
label_32cc64:
    // 0x32cc64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32cc68:
    // 0x32cc68: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x32cc68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_32cc6c:
    // 0x32cc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32cc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32cc70:
    // 0x32cc70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32cc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32cc74:
    // 0x32cc74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32cc74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32cc78:
    // 0x32cc78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32cc78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32cc7c:
    // 0x32cc7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32cc7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32cc80:
    // 0x32cc80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32cc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32cc84:
    // 0x32cc84: 0x3e00008  jr          $ra
label_32cc88:
    if (ctx->pc == 0x32CC88u) {
        ctx->pc = 0x32CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC84u;
        // 0x32cc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CC8Cu;
        goto label_32cc8c;
    }
    ctx->pc = 0x32CC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC84u;
        // 0x32cc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CC8Cu;
label_32cc8c:
    // 0x32cc8c: 0x0  nop
    ctx->pc = 0x32cc8cu;
    // NOP
    ctx->pc = 0x32cc90u;
}
