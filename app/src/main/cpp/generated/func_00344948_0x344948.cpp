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

// Function: func_00344948
// Address: 0x344948 - 0x344b28
void func_00344948_0x344948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344948_0x344948");
#endif

    switch (ctx->pc) {
        case 0x344990u: goto label_344990;
        case 0x3449bcu: goto label_3449bc;
        case 0x3449ecu: goto label_3449ec;
        case 0x344a00u: goto label_344a00;
        case 0x344a10u: goto label_344a10;
        case 0x344a24u: goto label_344a24;
        case 0x344a98u: goto label_344a98;
        case 0x344aa8u: goto label_344aa8;
        case 0x344abcu: goto label_344abc;
        default: break;
    }

    ctx->pc = 0x344948u;

    // 0x344948: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x344948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x34494c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x34494cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x344950: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x344950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344954: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x344954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x344958: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x344958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34495c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x34495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x344960: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x344960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x344964: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x344964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344968: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x344968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x34496c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x34496cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x344970: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x344970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x344974: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x344974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x344978: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x344978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x34497c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x34497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x344980: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x344980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x344984: 0x8e90003c  lw          $s0, 0x3C($s4)
    ctx->pc = 0x344984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x344988: 0xc0d12fc  jal         func_344BF0
    ctx->pc = 0x344988u;
    SET_GPR_U32(ctx, 31, 0x344990u);
    ctx->pc = 0x34498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344988u;
    // 0x34498c: 0x8e570020  lw          $s7, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344BF0u, 0x344988u, 0x344990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344990u;
label_344990:
    // 0x344990: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x344990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x344994: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x344994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x344998: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x344998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x34499c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x34499cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3449a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3449a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3449a4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3449a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x3449a8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3449a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3449ac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3449acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3449b0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3449b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3449b4: 0xc0d130c  jal         func_344C30
    ctx->pc = 0x3449B4u;
    SET_GPR_U32(ctx, 31, 0x3449BCu);
    ctx->pc = 0x3449B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3449B4u;
    // 0x3449b8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344C30u, 0x3449B4u, 0x3449BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449BCu;
label_3449bc:
    // 0x3449bc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3449bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x3449c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3449c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3449c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3449c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3449c8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3449c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3449cc: 0x8e530018  lw          $s3, 0x18($s2)
    ctx->pc = 0x3449ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3449d0: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x3449d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x3449d4: 0x8e560030  lw          $s6, 0x30($s2)
    ctx->pc = 0x3449d4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3449d8: 0x8e5e002c  lw          $fp, 0x2C($s2)
    ctx->pc = 0x3449d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x3449dc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x3449dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x3449e0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3449e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3449e4: 0xc0d6d7e  jal         func_35B5F8
    ctx->pc = 0x3449E4u;
    SET_GPR_U32(ctx, 31, 0x3449ECu);
    ctx->pc = 0x3449E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3449E4u;
    // 0x3449e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B5F8u, 0x3449E4u, 0x3449ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449ECu;
label_3449ec:
    // 0x3449ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3449ECu;
    {
        const bool branch_taken_0x3449ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449ECu;
        // 0x3449f0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449ec) {
            ctx->pc = 0x344A04u;
            goto label_344a04;
        }
    }
    ctx->pc = 0x3449F4u;
    // 0x3449f4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3449f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3449f8: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3449F8u;
    SET_GPR_U32(ctx, 31, 0x344A00u);
    ctx->pc = 0x3449FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3449F8u;
    // 0x3449fc: 0x24847870  addiu       $a0, $a0, 0x7870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3449F8u, 0x344A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A00u;
label_344a00:
    // 0x344a00: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x344a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_344a04:
    // 0x344a04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x344a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a08: 0xc0d12f0  jal         func_344BC0
    ctx->pc = 0x344A08u;
    SET_GPR_U32(ctx, 31, 0x344A10u);
    ctx->pc = 0x344A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A08u;
    // 0x344a0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344BC0u, 0x344A08u, 0x344A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A10u;
label_344a10:
    // 0x344a10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x344a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a14: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x344a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344a18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x344a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a1c: 0xc0d12f0  jal         func_344BC0
    ctx->pc = 0x344A1Cu;
    SET_GPR_U32(ctx, 31, 0x344A24u);
    ctx->pc = 0x344A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A1Cu;
    // 0x344a20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344BC0u, 0x344A1Cu, 0x344A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A24u;
label_344a24:
    // 0x344a24: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x344a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x344a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x344a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x344a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x344a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344a34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x344a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a38: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x344a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x344a3c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x344a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x344a40: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x344a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x344a44: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x344a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344a48: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x344a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x344a4c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x344a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x344a50: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x344a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x344a54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x344a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344a58: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x344a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x344a5c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x344a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x344a60: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x344a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x344a64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x344a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344a68: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x344a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x344a6c: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x344a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
    // 0x344a70: 0xae350028  sw          $s5, 0x28($s1)
    ctx->pc = 0x344a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
    // 0x344a74: 0xae33002c  sw          $s3, 0x2C($s1)
    ctx->pc = 0x344a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
    // 0x344a78: 0xae3e0030  sw          $fp, 0x30($s1)
    ctx->pc = 0x344a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
    // 0x344a7c: 0xae360038  sw          $s6, 0x38($s1)
    ctx->pc = 0x344a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 22));
    // 0x344a80: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x344a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x344a84: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x344a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x344a88: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x344a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x344a8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x344a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344a90: 0xc0d12ca  jal         func_344B28
    ctx->pc = 0x344A90u;
    SET_GPR_U32(ctx, 31, 0x344A98u);
    ctx->pc = 0x344A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A90u;
    // 0x344a94: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344B28u, 0x344A90u, 0x344A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A98u;
label_344a98:
    // 0x344a98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x344a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x344a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344aa0: 0xc0d1366  jal         func_344D98
    ctx->pc = 0x344AA0u;
    SET_GPR_U32(ctx, 31, 0x344AA8u);
    ctx->pc = 0x344AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344AA0u;
    // 0x344aa4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344D98u, 0x344AA0u, 0x344AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AA8u;
label_344aa8:
    // 0x344aa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x344aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344aac: 0x8e260088  lw          $a2, 0x88($s1)
    ctx->pc = 0x344aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x344ab0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x344ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ab4: 0xc0d1326  jal         func_344C98
    ctx->pc = 0x344AB4u;
    SET_GPR_U32(ctx, 31, 0x344ABCu);
    ctx->pc = 0x344AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344AB4u;
    // 0x344ab8: 0x8e27008c  lw          $a3, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344C98u, 0x344AB4u, 0x344ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344ABCu;
label_344abc:
    // 0x344abc: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x344abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x344ac0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x344ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344ac4: 0xde420048  ld          $v0, 0x48($s2)
    ctx->pc = 0x344ac4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x344ac8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x344ac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x344acc: 0xfe220050  sd          $v0, 0x50($s1)
    ctx->pc = 0x344accu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
    // 0x344ad0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x344ad0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x344ad4: 0xde430050  ld          $v1, 0x50($s2)
    ctx->pc = 0x344ad4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x344ad8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x344ad8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x344adc: 0xfe230058  sd          $v1, 0x58($s1)
    ctx->pc = 0x344adcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 3));
    // 0x344ae0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x344ae0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x344ae4: 0xde420058  ld          $v0, 0x58($s2)
    ctx->pc = 0x344ae4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x344ae8: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x344ae8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x344aec: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x344aecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
    // 0x344af0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x344af0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x344af4: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x344af4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x344af8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x344af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x344afc: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x344afcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
    // 0x344b00: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x344b00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x344b04: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x344b04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x344b08: 0xde430070  ld          $v1, 0x70($s2)
    ctx->pc = 0x344b08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x344b0c: 0xfe230078  sd          $v1, 0x78($s1)
    ctx->pc = 0x344b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 3));
    // 0x344b10: 0xde420078  ld          $v0, 0x78($s2)
    ctx->pc = 0x344b10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x344b14: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x344b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x344b18: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x344b18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x344b1c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x344b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b20: 0x3e00008  jr          $ra
    ctx->pc = 0x344B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B20u;
        // 0x344b24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344B28u;
}
