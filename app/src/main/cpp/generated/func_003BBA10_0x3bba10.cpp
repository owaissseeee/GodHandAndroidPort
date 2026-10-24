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

// Function: func_003BBA10
// Address: 0x3bba10 - 0x3bbec0
void func_003BBA10_0x3bba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BBA10_0x3bba10");
#endif

    switch (ctx->pc) {
        case 0x3bba70u: goto label_3bba70;
        case 0x3bbab4u: goto label_3bbab4;
        case 0x3bbaf8u: goto label_3bbaf8;
        case 0x3bbb3cu: goto label_3bbb3c;
        case 0x3bbb7cu: goto label_3bbb7c;
        case 0x3bbbdcu: goto label_3bbbdc;
        case 0x3bbc24u: goto label_3bbc24;
        case 0x3bbc74u: goto label_3bbc74;
        case 0x3bbcdcu: goto label_3bbcdc;
        case 0x3bbcecu: goto label_3bbcec;
        case 0x3bbd28u: goto label_3bbd28;
        case 0x3bbd58u: goto label_3bbd58;
        case 0x3bbd7cu: goto label_3bbd7c;
        case 0x3bbdacu: goto label_3bbdac;
        case 0x3bbdd0u: goto label_3bbdd0;
        case 0x3bbe00u: goto label_3bbe00;
        case 0x3bbe60u: goto label_3bbe60;
        default: break;
    }

    ctx->pc = 0x3bba10u;

    // 0x3bba10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3bba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3bba14: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3bba14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3bba18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3bba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3bba1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bba1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bba20: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3bba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3bba24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3bba24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bba28: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3bba28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3bba2c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3bba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3bba30: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3bba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3bba34: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3bba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3bba38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bba3c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3bba3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bba40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3bba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3bba44: 0x12020097  beq         $s0, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x3BBA44u;
    {
        const bool branch_taken_0x3bba44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA44u;
        // 0x3bba48: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bba44) {
            ctx->pc = 0x3BBCA4u;
            goto label_3bbca4;
        }
    }
    ctx->pc = 0x3BBA4Cu;
    // 0x3bba4c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BBA4Cu;
    {
        const bool branch_taken_0x3bba4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA4Cu;
        // 0x3bba50: 0x2612fff8  addiu       $s2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bba4c) {
            ctx->pc = 0x3BBA8Cu;
            goto label_3bba8c;
        }
    }
    ctx->pc = 0x3BBA54u;
    // 0x3bba54: 0x8e03fff8  lw          $v1, -0x8($s0)
    ctx->pc = 0x3bba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x3bba58: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bba58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bba5c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bba60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBA60u;
    {
        const bool branch_taken_0x3bba60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bba60) {
            ctx->pc = 0x3BBA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBA60u;
            // 0x3bba64: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBA78u;
            goto label_3bba78;
        }
    }
    ctx->pc = 0x3BBA68u;
    // 0x3bba68: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BBA68u;
    SET_GPR_U32(ctx, 31, 0x3BBA70u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BBA68u, 0x3BBA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBA70u;
label_3bba70:
    // 0x3bba70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBA70u;
    {
        const bool branch_taken_0x3bba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA70u;
        // 0x3bba74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bba70) {
            ctx->pc = 0x3BBA80u;
            goto label_3bba80;
        }
    }
    ctx->pc = 0x3BBA78u;
label_3bba78:
    // 0x3bba78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bba7c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bba80:
    // 0x3bba80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bba80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bba84: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x3bba84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3bba88: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3bba88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_3bba8c:
    // 0x3bba8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3bba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bba90: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3bba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3bba94: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3bba94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3bba98: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3bba98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3bba9c: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bbaa0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bbaa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBAA4u;
    {
        const bool branch_taken_0x3bbaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBAA4u;
        // 0x3bbaa8: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbaa4) {
            ctx->pc = 0x3BBABCu;
            goto label_3bbabc;
        }
    }
    ctx->pc = 0x3BBAACu;
    // 0x3bbaac: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BBAACu;
    SET_GPR_U32(ctx, 31, 0x3BBAB4u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BBAACu, 0x3BBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBAB4u;
label_3bbab4:
    // 0x3bbab4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BBAB4u;
    {
        const bool branch_taken_0x3bbab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBAB4u;
        // 0x3bbab8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbab4) {
            ctx->pc = 0x3BBAC8u;
            goto label_3bbac8;
        }
    }
    ctx->pc = 0x3BBABCu;
label_3bbabc:
    // 0x3bbabc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3bbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3bbac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bbac4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bbac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bbac8:
    // 0x3bbac8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3bbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bbacc: 0x92c40004  lbu         $a0, 0x4($s6)
    ctx->pc = 0x3bbaccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3bbad0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bbad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bbad4: 0x2451fff0  addiu       $s1, $v0, -0x10
    ctx->pc = 0x3bbad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3bbad8: 0x2341823  subu        $v1, $s1, $s4
    ctx->pc = 0x3bbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x3bbadc: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x3bbadcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x3bbae0: 0x390c3  sra         $s2, $v1, 3
    ctx->pc = 0x3bbae0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3bbae4: 0x1a40002e  blez        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x3BBAE4u;
    {
        const bool branch_taken_0x3bbae4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x3BBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBAE4u;
        // 0x3bbae8: 0x2450fff8  addiu       $s0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbae4) {
            ctx->pc = 0x3BBBA0u;
            goto label_3bbba0;
        }
    }
    ctx->pc = 0x3BBAECu;
    // 0x3bbaec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3bbaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3bbaf0: 0x24534030  addiu       $s3, $v0, 0x4030
    ctx->pc = 0x3bbaf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x3bbaf4: 0x0  nop
    ctx->pc = 0x3bbaf4u;
    // NOP
label_3bbaf8:
    // 0x3bbaf8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3bbaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3bbafc: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x3bbafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x3bbb00: 0x52300024  beql        $s1, $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3BBB00u;
    {
        const bool branch_taken_0x3bbb00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x3bbb00) {
            ctx->pc = 0x3BBB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBB00u;
            // 0x3bbb04: 0x92220004  lbu         $v0, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBB94u;
            goto label_3bbb94;
        }
    }
    ctx->pc = 0x3BBB08u;
    // 0x3bbb08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bbb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bbb0c: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x3bbb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x3bbb10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3bbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3bbb14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbb18: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BBB18u;
    {
        const bool branch_taken_0x3bbb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB18u;
        // 0x3bbb1c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb18) {
            ctx->pc = 0x3BBB60u;
            goto label_3bbb60;
        }
    }
    ctx->pc = 0x3BBB20u;
    // 0x3bbb20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3bbb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3bbb24: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bbb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bbb28: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bbb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bbb2c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBB2Cu;
    {
        const bool branch_taken_0x3bbb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB2Cu;
        // 0x3bbb30: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb2c) {
            ctx->pc = 0x3BBB44u;
            goto label_3bbb44;
        }
    }
    ctx->pc = 0x3BBB34u;
    // 0x3bbb34: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BBB34u;
    SET_GPR_U32(ctx, 31, 0x3BBB3Cu);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BBB34u, 0x3BBB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBB3Cu;
label_3bbb3c:
    // 0x3bbb3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BBB3Cu;
    {
        const bool branch_taken_0x3bbb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB3Cu;
        // 0x3bbb40: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb3c) {
            ctx->pc = 0x3BBB64u;
            goto label_3bbb64;
        }
    }
    ctx->pc = 0x3BBB44u;
label_3bbb44:
    // 0x3bbb44: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bbb48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbb4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bbb50: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3bbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3bbb54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bbb58: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x3bbb58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x3bbb5c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3bbb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3bbb60:
    // 0x3bbb60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3bbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bbb64:
    // 0x3bbb64: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bbb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bbb68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bbb6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBB6Cu;
    {
        const bool branch_taken_0x3bbb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbb6c) {
            ctx->pc = 0x3BBB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBB6Cu;
            // 0x3bbb70: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBB84u;
            goto label_3bbb84;
        }
    }
    ctx->pc = 0x3BBB74u;
    // 0x3bbb74: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BBB74u;
    SET_GPR_U32(ctx, 31, 0x3BBB7Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BBB74u, 0x3BBB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBB7Cu;
label_3bbb7c:
    // 0x3bbb7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBB7Cu;
    {
        const bool branch_taken_0x3bbb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB7Cu;
        // 0x3bbb80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb7c) {
            ctx->pc = 0x3BBB8Cu;
            goto label_3bbb8c;
        }
    }
    ctx->pc = 0x3BBB84u;
label_3bbb84:
    // 0x3bbb84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bbb88: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bbb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bbb8c:
    // 0x3bbb8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bbb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bbb90: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x3bbb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_3bbb94:
    // 0x3bbb94: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3bbb94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3bbb98: 0x1e40ffd7  bgtz        $s2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3BBB98u;
    {
        const bool branch_taken_0x3bbb98 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x3BBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB98u;
        // 0x3bbb9c: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb98) {
            ctx->pc = 0x3BBAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbaf8;
        }
    }
    ctx->pc = 0x3BBBA0u;
label_3bbba0:
    // 0x3bbba0: 0x13b40025  beq         $sp, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x3BBBA0u;
    {
        const bool branch_taken_0x3bbba0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x3BBBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBBA0u;
        // 0x3bbba4: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbba0) {
            ctx->pc = 0x3BBC38u;
            goto label_3bbc38;
        }
    }
    ctx->pc = 0x3BBBA8u;
    // 0x3bbba8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x3bbba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3bbbac: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x3bbbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3bbbb0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3bbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3bbbb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbbb8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BBBB8u;
    {
        const bool branch_taken_0x3bbbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBBB8u;
        // 0x3bbbbc: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbbb8) {
            ctx->pc = 0x3BBC08u;
            goto label_3bbc08;
        }
    }
    ctx->pc = 0x3BBBC0u;
    // 0x3bbbc0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3bbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3bbbc4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bbbc8: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bbbc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bbbcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBBCCu;
    {
        const bool branch_taken_0x3bbbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBBCCu;
        // 0x3bbbd0: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbbcc) {
            ctx->pc = 0x3BBBE4u;
            goto label_3bbbe4;
        }
    }
    ctx->pc = 0x3BBBD4u;
    // 0x3bbbd4: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BBBD4u;
    SET_GPR_U32(ctx, 31, 0x3BBBDCu);
    ctx->pc = 0x3BBBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBBD4u;
    // 0x3bbbd8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BBBD4u, 0x3BBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBBDCu;
label_3bbbdc:
    // 0x3bbbdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3BBBDCu;
    {
        const bool branch_taken_0x3bbbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBBDCu;
        // 0x3bbbe0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbbdc) {
            ctx->pc = 0x3BBC0Cu;
            goto label_3bbc0c;
        }
    }
    ctx->pc = 0x3BBBE4u;
label_3bbbe4:
    // 0x3bbbe4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3bbbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3bbbe8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bbbec: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3bbbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3bbbf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbbf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bbbf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bbbfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bbc00: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x3bbc00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x3bbc04: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3bbc04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3bbc08:
    // 0x3bbc08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bbc0c:
    // 0x3bbc0c: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bbc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bbc10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bbc14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBC14u;
    {
        const bool branch_taken_0x3bbc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbc14) {
            ctx->pc = 0x3BBC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBC14u;
            // 0x3bbc18: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBC2Cu;
            goto label_3bbc2c;
        }
    }
    ctx->pc = 0x3BBC1Cu;
    // 0x3bbc1c: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BBC1Cu;
    SET_GPR_U32(ctx, 31, 0x3BBC24u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BBC1Cu, 0x3BBC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBC24u;
label_3bbc24:
    // 0x3bbc24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBC24u;
    {
        const bool branch_taken_0x3bbc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC24u;
        // 0x3bbc28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc24) {
            ctx->pc = 0x3BBC34u;
            goto label_3bbc34;
        }
    }
    ctx->pc = 0x3BBC2Cu;
label_3bbc2c:
    // 0x3bbc2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bbc30: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bbc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bbc34:
    // 0x3bbc34: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3bbc34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_3bbc38:
    // 0x3bbc38: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3bbc38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bbc3c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3bbc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bbc40: 0xa2820004  sb          $v0, 0x4($s4)
    ctx->pc = 0x3bbc40u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bbc44: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x3bbc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3bbc48: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3bbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3bbc4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbc50: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x3BBC50u;
    {
        const bool branch_taken_0x3bbc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC50u;
        // 0x3bbc54: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc50) {
            ctx->pc = 0x3BBE98u;
            goto label_3bbe98;
        }
    }
    ctx->pc = 0x3BBC58u;
    // 0x3bbc58: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3bbc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3bbc5c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bbc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bbc60: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bbc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bbc64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBC64u;
    {
        const bool branch_taken_0x3bbc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC64u;
        // 0x3bbc68: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc64) {
            ctx->pc = 0x3BBC7Cu;
            goto label_3bbc7c;
        }
    }
    ctx->pc = 0x3BBC6Cu;
    // 0x3bbc6c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BBC6Cu;
    SET_GPR_U32(ctx, 31, 0x3BBC74u);
    ctx->pc = 0x3BBC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBC6Cu;
    // 0x3bbc70: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BBC6Cu, 0x3BBC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBC74u;
label_3bbc74:
    // 0x3bbc74: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x3BBC74u;
    {
        const bool branch_taken_0x3bbc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC74u;
        // 0x3bbc78: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc74) {
            ctx->pc = 0x3BBE9Cu;
            goto label_3bbe9c;
        }
    }
    ctx->pc = 0x3BBC7Cu;
label_3bbc7c:
    // 0x3bbc7c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3bbc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3bbc80: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bbc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bbc84: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3bbc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3bbc88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbc8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bbc90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bbc94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bbc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bbc98: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x3bbc98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x3bbc9c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x3BBC9Cu;
    {
        const bool branch_taken_0x3bbc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC9Cu;
        // 0x3bbca0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc9c) {
            ctx->pc = 0x3BBE98u;
            goto label_3bbe98;
        }
    }
    ctx->pc = 0x3BBCA4u;
label_3bbca4:
    // 0x3bbca4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bbca8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3bbca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bbcac: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3bbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3bbcb0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3bbcb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3bbcb4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3bbcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3bbcb8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x3bbcb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3bbcbc: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3BBCBCu;
    {
        const bool branch_taken_0x3bbcbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCBCu;
        // 0x3bbcc0: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbcbc) {
            ctx->pc = 0x3BBD3Cu;
            goto label_3bbd3c;
        }
    }
    ctx->pc = 0x3BBCC4u;
    // 0x3bbcc4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3bbcc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbcc8: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bbcc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bbccc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BBCCCu;
    {
        const bool branch_taken_0x3bbccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCCCu;
        // 0x3bbcd0: 0x26a50007  addiu       $a1, $s5, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbccc) {
            ctx->pc = 0x3BBCF4u;
            goto label_3bbcf4;
        }
    }
    ctx->pc = 0x3BBCD4u;
    // 0x3bbcd4: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x3BBCD4u;
    SET_GPR_U32(ctx, 31, 0x3BBCDCu);
    ctx->pc = 0x3BBCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBCD4u;
    // 0x3bbcd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x3BBCD4u, 0x3BBCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBCDCu;
label_3bbcdc:
    // 0x3bbcdc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BBCDCu;
    {
        const bool branch_taken_0x3bbcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCDCu;
        // 0x3bbce0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbcdc) {
            ctx->pc = 0x3BBD44u;
            goto label_3bbd44;
        }
    }
    ctx->pc = 0x3BBCE4u;
    // 0x3bbce4: 0xc0c75ba  jal         func_31D6E8
    ctx->pc = 0x3BBCE4u;
    SET_GPR_U32(ctx, 31, 0x3BBCECu);
    ctx->pc = 0x3BBCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBCE4u;
    // 0x3bbce8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D6E8u, 0x3BBCE4u, 0x3BBCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBCECu;
label_3bbcec:
    // 0x3bbcec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3BBCECu;
    {
        const bool branch_taken_0x3bbcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBCECu;
        // 0x3bbcf0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbcec) {
            ctx->pc = 0x3BBD44u;
            goto label_3bbd44;
        }
    }
    ctx->pc = 0x3BBCF4u;
label_3bbcf4:
    // 0x3bbcf4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3bbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3bbcf8: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x3bbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x3bbcfc: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x3bbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x3bbd00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbd04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bbd08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3bbd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bbd0c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3bbd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bbd10: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BBD10u;
    {
        const bool branch_taken_0x3bbd10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bbd10) {
            ctx->pc = 0x3BBD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBD10u;
            // 0x3bbd14: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBD30u;
            goto label_3bbd30;
        }
    }
    ctx->pc = 0x3BBD18u;
    // 0x3bbd18: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3bbd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3bbd1c: 0x3484fff8  ori         $a0, $a0, 0xFFF8
    ctx->pc = 0x3bbd1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65528);
    // 0x3bbd20: 0xc0c764a  jal         func_31D928
    ctx->pc = 0x3BBD20u;
    SET_GPR_U32(ctx, 31, 0x3BBD28u);
    ctx->pc = 0x3BBD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBD20u;
    // 0x3bbd24: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D928u, 0x3BBD20u, 0x3BBD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBD28u;
label_3bbd28:
    // 0x3bbd28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3BBD28u;
    {
        const bool branch_taken_0x3bbd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD28u;
        // 0x3bbd2c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd28) {
            ctx->pc = 0x3BBD44u;
            goto label_3bbd44;
        }
    }
    ctx->pc = 0x3BBD30u;
label_3bbd30:
    // 0x3bbd30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3bbd30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbd34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBD34u;
    {
        const bool branch_taken_0x3bbd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD34u;
        // 0x3bbd38: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd34) {
            ctx->pc = 0x3BBD44u;
            goto label_3bbd44;
        }
    }
    ctx->pc = 0x3BBD3Cu;
label_3bbd3c:
    // 0x3bbd3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3bbd3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbd40: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3bbd40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bbd44:
    // 0x3bbd44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3bbd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bbd48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3bbd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbd4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3bbd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbd50: 0xc0eee60  jal         func_3BB980
    ctx->pc = 0x3BBD50u;
    SET_GPR_U32(ctx, 31, 0x3BBD58u);
    ctx->pc = 0x3BBD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBD50u;
    // 0x3bbd54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB980u, 0x3BBD50u, 0x3BBD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBD58u;
label_3bbd58:
    // 0x3bbd58: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BBD58u;
    {
        const bool branch_taken_0x3bbd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD58u;
        // 0x3bbd5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd58) {
            ctx->pc = 0x3BBD98u;
            goto label_3bbd98;
        }
    }
    ctx->pc = 0x3BBD60u;
    // 0x3bbd60: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3bbd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3bbd64: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bbd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bbd68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bbd6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBD6Cu;
    {
        const bool branch_taken_0x3bbd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbd6c) {
            ctx->pc = 0x3BBD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBD6Cu;
            // 0x3bbd70: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBD84u;
            goto label_3bbd84;
        }
    }
    ctx->pc = 0x3BBD74u;
    // 0x3bbd74: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BBD74u;
    SET_GPR_U32(ctx, 31, 0x3BBD7Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BBD74u, 0x3BBD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBD7Cu;
label_3bbd7c:
    // 0x3bbd7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBD7Cu;
    {
        const bool branch_taken_0x3bbd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD7Cu;
        // 0x3bbd80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd7c) {
            ctx->pc = 0x3BBD8Cu;
            goto label_3bbd8c;
        }
    }
    ctx->pc = 0x3BBD84u;
label_3bbd84:
    // 0x3bbd84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bbd88: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bbd88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bbd8c:
    // 0x3bbd8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bbd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bbd90: 0x92c20004  lbu         $v0, 0x4($s6)
    ctx->pc = 0x3bbd90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3bbd94: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3bbd94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_3bbd98:
    // 0x3bbd98: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3bbd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bbd9c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x3bbd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3bbda0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3bbda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbda4: 0xc0eee60  jal         func_3BB980
    ctx->pc = 0x3BBDA4u;
    SET_GPR_U32(ctx, 31, 0x3BBDACu);
    ctx->pc = 0x3BBDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBDA4u;
    // 0x3bbda8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB980u, 0x3BBDA4u, 0x3BBDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBDACu;
label_3bbdac:
    // 0x3bbdac: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x3bbdacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bbdb0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3bbdb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbdb4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3bbdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bbdb8: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x3bbdb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3bbdbc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3BBDBCu;
    {
        const bool branch_taken_0x3bbdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDBCu;
        // 0x3bbdc0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbdbc) {
            ctx->pc = 0x3BBE34u;
            goto label_3bbe34;
        }
    }
    ctx->pc = 0x3BBDC4u;
    // 0x3bbdc4: 0x24544030  addiu       $s4, $v0, 0x4030
    ctx->pc = 0x3bbdc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x3bbdc8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bbdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bbdcc: 0x0  nop
    ctx->pc = 0x3bbdccu;
    // NOP
label_3bbdd0:
    // 0x3bbdd0: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x3bbdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x3bbdd4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3bbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3bbdd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbddc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BBDDCu;
    {
        const bool branch_taken_0x3bbddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDDCu;
        // 0x3bbde0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbddc) {
            ctx->pc = 0x3BBE24u;
            goto label_3bbe24;
        }
    }
    ctx->pc = 0x3BBDE4u;
    // 0x3bbde4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3bbde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3bbde8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bbdec: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bbdecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bbdf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBDF0u;
    {
        const bool branch_taken_0x3bbdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDF0u;
        // 0x3bbdf4: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbdf0) {
            ctx->pc = 0x3BBE08u;
            goto label_3bbe08;
        }
    }
    ctx->pc = 0x3BBDF8u;
    // 0x3bbdf8: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BBDF8u;
    SET_GPR_U32(ctx, 31, 0x3BBE00u);
    ctx->pc = 0x3BBDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBDF8u;
    // 0x3bbdfc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BBDF8u, 0x3BBE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBE00u;
label_3bbe00:
    // 0x3bbe00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BBE00u;
    {
        const bool branch_taken_0x3bbe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE00u;
        // 0x3bbe04: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbe00) {
            ctx->pc = 0x3BBE2Cu;
            goto label_3bbe2c;
        }
    }
    ctx->pc = 0x3BBE08u;
label_3bbe08:
    // 0x3bbe08: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bbe0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbe10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bbe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bbe14: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3bbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3bbe18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bbe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bbe1c: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x3bbe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x3bbe20: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3bbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3bbe24:
    // 0x3bbe24: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3bbe24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3bbe28: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x3bbe28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3bbe2c:
    // 0x3bbe2c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3BBE2Cu;
    {
        const bool branch_taken_0x3bbe2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bbe2c) {
            ctx->pc = 0x3BBE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBE2Cu;
            // 0x3bbe30: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbdd0;
        }
    }
    ctx->pc = 0x3BBE34u;
label_3bbe34:
    // 0x3bbe34: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3bbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3bbe38: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3bbe38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bbe3c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3bbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3bbe40: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3bbe40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3bbe44: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BBE44u;
    {
        const bool branch_taken_0x3bbe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE44u;
        // 0x3bbe48: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbe44) {
            ctx->pc = 0x3BBE88u;
            goto label_3bbe88;
        }
    }
    ctx->pc = 0x3BBE4Cu;
    // 0x3bbe4c: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x3bbe4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bbe50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBE50u;
    {
        const bool branch_taken_0x3bbe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE50u;
        // 0x3bbe54: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbe50) {
            ctx->pc = 0x3BBE68u;
            goto label_3bbe68;
        }
    }
    ctx->pc = 0x3BBE58u;
    // 0x3bbe58: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BBE58u;
    SET_GPR_U32(ctx, 31, 0x3BBE60u);
    ctx->pc = 0x3BBE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBE58u;
    // 0x3bbe5c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BBE58u, 0x3BBE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBE60u;
label_3bbe60:
    // 0x3bbe60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BBE60u;
    {
        const bool branch_taken_0x3bbe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE60u;
        // 0x3bbe64: 0x2751021  addu        $v0, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbe60) {
            ctx->pc = 0x3BBE8Cu;
            goto label_3bbe8c;
        }
    }
    ctx->pc = 0x3BBE68u;
label_3bbe68:
    // 0x3bbe68: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3bbe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3bbe6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bbe70: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x3bbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x3bbe74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bbe78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bbe7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3bbe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bbe80: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3bbe80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x3bbe84: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3bbe84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3bbe88:
    // 0x3bbe88: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x3bbe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_3bbe8c:
    // 0x3bbe8c: 0xae360004  sw          $s6, 0x4($s1)
    ctx->pc = 0x3bbe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 22));
    // 0x3bbe90: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3bbe90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3bbe94: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x3bbe94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_3bbe98:
    // 0x3bbe98: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3bbe98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3bbe9c:
    // 0x3bbe9c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3bbe9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bbea0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3bbea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bbea4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3bbea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bbea8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3bbea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bbeac: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3bbeacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bbeb0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3bbeb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bbeb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bbeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bbeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEB8u;
        // 0x3bbebc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBEC0u;
}
