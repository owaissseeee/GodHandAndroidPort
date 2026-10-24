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

// Function: cSndSeVoice_Update
// Address: 0x2cda80 - 0x2cdd18
void cSndSeVoice_Update_0x2cda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Update_0x2cda80");
#endif

    switch (ctx->pc) {
        case 0x2cda9cu: goto label_2cda9c;
        case 0x2cdab8u: goto label_2cdab8;
        case 0x2cdac0u: goto label_2cdac0;
        case 0x2cdb28u: goto label_2cdb28;
        case 0x2cdbd4u: goto label_2cdbd4;
        case 0x2cdc04u: goto label_2cdc04;
        case 0x2cdc10u: goto label_2cdc10;
        case 0x2cdc70u: goto label_2cdc70;
        case 0x2cdcb4u: goto label_2cdcb4;
        case 0x2cdcdcu: goto label_2cdcdc;
        case 0x2cdcecu: goto label_2cdcec;
        default: break;
    }

    ctx->pc = 0x2cda80u;

    // 0x2cda80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cda80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cda84: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cda84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2cda88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cda88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2cda8c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cda8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2cda90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cda90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cda94: 0xc0b368e  jal         func_2CDA38
    ctx->pc = 0x2CDA94u;
    SET_GPR_U32(ctx, 31, 0x2CDA9Cu);
    ctx->pc = 0x2CDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA94u;
    // 0x2cda98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA38u, 0x2CDA94u, 0x2CDA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA9Cu;
label_2cda9c:
    // 0x2cda9c: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2CDA9Cu;
    {
        const bool branch_taken_0x2cda9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA9Cu;
        // 0x2cdaa0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda9c) {
            ctx->pc = 0x2CDD00u;
            goto label_2cdd00;
        }
    }
    ctx->pc = 0x2CDAA4u;
    // 0x2cdaa4: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x2cdaa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cdaa8: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x2cdaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2cdaac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cdaacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdab0: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CDAB0u;
    SET_GPR_U32(ctx, 31, 0x2CDAB8u);
    ctx->pc = 0x2CDAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDAB0u;
    // 0x2cdab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CDAB0u, 0x2CDAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAB8u;
label_2cdab8:
    // 0x2cdab8: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2CDAB8u;
    SET_GPR_U32(ctx, 31, 0x2CDAC0u);
    ctx->pc = 0x2CDABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDAB8u;
    // 0x2cdabc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2CDAB8u, 0x2CDAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAC0u;
label_2cdac0:
    // 0x2cdac0: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2CDAC0u;
    {
        const bool branch_taken_0x2cdac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdac0) {
            ctx->pc = 0x2CDCE4u;
            goto label_2cdce4;
        }
    }
    ctx->pc = 0x2CDAC8u;
    // 0x2cdac8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2cdac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2cdacc: 0x18800011  blez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CDACCu;
    {
        const bool branch_taken_0x2cdacc = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2CDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDACCu;
        // 0x2cdad0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdacc) {
            ctx->pc = 0x2CDB14u;
            goto label_2cdb14;
        }
    }
    ctx->pc = 0x2CDAD4u;
    // 0x2cdad4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2cdad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2cdad8: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x2cdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
    // 0x2cdadc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2cdadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2cdae0: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2CDAE0u;
    {
        const bool branch_taken_0x2cdae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAE0u;
        // 0x2cdae4: 0x24667a84  addiu       $a2, $v1, 0x7A84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 31364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdae0) {
            ctx->pc = 0x2CDD00u;
            goto label_2cdd00;
        }
    }
    ctx->pc = 0x2CDAE8u;
    // 0x2cdae8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2cdae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cdaec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2cdaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2cdaf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDAF0u;
    {
        const bool branch_taken_0x2cdaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAF0u;
        // 0x2cdaf4: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdaf0) {
            ctx->pc = 0x2CDB0Cu;
            goto label_2cdb0c;
        }
    }
    ctx->pc = 0x2CDAF8u;
    // 0x2cdaf8: 0x8cc2fff4  lw          $v0, -0xC($a2)
    ctx->pc = 0x2cdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
    // 0x2cdafc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2cdafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2cdb00: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2CDB00u;
    {
        const bool branch_taken_0x2cdb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB00u;
        // 0x2cdb04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb00) {
            ctx->pc = 0x2CDD04u;
            goto label_2cdd04;
        }
    }
    ctx->pc = 0x2CDB08u;
    // 0x2cdb08: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2cdb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2cdb0c:
    // 0x2cdb0c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2CDB0Cu;
    {
        const bool branch_taken_0x2cdb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB0Cu;
        // 0x2cdb10: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb0c) {
            ctx->pc = 0x2CDD00u;
            goto label_2cdd00;
        }
    }
    ctx->pc = 0x2CDB14u;
label_2cdb14:
    // 0x2cdb14: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x2cdb14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cdb18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cdb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb1c: 0x8626000a  lh          $a2, 0xA($s1)
    ctx->pc = 0x2cdb1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2cdb20: 0xc0b3c86  jal         func_2CF218
    ctx->pc = 0x2CDB20u;
    SET_GPR_U32(ctx, 31, 0x2CDB28u);
    ctx->pc = 0x2CDB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB20u;
    // 0x2cdb24: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF218u, 0x2CDB20u, 0x2CDB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB28u;
label_2cdb28:
    // 0x2cdb28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cdb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cdb2c: 0x1043006d  beq         $v0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2CDB2Cu;
    {
        const bool branch_taken_0x2cdb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB2Cu;
        // 0x2cdb30: 0x93a20020  lbu         $v0, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb2c) {
            ctx->pc = 0x2CDCE4u;
            goto label_2cdce4;
        }
    }
    ctx->pc = 0x2CDB34u;
    // 0x2cdb34: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2cdb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2cdb38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDB38u;
    {
        const bool branch_taken_0x2cdb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB38u;
        // 0x2cdb3c: 0x3c040400  lui         $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb38) {
            ctx->pc = 0x2CDB58u;
            goto label_2cdb58;
        }
    }
    ctx->pc = 0x2CDB40u;
    // 0x2cdb40: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2cdb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2cdb44: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x2cdb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2cdb48: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2cdb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2cdb4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cdb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cdb50: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x2cdb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x2cdb54: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x2cdb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
label_2cdb58:
    // 0x2cdb58: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2cdb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2cdb5c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CDB5Cu;
    {
        const bool branch_taken_0x2cdb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb5c) {
            ctx->pc = 0x2CDB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDB5Cu;
            // 0x2cdb60: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDBA8u;
            goto label_2cdba8;
        }
    }
    ctx->pc = 0x2CDB64u;
    // 0x2cdb64: 0xc44105a8  lwc1        $f1, 0x5A8($v0)
    ctx->pc = 0x2cdb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdb68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cdb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cdb6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cdb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdb70: 0x0  nop
    ctx->pc = 0x2cdb70u;
    // NOP
    // 0x2cdb74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cdb74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdb78: 0x0  nop
    ctx->pc = 0x2cdb78u;
    // NOP
    // 0x2cdb7c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2CDB7Cu;
    {
        const bool branch_taken_0x2cdb7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdb7c) {
            ctx->pc = 0x2CDB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDB7Cu;
            // 0x2cdb80: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDBA8u;
            goto label_2cdba8;
        }
    }
    ctx->pc = 0x2CDB84u;
    // 0x2cdb84: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2cdb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2cdb88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cdb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cdb8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDB8Cu;
    {
        const bool branch_taken_0x2cdb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB8Cu;
        // 0x2cdb90: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb8c) {
            ctx->pc = 0x2CDBA4u;
            goto label_2cdba4;
        }
    }
    ctx->pc = 0x2CDB94u;
    // 0x2cdb94: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2cdb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2cdb98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cdb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cdb9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDB9Cu;
    {
        const bool branch_taken_0x2cdb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB9Cu;
        // 0x2cdba0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb9c) {
            ctx->pc = 0x2CDBB8u;
            goto label_2cdbb8;
        }
    }
    ctx->pc = 0x2CDBA4u;
label_2cdba4:
    // 0x2cdba4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2cdba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2cdba8:
    // 0x2cdba8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x2cdba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x2cdbac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cdbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cdbb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2cdbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cdbb4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2cdbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2cdbb8:
    // 0x2cdbb8: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x2cdbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cdbbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cdbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cdbc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cdbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cdbc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDBC4u;
    {
        const bool branch_taken_0x2cdbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBC4u;
        // 0x2cdbc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbc4) {
            ctx->pc = 0x2CDBECu;
            goto label_2cdbec;
        }
    }
    ctx->pc = 0x2CDBCCu;
    // 0x2cdbcc: 0xc0b3962  jal         func_2CE588
    ctx->pc = 0x2CDBCCu;
    SET_GPR_U32(ctx, 31, 0x2CDBD4u);
    ctx->pc = 0x2CDBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDBCCu;
    // 0x2cdbd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE588u, 0x2CDBCCu, 0x2CDBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDBD4u;
label_2cdbd4:
    // 0x2cdbd4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2CDBD4u;
    {
        const bool branch_taken_0x2cdbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdbd4) {
            ctx->pc = 0x2CDCE4u;
            goto label_2cdce4;
        }
    }
    ctx->pc = 0x2CDBDCu;
    // 0x2cdbdc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2cdbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cdbe0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2cdbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2cdbe4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2CDBE4u;
    {
        const bool branch_taken_0x2cdbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBE4u;
        // 0x2cdbe8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbe4) {
            ctx->pc = 0x2CDCF4u;
            goto label_2cdcf4;
        }
    }
    ctx->pc = 0x2CDBECu;
label_2cdbec:
    // 0x2cdbec: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2cdbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2cdbf0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2cdbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2cdbf4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CDBF4u;
    {
        const bool branch_taken_0x2cdbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdbf4) {
            ctx->pc = 0x2CDC68u;
            goto label_2cdc68;
        }
    }
    ctx->pc = 0x2CDBFCu;
    // 0x2cdbfc: 0xc0b3c96  jal         func_2CF258
    ctx->pc = 0x2CDBFCu;
    SET_GPR_U32(ctx, 31, 0x2CDC04u);
    ctx->pc = 0x2CDC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDBFCu;
    // 0x2cdc00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF258u, 0x2CDBFCu, 0x2CDC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC04u;
label_2cdc04:
    // 0x2cdc04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cdc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc08: 0xc0b3ca6  jal         func_2CF298
    ctx->pc = 0x2CDC08u;
    SET_GPR_U32(ctx, 31, 0x2CDC10u);
    ctx->pc = 0x2CDC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC08u;
    // 0x2cdc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF298u, 0x2CDC08u, 0x2CDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC10u;
label_2cdc10:
    // 0x2cdc10: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2cdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cdc14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2cdc14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cdc18: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2cdc18u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cdc1c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CDC1Cu;
    {
        const bool branch_taken_0x2cdc1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc1c) {
            ctx->pc = 0x2CDC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDC1Cu;
            // 0x2cdc20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC24u;
            goto label_2cdc24;
        }
    }
    ctx->pc = 0x2CDC24u;
label_2cdc24:
    // 0x2cdc24: 0x1012  mflo        $v0
    ctx->pc = 0x2cdc24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cdc28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdc2c: 0x0  nop
    ctx->pc = 0x2cdc2cu;
    // NOP
    // 0x2cdc30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cdc30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cdc34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cdc34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdc38: 0x0  nop
    ctx->pc = 0x2cdc38u;
    // NOP
    // 0x2cdc3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2CDC3Cu;
    {
        const bool branch_taken_0x2cdc3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdc3c) {
            ctx->pc = 0x2CDC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDC3Cu;
            // 0x2cdc40: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC44u;
            goto label_2cdc44;
        }
    }
    ctx->pc = 0x2CDC44u;
label_2cdc44:
    // 0x2cdc44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cdc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cdc48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cdc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cdc4c: 0x0  nop
    ctx->pc = 0x2cdc4cu;
    // NOP
    // 0x2cdc50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cdc50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdc54: 0x0  nop
    ctx->pc = 0x2cdc54u;
    // NOP
    // 0x2cdc58: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2CDC58u;
    {
        const bool branch_taken_0x2cdc58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdc58) {
            ctx->pc = 0x2CDC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDC58u;
            // 0x2cdc5c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC60u;
            goto label_2cdc60;
        }
    }
    ctx->pc = 0x2CDC60u;
label_2cdc60:
    // 0x2cdc60: 0x2642ee00  addiu       $v0, $s2, -0x1200
    ctx->pc = 0x2cdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    // 0x2cdc64: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2cdc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
label_2cdc68:
    // 0x2cdc68: 0xc0dd438  jal         func_3750E0
    ctx->pc = 0x2CDC68u;
    SET_GPR_U32(ctx, 31, 0x2CDC70u);
    ctx->pc = 0x2CDC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC68u;
    // 0x2cdc6c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3750E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3750E0u, 0x2CDC68u, 0x2CDC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC70u;
label_2cdc70:
    // 0x2cdc70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cdc70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdc78: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CDC78u;
    {
        const bool branch_taken_0x2cdc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cdc78) {
            ctx->pc = 0x2CDC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDC78u;
            // 0x2cdc7c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDCF8u;
            goto label_2cdcf8;
        }
    }
    ctx->pc = 0x2CDC80u;
    // 0x2cdc80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDC80u;
    {
        const bool branch_taken_0x2cdc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC80u;
        // 0x2cdc84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc80) {
            ctx->pc = 0x2CDC98u;
            goto label_2cdc98;
        }
    }
    ctx->pc = 0x2CDC88u;
    // 0x2cdc88: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDC88u;
    {
        const bool branch_taken_0x2cdc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC88u;
        // 0x2cdc8c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc88) {
            ctx->pc = 0x2CDCBCu;
            goto label_2cdcbc;
        }
    }
    ctx->pc = 0x2CDC90u;
    // 0x2cdc90: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2CDC90u;
    {
        const bool branch_taken_0x2cdc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC90u;
        // 0x2cdc94: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc90) {
            ctx->pc = 0x2CDCF8u;
            goto label_2cdcf8;
        }
    }
    ctx->pc = 0x2CDC98u;
label_2cdc98:
    // 0x2cdc98: 0x93a20022  lbu         $v0, 0x22($sp)
    ctx->pc = 0x2cdc98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x2cdc9c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2cdc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2cdca0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2cdca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cdca4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CDCA4u;
    {
        const bool branch_taken_0x2cdca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdca4) {
            ctx->pc = 0x2CDCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDCA4u;
            // 0x2cdca8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDCF8u;
            goto label_2cdcf8;
        }
    }
    ctx->pc = 0x2CDCACu;
    // 0x2cdcac: 0xc0b38fa  jal         func_2CE3E8
    ctx->pc = 0x2CDCACu;
    SET_GPR_U32(ctx, 31, 0x2CDCB4u);
    ctx->pc = 0x2CDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCACu;
    // 0x2cdcb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE3E8u, 0x2CDCACu, 0x2CDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCB4u;
label_2cdcb4:
    // 0x2cdcb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CDCB4u;
    {
        const bool branch_taken_0x2cdcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCB4u;
        // 0x2cdcb8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcb4) {
            ctx->pc = 0x2CDCF8u;
            goto label_2cdcf8;
        }
    }
    ctx->pc = 0x2CDCBCu;
label_2cdcbc:
    // 0x2cdcbc: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x2cdcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31352)));
    // 0x2cdcc0: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2cdcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2cdcc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cdcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cdcc8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CDCC8u;
    {
        const bool branch_taken_0x2cdcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCC8u;
        // 0x2cdccc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcc8) {
            ctx->pc = 0x2CDD04u;
            goto label_2cdd04;
        }
    }
    ctx->pc = 0x2CDCD0u;
    // 0x2cdcd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cdcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcd4: 0xc0b3a80  jal         func_2CEA00
    ctx->pc = 0x2CDCD4u;
    SET_GPR_U32(ctx, 31, 0x2CDCDCu);
    ctx->pc = 0x2CDCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCD4u;
    // 0x2cdcd8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEA00u, 0x2CDCD4u, 0x2CDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCDCu;
label_2cdcdc:
    // 0x2cdcdc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDCDCu;
    {
        const bool branch_taken_0x2cdcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdcdc) {
            ctx->pc = 0x2CDCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDCDCu;
            // 0x2cdce0: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDCF8u;
            goto label_2cdcf8;
        }
    }
    ctx->pc = 0x2CDCE4u;
label_2cdce4:
    // 0x2cdce4: 0xc0b38fa  jal         func_2CE3E8
    ctx->pc = 0x2CDCE4u;
    SET_GPR_U32(ctx, 31, 0x2CDCECu);
    ctx->pc = 0x2CDCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCE4u;
    // 0x2cdce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE3E8u, 0x2CDCE4u, 0x2CDCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCECu;
label_2cdcec:
    // 0x2cdcec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDCECu;
    {
        const bool branch_taken_0x2cdcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCECu;
        // 0x2cdcf0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcec) {
            ctx->pc = 0x2CDD04u;
            goto label_2cdd04;
        }
    }
    ctx->pc = 0x2CDCF4u;
label_2cdcf4:
    // 0x2cdcf4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2cdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2cdcf8:
    // 0x2cdcf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cdcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cdcfc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2cdcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2cdd00:
    // 0x2cdd00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cdd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cdd04:
    // 0x2cdd04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cdd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cdd08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cdd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cdd0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cdd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cdd10: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD10u;
        // 0x2cdd14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDD18u;
}
