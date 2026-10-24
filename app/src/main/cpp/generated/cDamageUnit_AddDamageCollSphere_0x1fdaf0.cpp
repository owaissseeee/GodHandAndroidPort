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

// Function: cDamageUnit_AddDamageCollSphere
// Address: 0x1fdaf0 - 0x1fdc00
void cDamageUnit_AddDamageCollSphere_0x1fdaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageUnit_AddDamageCollSphere_0x1fdaf0");
#endif

    switch (ctx->pc) {
        case 0x1fdaf0u: goto label_1fdaf0;
        case 0x1fdaf4u: goto label_1fdaf4;
        case 0x1fdaf8u: goto label_1fdaf8;
        case 0x1fdafcu: goto label_1fdafc;
        case 0x1fdb00u: goto label_1fdb00;
        case 0x1fdb04u: goto label_1fdb04;
        case 0x1fdb08u: goto label_1fdb08;
        case 0x1fdb0cu: goto label_1fdb0c;
        case 0x1fdb10u: goto label_1fdb10;
        case 0x1fdb14u: goto label_1fdb14;
        case 0x1fdb18u: goto label_1fdb18;
        case 0x1fdb1cu: goto label_1fdb1c;
        case 0x1fdb20u: goto label_1fdb20;
        case 0x1fdb24u: goto label_1fdb24;
        case 0x1fdb28u: goto label_1fdb28;
        case 0x1fdb2cu: goto label_1fdb2c;
        case 0x1fdb30u: goto label_1fdb30;
        case 0x1fdb34u: goto label_1fdb34;
        case 0x1fdb38u: goto label_1fdb38;
        case 0x1fdb3cu: goto label_1fdb3c;
        case 0x1fdb40u: goto label_1fdb40;
        case 0x1fdb44u: goto label_1fdb44;
        case 0x1fdb48u: goto label_1fdb48;
        case 0x1fdb4cu: goto label_1fdb4c;
        case 0x1fdb50u: goto label_1fdb50;
        case 0x1fdb54u: goto label_1fdb54;
        case 0x1fdb58u: goto label_1fdb58;
        case 0x1fdb5cu: goto label_1fdb5c;
        case 0x1fdb60u: goto label_1fdb60;
        case 0x1fdb64u: goto label_1fdb64;
        case 0x1fdb68u: goto label_1fdb68;
        case 0x1fdb6cu: goto label_1fdb6c;
        case 0x1fdb70u: goto label_1fdb70;
        case 0x1fdb74u: goto label_1fdb74;
        case 0x1fdb78u: goto label_1fdb78;
        case 0x1fdb7cu: goto label_1fdb7c;
        case 0x1fdb80u: goto label_1fdb80;
        case 0x1fdb84u: goto label_1fdb84;
        case 0x1fdb88u: goto label_1fdb88;
        case 0x1fdb8cu: goto label_1fdb8c;
        case 0x1fdb90u: goto label_1fdb90;
        case 0x1fdb94u: goto label_1fdb94;
        case 0x1fdb98u: goto label_1fdb98;
        case 0x1fdb9cu: goto label_1fdb9c;
        case 0x1fdba0u: goto label_1fdba0;
        case 0x1fdba4u: goto label_1fdba4;
        case 0x1fdba8u: goto label_1fdba8;
        case 0x1fdbacu: goto label_1fdbac;
        case 0x1fdbb0u: goto label_1fdbb0;
        case 0x1fdbb4u: goto label_1fdbb4;
        case 0x1fdbb8u: goto label_1fdbb8;
        case 0x1fdbbcu: goto label_1fdbbc;
        case 0x1fdbc0u: goto label_1fdbc0;
        case 0x1fdbc4u: goto label_1fdbc4;
        case 0x1fdbc8u: goto label_1fdbc8;
        case 0x1fdbccu: goto label_1fdbcc;
        case 0x1fdbd0u: goto label_1fdbd0;
        case 0x1fdbd4u: goto label_1fdbd4;
        case 0x1fdbd8u: goto label_1fdbd8;
        case 0x1fdbdcu: goto label_1fdbdc;
        case 0x1fdbe0u: goto label_1fdbe0;
        case 0x1fdbe4u: goto label_1fdbe4;
        case 0x1fdbe8u: goto label_1fdbe8;
        case 0x1fdbecu: goto label_1fdbec;
        case 0x1fdbf0u: goto label_1fdbf0;
        case 0x1fdbf4u: goto label_1fdbf4;
        case 0x1fdbf8u: goto label_1fdbf8;
        case 0x1fdbfcu: goto label_1fdbfc;
        default: break;
    }

    ctx->pc = 0x1fdaf0u;

label_1fdaf0:
    // 0x1fdaf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fdaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fdaf4:
    // 0x1fdaf4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fdaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1fdaf8:
    // 0x1fdaf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fdaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fdafc:
    // 0x1fdafc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb00:
    // 0x1fdb00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fdb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1fdb04:
    // 0x1fdb04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fdb04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb08:
    // 0x1fdb08: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1fdb08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1fdb0c:
    // 0x1fdb0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fdb0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb10:
    // 0x1fdb10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fdb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1fdb14:
    // 0x1fdb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fdb18:
    // 0x1fdb18: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x1fdb18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
label_1fdb1c:
    // 0x1fdb1c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1fdb20:
    if (ctx->pc == 0x1FDB20u) {
        ctx->pc = 0x1FDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB1Cu;
        // 0x1fdb20: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB24u;
        goto label_1fdb24;
    }
    ctx->pc = 0x1FDB1Cu;
    {
        const bool branch_taken_0x1fdb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB1Cu;
        // 0x1fdb20: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb1c) {
            ctx->pc = 0x1FDB54u;
            goto label_1fdb54;
        }
    }
    ctx->pc = 0x1FDB24u;
label_1fdb24:
    // 0x1fdb24: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1fdb28:
    // 0x1fdb28: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1fdb28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1fdb2c:
    // 0x1fdb2c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1fdb30:
    // 0x1fdb30: 0x40f809  jalr        $v0
label_1fdb34:
    if (ctx->pc == 0x1FDB34u) {
        ctx->pc = 0x1FDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB30u;
        // 0x1fdb34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB38u;
        goto label_1fdb38;
    }
    ctx->pc = 0x1FDB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDB38u);
        ctx->pc = 0x1FDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB30u;
        // 0x1fdb34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB30u, 0x1FDB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDB38u;
label_1fdb38:
    // 0x1fdb38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fdb38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb3c:
    // 0x1fdb3c: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_1fdb40:
    if (ctx->pc == 0x1FDB40u) {
        ctx->pc = 0x1FDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB3Cu;
        // 0x1fdb40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB44u;
        goto label_1fdb44;
    }
    ctx->pc = 0x1FDB3Cu;
    {
        const bool branch_taken_0x1fdb3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB3Cu;
        // 0x1fdb40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb3c) {
            ctx->pc = 0x1FDBDCu;
            goto label_1fdbdc;
        }
    }
    ctx->pc = 0x1FDB44u;
label_1fdb44:
    // 0x1fdb44: 0xc07f642  jal         func_1FD908
label_1fdb48:
    if (ctx->pc == 0x1FDB48u) {
        ctx->pc = 0x1FDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB44u;
        // 0x1fdb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB4Cu;
        goto label_1fdb4c;
    }
    ctx->pc = 0x1FDB44u;
    SET_GPR_U32(ctx, 31, 0x1FDB4Cu);
    ctx->pc = 0x1FDB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB44u;
    // 0x1fdb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x1FDB44u, 0x1FDB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB4Cu;
label_1fdb4c:
    // 0x1fdb4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fdb50:
    if (ctx->pc == 0x1FDB50u) {
        ctx->pc = 0x1FDB54u;
        goto label_1fdb54;
    }
    ctx->pc = 0x1FDB4Cu;
    {
        const bool branch_taken_0x1fdb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb4c) {
            ctx->pc = 0x1FDB5Cu;
            goto label_1fdb5c;
        }
    }
    ctx->pc = 0x1FDB54u;
label_1fdb54:
    // 0x1fdb54: 0x10000021  b           . + 4 + (0x21 << 2)
label_1fdb58:
    if (ctx->pc == 0x1FDB58u) {
        ctx->pc = 0x1FDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB54u;
        // 0x1fdb58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB5Cu;
        goto label_1fdb5c;
    }
    ctx->pc = 0x1FDB54u;
    {
        const bool branch_taken_0x1fdb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB54u;
        // 0x1fdb58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb54) {
            ctx->pc = 0x1FDBDCu;
            goto label_1fdbdc;
        }
    }
    ctx->pc = 0x1FDB5Cu;
label_1fdb5c:
    // 0x1fdb5c: 0xc07f642  jal         func_1FD908
label_1fdb60:
    if (ctx->pc == 0x1FDB60u) {
        ctx->pc = 0x1FDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB5Cu;
        // 0x1fdb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB64u;
        goto label_1fdb64;
    }
    ctx->pc = 0x1FDB5Cu;
    SET_GPR_U32(ctx, 31, 0x1FDB64u);
    ctx->pc = 0x1FDB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB5Cu;
    // 0x1fdb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x1FDB5Cu, 0x1FDB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB64u;
label_1fdb64:
    // 0x1fdb64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb68:
    // 0x1fdb68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fdb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb6c:
    // 0x1fdb6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fdb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb70:
    // 0x1fdb70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1fdb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb74:
    // 0x1fdb74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fdb74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1fdb78:
    // 0x1fdb78: 0xc07f28e  jal         func_1FCA38
label_1fdb7c:
    if (ctx->pc == 0x1FDB7Cu) {
        ctx->pc = 0x1FDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB78u;
        // 0x1fdb7c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB80u;
        goto label_1fdb80;
    }
    ctx->pc = 0x1FDB78u;
    SET_GPR_U32(ctx, 31, 0x1FDB80u);
    ctx->pc = 0x1FDB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB78u;
    // 0x1fdb7c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCA38u, 0x1FDB78u, 0x1FDB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB80u;
label_1fdb80:
    // 0x1fdb80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb84:
    // 0x1fdb84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fdb88:
    // 0x1fdb88: 0x50820015  beql        $a0, $v0, . + 4 + (0x15 << 2)
label_1fdb8c:
    if (ctx->pc == 0x1FDB8Cu) {
        ctx->pc = 0x1FDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB88u;
        // 0x1fdb8c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB90u;
        goto label_1fdb90;
    }
    ctx->pc = 0x1FDB88u;
    {
        const bool branch_taken_0x1fdb88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fdb88) {
            ctx->pc = 0x1FDB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB88u;
            // 0x1fdb8c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBE0u;
            goto label_1fdbe0;
        }
    }
    ctx->pc = 0x1FDB90u;
label_1fdb90:
    // 0x1fdb90: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1fdb94:
    // 0x1fdb94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1fdb98:
    if (ctx->pc == 0x1FDB98u) {
        ctx->pc = 0x1FDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB94u;
        // 0x1fdb98: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB9Cu;
        goto label_1fdb9c;
    }
    ctx->pc = 0x1FDB94u;
    {
        const bool branch_taken_0x1fdb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB94u;
        // 0x1fdb98: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb94) {
            ctx->pc = 0x1FDBD4u;
            goto label_1fdbd4;
        }
    }
    ctx->pc = 0x1FDB9Cu;
label_1fdb9c:
    // 0x1fdb9c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fdb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fdba0:
    // 0x1fdba0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1fdba4:
    if (ctx->pc == 0x1FDBA4u) {
        ctx->pc = 0x1FDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBA0u;
        // 0x1fdba4: 0xac710024  sw          $s1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBA8u;
        goto label_1fdba8;
    }
    ctx->pc = 0x1FDBA0u;
    {
        const bool branch_taken_0x1fdba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdba0) {
            ctx->pc = 0x1FDBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDBA0u;
            // 0x1fdba4: 0xac710024  sw          $s1, 0x24($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBCCu;
            goto label_1fdbcc;
        }
    }
    ctx->pc = 0x1FDBA8u;
label_1fdba8:
    // 0x1fdba8: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1fdba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fdbac:
    // 0x1fdbac: 0x0  nop
    ctx->pc = 0x1fdbacu;
    // NOP
label_1fdbb0:
    // 0x1fdbb0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fdbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fdbb4:
    // 0x1fdbb4: 0x0  nop
    ctx->pc = 0x1fdbb4u;
    // NOP
label_1fdbb8:
    // 0x1fdbb8: 0x0  nop
    ctx->pc = 0x1fdbb8u;
    // NOP
label_1fdbbc:
    // 0x1fdbbc: 0x0  nop
    ctx->pc = 0x1fdbbcu;
    // NOP
label_1fdbc0:
    // 0x1fdbc0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1fdbc4:
    if (ctx->pc == 0x1FDBC4u) {
        ctx->pc = 0x1FDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBC0u;
        // 0x1fdbc4: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBC8u;
        goto label_1fdbc8;
    }
    ctx->pc = 0x1FDBC0u;
    {
        const bool branch_taken_0x1fdbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdbc0) {
            ctx->pc = 0x1FDBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDBC0u;
            // 0x1fdbc4: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdbb0;
        }
    }
    ctx->pc = 0x1FDBC8u;
label_1fdbc8:
    // 0x1fdbc8: 0xac710024  sw          $s1, 0x24($v1)
    ctx->pc = 0x1fdbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
label_1fdbcc:
    // 0x1fdbcc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fdbd0:
    if (ctx->pc == 0x1FDBD0u) {
        ctx->pc = 0x1FDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBCCu;
        // 0x1fdbd0: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBD4u;
        goto label_1fdbd4;
    }
    ctx->pc = 0x1FDBCCu;
    {
        const bool branch_taken_0x1fdbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBCCu;
        // 0x1fdbd0: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdbcc) {
            ctx->pc = 0x1FDBD8u;
            goto label_1fdbd8;
        }
    }
    ctx->pc = 0x1FDBD4u;
label_1fdbd4:
    // 0x1fdbd4: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x1fdbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_1fdbd8:
    // 0x1fdbd8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fdbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdbdc:
    // 0x1fdbdc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fdbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fdbe0:
    // 0x1fdbe0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fdbe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fdbe4:
    // 0x1fdbe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fdbe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fdbe8:
    // 0x1fdbe8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fdbe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdbec:
    // 0x1fdbec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdbf0:
    // 0x1fdbf0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1fdbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fdbf4:
    // 0x1fdbf4: 0x3e00008  jr          $ra
label_1fdbf8:
    if (ctx->pc == 0x1FDBF8u) {
        ctx->pc = 0x1FDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBF4u;
        // 0x1fdbf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBFCu;
        goto label_1fdbfc;
    }
    ctx->pc = 0x1FDBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBF4u;
        // 0x1fdbf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDBFCu;
label_1fdbfc:
    // 0x1fdbfc: 0x0  nop
    ctx->pc = 0x1fdbfcu;
    // NOP
    ctx->pc = 0x1fdc00u;
}
