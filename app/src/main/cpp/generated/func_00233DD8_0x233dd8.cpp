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

// Function: func_00233DD8
// Address: 0x233dd8 - 0x234368
void func_00233DD8_0x233dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00233DD8_0x233dd8");
#endif

    switch (ctx->pc) {
        case 0x233e1cu: goto label_233e1c;
        case 0x233e44u: goto label_233e44;
        case 0x233e50u: goto label_233e50;
        case 0x233e90u: goto label_233e90;
        case 0x233edcu: goto label_233edc;
        case 0x233f08u: goto label_233f08;
        case 0x233f3cu: goto label_233f3c;
        case 0x233f50u: goto label_233f50;
        case 0x233f60u: goto label_233f60;
        case 0x233f70u: goto label_233f70;
        case 0x233f90u: goto label_233f90;
        case 0x233fbcu: goto label_233fbc;
        case 0x233ff0u: goto label_233ff0;
        case 0x234004u: goto label_234004;
        case 0x234014u: goto label_234014;
        case 0x234024u: goto label_234024;
        case 0x234044u: goto label_234044;
        case 0x234070u: goto label_234070;
        case 0x2340a4u: goto label_2340a4;
        case 0x2340b8u: goto label_2340b8;
        case 0x2340c8u: goto label_2340c8;
        case 0x2340d8u: goto label_2340d8;
        case 0x2340f4u: goto label_2340f4;
        case 0x234120u: goto label_234120;
        case 0x234154u: goto label_234154;
        case 0x234168u: goto label_234168;
        case 0x234178u: goto label_234178;
        case 0x234188u: goto label_234188;
        case 0x234198u: goto label_234198;
        case 0x23423cu: goto label_23423c;
        case 0x23425cu: goto label_23425c;
        case 0x234264u: goto label_234264;
        case 0x23427cu: goto label_23427c;
        case 0x234288u: goto label_234288;
        case 0x234290u: goto label_234290;
        case 0x2342a8u: goto label_2342a8;
        case 0x2342b4u: goto label_2342b4;
        case 0x2342bcu: goto label_2342bc;
        case 0x2342c8u: goto label_2342c8;
        case 0x2342dcu: goto label_2342dc;
        case 0x234304u: goto label_234304;
        default: break;
    }

    ctx->pc = 0x233dd8u;

    // 0x233dd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x233dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x233ddc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233de0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x233de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x233de4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x233de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x233de8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233dec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x233decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x233df0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x233df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x233df4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x233df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x233df8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x233df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x233dfc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x233dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x233e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233e04: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x233e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x233e08: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x233e08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x233e0c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x233e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x233e10: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x233e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x233e14: 0xc098a84  jal         func_262A10
    ctx->pc = 0x233E14u;
    SET_GPR_U32(ctx, 31, 0x233E1Cu);
    ctx->pc = 0x233E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E14u;
    // 0x233e18: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x233E14u, 0x233E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E1Cu;
label_233e1c:
    // 0x233e1c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x233e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x233e20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x233E20u;
    {
        const bool branch_taken_0x233e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E20u;
        // 0x233e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e20) {
            ctx->pc = 0x233E38u;
            goto label_233e38;
        }
    }
    ctx->pc = 0x233E28u;
    // 0x233e28: 0x50620100  beql        $v1, $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x233E28u;
    {
        const bool branch_taken_0x233e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x233e28) {
            ctx->pc = 0x233E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233E28u;
            // 0x233e2c: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23422Cu;
            goto label_23422c;
        }
    }
    ctx->pc = 0x233E30u;
    // 0x233e30: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x233E30u;
    {
        const bool branch_taken_0x233e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e30) {
            ctx->pc = 0x2342B4u;
            goto label_2342b4;
        }
    }
    ctx->pc = 0x233E38u;
label_233e38:
    // 0x233e38: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x233e38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x233e3c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x233E3Cu;
    SET_GPR_U32(ctx, 31, 0x233E44u);
    ctx->pc = 0x233E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E3Cu;
    // 0x233e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x233E3Cu, 0x233E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E44u;
label_233e44:
    // 0x233e44: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x233e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
    // 0x233e48: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x233E48u;
    SET_GPR_U32(ctx, 31, 0x233E50u);
    ctx->pc = 0x233E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E48u;
    // 0x233e4c: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x233E48u, 0x233E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E50u;
label_233e50:
    // 0x233e50: 0x30500001  andi        $s0, $v0, 0x1
    ctx->pc = 0x233e50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x233e54: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x233e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x233e58: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x233e5c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x233E5Cu;
    {
        const bool branch_taken_0x233e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E5Cu;
        // 0x233e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e5c) {
            ctx->pc = 0x233EA0u;
            goto label_233ea0;
        }
    }
    ctx->pc = 0x233E64u;
    // 0x233e64: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x233e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233e68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x233e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233e6c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x233e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x233e70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233e74: 0x0  nop
    ctx->pc = 0x233e74u;
    // NOP
    // 0x233e78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x233e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233e7c: 0x0  nop
    ctx->pc = 0x233e7cu;
    // NOP
    // 0x233e80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x233E80u;
    {
        const bool branch_taken_0x233e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E80u;
        // 0x233e84: 0x50800a  movz        $s0, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e80) {
            ctx->pc = 0x233E9Cu;
            goto label_233e9c;
        }
    }
    ctx->pc = 0x233E88u;
    // 0x233e88: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x233E88u;
    SET_GPR_U32(ctx, 31, 0x233E90u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x233E88u, 0x233E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E90u;
label_233e90:
    // 0x233e90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x233e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x233e94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x233e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x233e98: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x233e98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_233e9c:
    // 0x233e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233ea0:
    // 0x233ea0: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x233EA0u;
    {
        const bool branch_taken_0x233ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x233EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EA0u;
        // 0x233ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ea0) {
            ctx->pc = 0x233F78u;
            goto label_233f78;
        }
    }
    ctx->pc = 0x233EA8u;
    // 0x233ea8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233EA8u;
    {
        const bool branch_taken_0x233ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EA8u;
        // 0x233eac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ea8) {
            ctx->pc = 0x233EC4u;
            goto label_233ec4;
        }
    }
    ctx->pc = 0x233EB0u;
    // 0x233eb0: 0x1202005e  beq         $s0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x233EB0u;
    {
        const bool branch_taken_0x233eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x233EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB0u;
        // 0x233eb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233eb0) {
            ctx->pc = 0x23402Cu;
            goto label_23402c;
        }
    }
    ctx->pc = 0x233EB8u;
    // 0x233eb8: 0x12020089  beq         $s0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x233EB8u;
    {
        const bool branch_taken_0x233eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x233EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB8u;
        // 0x233ebc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233eb8) {
            ctx->pc = 0x2340E0u;
            goto label_2340e0;
        }
    }
    ctx->pc = 0x233EC0u;
    // 0x233ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233ec4:
    // 0x233ec4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x233ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x233ec8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x233ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x233ecc: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x233eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x233ed0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ed4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233ED4u;
    SET_GPR_U32(ctx, 31, 0x233EDCu);
    ctx->pc = 0x233ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233ED4u;
    // 0x233ed8: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233ED4u, 0x233EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EDCu;
label_233edc:
    // 0x233edc: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x233edcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233ee0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x233ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x233ee4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x233ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x233ee8: 0x24759b70  addiu       $s5, $v1, -0x6490
    ctx->pc = 0x233ee8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x233eec: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x233eecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ef0: 0x8c451170  lw          $a1, 0x1170($v0)
    ctx->pc = 0x233ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4464)));
    // 0x233ef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x233ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ef8: 0x8c431174  lw          $v1, 0x1174($v0)
    ctx->pc = 0x233ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4468)));
    // 0x233efc: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x233efcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x233f00: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233F00u;
    SET_GPR_U32(ctx, 31, 0x233F08u);
    ctx->pc = 0x233F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F00u;
    // 0x233f04: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233F00u, 0x233F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F08u;
label_233f08:
    // 0x233f08: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x233F08u;
    {
        const bool branch_taken_0x233f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x233f08) {
            ctx->pc = 0x233F1Cu;
            goto label_233f1c;
        }
    }
    ctx->pc = 0x233F10u;
    // 0x233f10: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x233f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x233f14: 0x8c621178  lw          $v0, 0x1178($v1)
    ctx->pc = 0x233f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4472)));
    // 0x233f18: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233f1c:
    // 0x233f1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x233f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233f20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x233f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f28: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x233f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f30: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x233f34: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x233F34u;
    SET_GPR_U32(ctx, 31, 0x233F3Cu);
    ctx->pc = 0x233F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F34u;
    // 0x233f38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x233F34u, 0x233F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F3Cu;
label_233f3c:
    // 0x233f3c: 0x8e2206f0  lw          $v0, 0x6F0($s1)
    ctx->pc = 0x233f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
    // 0x233f40: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x233F40u;
    {
        const bool branch_taken_0x233f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F40u;
        // 0x233f44: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f40) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x233F48u;
    // 0x233f48: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233F48u;
    SET_GPR_U32(ctx, 31, 0x233F50u);
    ctx->pc = 0x233F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F48u;
    // 0x233f4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233F48u, 0x233F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F50u;
label_233f50:
    // 0x233f50: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x233F50u;
    {
        const bool branch_taken_0x233f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x233F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F50u;
        // 0x233f54: 0x8e2406f0  lw          $a0, 0x6F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f50) {
            ctx->pc = 0x233F68u;
            goto label_233f68;
        }
    }
    ctx->pc = 0x233F58u;
    // 0x233f58: 0xc07413a  jal         func_1D04E8
    ctx->pc = 0x233F58u;
    SET_GPR_U32(ctx, 31, 0x233F60u);
    ctx->pc = 0x233F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F58u;
    // 0x233f5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E8u, 0x233F58u, 0x233F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F60u;
label_233f60:
    // 0x233f60: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x233F60u;
    {
        const bool branch_taken_0x233f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F60u;
        // 0x233f64: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f60) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x233F68u;
label_233f68:
    // 0x233f68: 0xc07413a  jal         func_1D04E8
    ctx->pc = 0x233F68u;
    SET_GPR_U32(ctx, 31, 0x233F70u);
    ctx->pc = 0x233F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F68u;
    // 0x233f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E8u, 0x233F68u, 0x233F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F70u;
label_233f70:
    // 0x233f70: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x233F70u;
    {
        const bool branch_taken_0x233f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F70u;
        // 0x233f74: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f70) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x233F78u;
label_233f78:
    // 0x233f78: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x233f7c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x233f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x233f80: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x233f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x233f84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f88: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233F88u;
    SET_GPR_U32(ctx, 31, 0x233F90u);
    ctx->pc = 0x233F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F88u;
    // 0x233f8c: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233F88u, 0x233F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F90u;
label_233f90:
    // 0x233f90: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x233f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233f94: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x233f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x233f98: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x233f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x233f9c: 0x24759b70  addiu       $s5, $v1, -0x6490
    ctx->pc = 0x233f9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x233fa0: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x233fa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fa4: 0x8c451188  lw          $a1, 0x1188($v0)
    ctx->pc = 0x233fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4488)));
    // 0x233fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x233fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fac: 0x8c43118c  lw          $v1, 0x118C($v0)
    ctx->pc = 0x233facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4492)));
    // 0x233fb0: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x233fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x233fb4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233FB4u;
    SET_GPR_U32(ctx, 31, 0x233FBCu);
    ctx->pc = 0x233FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FB4u;
    // 0x233fb8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233FB4u, 0x233FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FBCu;
label_233fbc:
    // 0x233fbc: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x233FBCu;
    {
        const bool branch_taken_0x233fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x233fbc) {
            ctx->pc = 0x233FD0u;
            goto label_233fd0;
        }
    }
    ctx->pc = 0x233FC4u;
    // 0x233fc4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x233fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x233fc8: 0x8c621190  lw          $v0, 0x1190($v1)
    ctx->pc = 0x233fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4496)));
    // 0x233fcc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x233fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233fd0:
    // 0x233fd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x233fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233fd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x233fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fdc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x233fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fe4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x233fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x233fe8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x233FE8u;
    SET_GPR_U32(ctx, 31, 0x233FF0u);
    ctx->pc = 0x233FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FE8u;
    // 0x233fec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x233FE8u, 0x233FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FF0u;
label_233ff0:
    // 0x233ff0: 0x8e2206f0  lw          $v0, 0x6F0($s1)
    ctx->pc = 0x233ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
    // 0x233ff4: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x233FF4u;
    {
        const bool branch_taken_0x233ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FF4u;
        // 0x233ff8: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ff4) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x233FFCu;
    // 0x233ffc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233FFCu;
    SET_GPR_U32(ctx, 31, 0x234004u);
    ctx->pc = 0x234000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FFCu;
    // 0x234000: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233FFCu, 0x234004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234004u;
label_234004:
    // 0x234004: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x234004u;
    {
        const bool branch_taken_0x234004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x234008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234004u;
        // 0x234008: 0x8e2406f0  lw          $a0, 0x6F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234004) {
            ctx->pc = 0x23401Cu;
            goto label_23401c;
        }
    }
    ctx->pc = 0x23400Cu;
    // 0x23400c: 0xc07414a  jal         func_1D0528
    ctx->pc = 0x23400Cu;
    SET_GPR_U32(ctx, 31, 0x234014u);
    ctx->pc = 0x234010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23400Cu;
    // 0x234010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0528u, 0x23400Cu, 0x234014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234014u;
label_234014:
    // 0x234014: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x234014u;
    {
        const bool branch_taken_0x234014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234014u;
        // 0x234018: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234014) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x23401Cu;
label_23401c:
    // 0x23401c: 0xc07414a  jal         func_1D0528
    ctx->pc = 0x23401Cu;
    SET_GPR_U32(ctx, 31, 0x234024u);
    ctx->pc = 0x234020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23401Cu;
    // 0x234020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0528u, 0x23401Cu, 0x234024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234024u;
label_234024:
    // 0x234024: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x234024u;
    {
        const bool branch_taken_0x234024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234024u;
        // 0x234028: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234024) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x23402Cu;
label_23402c:
    // 0x23402c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x23402cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x234030: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x234030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x234034: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x234034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x234038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x234038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23403c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23403Cu;
    SET_GPR_U32(ctx, 31, 0x234044u);
    ctx->pc = 0x234040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23403Cu;
    // 0x234040: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23403Cu, 0x234044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234044u;
label_234044:
    // 0x234044: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x234044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234048: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x234048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23404c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x23404cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x234050: 0x24759b70  addiu       $s5, $v1, -0x6490
    ctx->pc = 0x234050u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x234054: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x234054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234058: 0x8c4511a8  lw          $a1, 0x11A8($v0)
    ctx->pc = 0x234058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4520)));
    // 0x23405c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234060: 0x8c4311ac  lw          $v1, 0x11AC($v0)
    ctx->pc = 0x234060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4524)));
    // 0x234064: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x234064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x234068: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234068u;
    SET_GPR_U32(ctx, 31, 0x234070u);
    ctx->pc = 0x23406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234068u;
    // 0x23406c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234068u, 0x234070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234070u;
label_234070:
    // 0x234070: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x234070u;
    {
        const bool branch_taken_0x234070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x234070) {
            ctx->pc = 0x234084u;
            goto label_234084;
        }
    }
    ctx->pc = 0x234078u;
    // 0x234078: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x234078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23407c: 0x8c6211b0  lw          $v0, 0x11B0($v1)
    ctx->pc = 0x23407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4528)));
    // 0x234080: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x234080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234084:
    // 0x234084: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x234084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234088: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23408c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23408cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234090: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x234090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234098: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x234098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23409c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23409Cu;
    SET_GPR_U32(ctx, 31, 0x2340A4u);
    ctx->pc = 0x2340A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23409Cu;
    // 0x2340a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23409Cu, 0x2340A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340A4u;
label_2340a4:
    // 0x2340a4: 0x8e2206f0  lw          $v0, 0x6F0($s1)
    ctx->pc = 0x2340a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
    // 0x2340a8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2340A8u;
    {
        const bool branch_taken_0x2340a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340A8u;
        // 0x2340ac: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340a8) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x2340B0u;
    // 0x2340b0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2340B0u;
    SET_GPR_U32(ctx, 31, 0x2340B8u);
    ctx->pc = 0x2340B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2340B0u;
    // 0x2340b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2340B0u, 0x2340B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340B8u;
label_2340b8:
    // 0x2340b8: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2340B8u;
    {
        const bool branch_taken_0x2340b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2340BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340B8u;
        // 0x2340bc: 0x8e2406f0  lw          $a0, 0x6F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340b8) {
            ctx->pc = 0x2340D0u;
            goto label_2340d0;
        }
    }
    ctx->pc = 0x2340C0u;
    // 0x2340c0: 0xc074168  jal         func_1D05A0
    ctx->pc = 0x2340C0u;
    SET_GPR_U32(ctx, 31, 0x2340C8u);
    ctx->pc = 0x2340C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2340C0u;
    // 0x2340c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05A0u, 0x2340C0u, 0x2340C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340C8u;
label_2340c8:
    // 0x2340c8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2340C8u;
    {
        const bool branch_taken_0x2340c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340C8u;
        // 0x2340cc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340c8) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x2340D0u;
label_2340d0:
    // 0x2340d0: 0xc074168  jal         func_1D05A0
    ctx->pc = 0x2340D0u;
    SET_GPR_U32(ctx, 31, 0x2340D8u);
    ctx->pc = 0x2340D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2340D0u;
    // 0x2340d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05A0u, 0x2340D0u, 0x2340D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340D8u;
label_2340d8:
    // 0x2340d8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2340D8u;
    {
        const bool branch_taken_0x2340d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340D8u;
        // 0x2340dc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340d8) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x2340E0u;
label_2340e0:
    // 0x2340e0: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2340e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2340e4: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x2340e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2340e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2340e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2340ec: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2340ECu;
    SET_GPR_U32(ctx, 31, 0x2340F4u);
    ctx->pc = 0x2340F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2340ECu;
    // 0x2340f0: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2340ECu, 0x2340F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340F4u;
label_2340f4:
    // 0x2340f4: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x2340f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2340f8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2340f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2340fc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2340fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x234100: 0x24759b70  addiu       $s5, $v1, -0x6490
    ctx->pc = 0x234100u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x234104: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x234104u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234108: 0x8c451194  lw          $a1, 0x1194($v0)
    ctx->pc = 0x234108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4500)));
    // 0x23410c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234110: 0x8c431198  lw          $v1, 0x1198($v0)
    ctx->pc = 0x234110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4504)));
    // 0x234114: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x234114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x234118: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234118u;
    SET_GPR_U32(ctx, 31, 0x234120u);
    ctx->pc = 0x23411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234118u;
    // 0x23411c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234118u, 0x234120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234120u;
label_234120:
    // 0x234120: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x234120u;
    {
        const bool branch_taken_0x234120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x234120) {
            ctx->pc = 0x234134u;
            goto label_234134;
        }
    }
    ctx->pc = 0x234128u;
    // 0x234128: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x234128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23412c: 0x8c62119c  lw          $v0, 0x119C($v1)
    ctx->pc = 0x23412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4508)));
    // 0x234130: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x234130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234134:
    // 0x234134: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x234134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23413c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23413cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234140: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x234140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234148: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x234148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23414c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23414Cu;
    SET_GPR_U32(ctx, 31, 0x234154u);
    ctx->pc = 0x234150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23414Cu;
    // 0x234150: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23414Cu, 0x234154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234154u;
label_234154:
    // 0x234154: 0x8e2206f0  lw          $v0, 0x6F0($s1)
    ctx->pc = 0x234154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
    // 0x234158: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x234158u;
    {
        const bool branch_taken_0x234158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234158u;
        // 0x23415c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234158) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x234160u;
    // 0x234160: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234160u;
    SET_GPR_U32(ctx, 31, 0x234168u);
    ctx->pc = 0x234164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234160u;
    // 0x234164: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234160u, 0x234168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234168u;
label_234168:
    // 0x234168: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x234168u;
    {
        const bool branch_taken_0x234168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x23416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234168u;
        // 0x23416c: 0x8e2406f0  lw          $a0, 0x6F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234168) {
            ctx->pc = 0x234180u;
            goto label_234180;
        }
    }
    ctx->pc = 0x234170u;
    // 0x234170: 0xc074150  jal         func_1D0540
    ctx->pc = 0x234170u;
    SET_GPR_U32(ctx, 31, 0x234178u);
    ctx->pc = 0x234174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234170u;
    // 0x234174: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0540u, 0x234170u, 0x234178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234178u;
label_234178:
    // 0x234178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x234178u;
    {
        const bool branch_taken_0x234178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234178u;
        // 0x23417c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234178) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x234180u;
label_234180:
    // 0x234180: 0xc074150  jal         func_1D0540
    ctx->pc = 0x234180u;
    SET_GPR_U32(ctx, 31, 0x234188u);
    ctx->pc = 0x234184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234180u;
    // 0x234184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0540u, 0x234180u, 0x234188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234188u;
label_234188:
    // 0x234188: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x234188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_23418c:
    // 0x23418c: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x23418cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x234190: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234190u;
    SET_GPR_U32(ctx, 31, 0x234198u);
    ctx->pc = 0x234194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234190u;
    // 0x234194: 0x26c49b70  addiu       $a0, $s6, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234190u, 0x234198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234198u;
label_234198:
    // 0x234198: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x234198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23419c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x23419cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2341a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2341A0u;
    {
        const bool branch_taken_0x2341a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341A0u;
        // 0x2341a4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341a0) {
            ctx->pc = 0x2341C0u;
            goto label_2341c0;
        }
    }
    ctx->pc = 0x2341A8u;
    // 0x2341a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2341a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2341ac: 0x24429d50  addiu       $v0, $v0, -0x62B0
    ctx->pc = 0x2341acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942032));
    // 0x2341b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2341b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2341b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2341b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2341b8: 0x800008  jr          $a0
    ctx->pc = 0x2341B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2341C0u: goto label_2341c0;
            case 0x2341D8u: goto label_2341d8;
            case 0x2341F4u: goto label_2341f4;
            case 0x234218u: goto label_234218;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2341B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2341C0u;
label_2341c0:
    // 0x2341c0: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2341c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2341c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2341c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2341c8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2341c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2341cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2341ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2341d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2341D0u;
    {
        const bool branch_taken_0x2341d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341D0u;
        // 0x2341d4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341d0) {
            ctx->pc = 0x234210u;
            goto label_234210;
        }
    }
    ctx->pc = 0x2341D8u;
label_2341d8:
    // 0x2341d8: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2341d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2341dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2341dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2341e0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2341e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2341e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2341e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2341e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2341e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2341ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2341ECu;
    {
        const bool branch_taken_0x2341ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341ECu;
        // 0x2341f0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341ec) {
            ctx->pc = 0x234210u;
            goto label_234210;
        }
    }
    ctx->pc = 0x2341F4u;
label_2341f4:
    // 0x2341f4: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2341f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2341f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2341f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2341fc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2341fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x234200: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x234200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x234204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x234204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234208: 0x0  nop
    ctx->pc = 0x234208u;
    // NOP
    // 0x23420c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23420cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_234210:
    // 0x234210: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x234210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x234214: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x234214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_234218:
    // 0x234218: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x234218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x23421c: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x23421cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x234220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234224: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x234224u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x234228: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x234228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_23422c:
    // 0x23422c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23422Cu;
    {
        const bool branch_taken_0x23422c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23422Cu;
        // 0x234230: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23422c) {
            ctx->pc = 0x23425Cu;
            goto label_23425c;
        }
    }
    ctx->pc = 0x234234u;
    // 0x234234: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x234234u;
    SET_GPR_U32(ctx, 31, 0x23423Cu);
    ctx->pc = 0x234238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234234u;
    // 0x234238: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x234234u, 0x23423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23423Cu;
label_23423c:
    // 0x23423c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x23423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234244: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x234244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x234248: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x234248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23424c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23424cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234250: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x234250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x234254: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x234254u;
    SET_GPR_U32(ctx, 31, 0x23425Cu);
    ctx->pc = 0x234258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234254u;
    // 0x234258: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x234254u, 0x23425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23425Cu;
label_23425c:
    // 0x23425c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23425Cu;
    SET_GPR_U32(ctx, 31, 0x234264u);
    ctx->pc = 0x234260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23425Cu;
    // 0x234260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23425Cu, 0x234264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234264u;
label_234264:
    // 0x234264: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x234264u;
    {
        const bool branch_taken_0x234264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234264u;
        // 0x234268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234264) {
            ctx->pc = 0x234298u;
            goto label_234298;
        }
    }
    ctx->pc = 0x23426Cu;
    // 0x23426c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23426cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234270: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x234270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x234274: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x234274u;
    SET_GPR_U32(ctx, 31, 0x23427Cu);
    ctx->pc = 0x234278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234274u;
    // 0x234278: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x234274u, 0x23427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23427Cu;
label_23427c:
    // 0x23427c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23427cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234280: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x234280u;
    SET_GPR_U32(ctx, 31, 0x234288u);
    ctx->pc = 0x234284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234280u;
    // 0x234284: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x234280u, 0x234288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234288u;
label_234288:
    // 0x234288: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x234288u;
    SET_GPR_U32(ctx, 31, 0x234290u);
    ctx->pc = 0x23428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234288u;
    // 0x23428c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x234288u, 0x234290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234290u;
label_234290:
    // 0x234290: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x234290u;
    {
        const bool branch_taken_0x234290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234290u;
        // 0x234294: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234290) {
            ctx->pc = 0x234340u;
            goto label_234340;
        }
    }
    ctx->pc = 0x234298u;
label_234298:
    // 0x234298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23429c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23429cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2342a0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2342A0u;
    SET_GPR_U32(ctx, 31, 0x2342A8u);
    ctx->pc = 0x2342A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342A0u;
    // 0x2342a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2342A0u, 0x2342A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342A8u;
label_2342a8:
    // 0x2342a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2342a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2342ac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2342ACu;
    SET_GPR_U32(ctx, 31, 0x2342B4u);
    ctx->pc = 0x2342B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342ACu;
    // 0x2342b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2342ACu, 0x2342B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342B4u;
label_2342b4:
    // 0x2342b4: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x2342B4u;
    SET_GPR_U32(ctx, 31, 0x2342BCu);
    ctx->pc = 0x2342B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342B4u;
    // 0x2342b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x2342B4u, 0x2342BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342BCu;
label_2342bc:
    // 0x2342bc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2342bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2342c0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2342C0u;
    SET_GPR_U32(ctx, 31, 0x2342C8u);
    ctx->pc = 0x2342C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342C0u;
    // 0x2342c4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2342C0u, 0x2342C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342C8u;
label_2342c8:
    // 0x2342c8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2342c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2342cc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2342CCu;
    {
        const bool branch_taken_0x2342cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2342cc) {
            ctx->pc = 0x2342D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2342CCu;
            // 0x2342d0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234310u;
            goto label_234310;
        }
    }
    ctx->pc = 0x2342D4u;
    // 0x2342d4: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x2342D4u;
    SET_GPR_U32(ctx, 31, 0x2342DCu);
    ctx->pc = 0x2342D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342D4u;
    // 0x2342d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x2342D4u, 0x2342DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342DCu;
label_2342dc:
    // 0x2342dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2342DCu;
    {
        const bool branch_taken_0x2342dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2342E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342DCu;
        // 0x2342e0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342dc) {
            ctx->pc = 0x234310u;
            goto label_234310;
        }
    }
    ctx->pc = 0x2342E4u;
    // 0x2342e4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2342e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2342e8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2342E8u;
    {
        const bool branch_taken_0x2342e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2342e8) {
            ctx->pc = 0x2342ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2342E8u;
            // 0x2342ec: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234310u;
            goto label_234310;
        }
    }
    ctx->pc = 0x2342F0u;
    // 0x2342f0: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x2342f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x2342f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2342F4u;
    {
        const bool branch_taken_0x2342f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2342f4) {
            ctx->pc = 0x2342F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2342F4u;
            // 0x2342f8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234310u;
            goto label_234310;
        }
    }
    ctx->pc = 0x2342FCu;
    // 0x2342fc: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2342FCu;
    SET_GPR_U32(ctx, 31, 0x234304u);
    ctx->pc = 0x234300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342FCu;
    // 0x234300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2342FCu, 0x234304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234304u;
label_234304:
    // 0x234304: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x234304u;
    {
        const bool branch_taken_0x234304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234304u;
        // 0x234308: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234304) {
            ctx->pc = 0x234340u;
            goto label_234340;
        }
    }
    ctx->pc = 0x23430Cu;
    // 0x23430c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x23430cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_234310:
    // 0x234310: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x234310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x234314: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x234314u;
    {
        const bool branch_taken_0x234314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234314u;
        // 0x234318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234314) {
            ctx->pc = 0x234320u;
            goto label_234320;
        }
    }
    ctx->pc = 0x23431Cu;
    // 0x23431c: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x23431cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_234320:
    // 0x234320: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x234320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x234324: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x234324u;
    {
        const bool branch_taken_0x234324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234324u;
        // 0x234328: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234324) {
            ctx->pc = 0x234340u;
            goto label_234340;
        }
    }
    ctx->pc = 0x23432Cu;
    // 0x23432c: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x23432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x234330: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x234330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x234334: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x234334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x234338: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x234338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23433c: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x23433cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_234340:
    // 0x234340: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x234340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x234344: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x234344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234348: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x234348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23434c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x23434cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234350: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x234350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234354: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x234354u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23435c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x23435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x234360: 0x3e00008  jr          $ra
    ctx->pc = 0x234360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234360u;
        // 0x234364: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234368u;
}
