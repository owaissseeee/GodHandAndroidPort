#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: R200Move__Fv
// Address: 0x7993b8 - 0x799590
void R200Move__Fv_0x7993b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R200Move__Fv_0x7993b8");
#endif

    switch (ctx->pc) {
        case 0x799400u: goto label_799400;
        case 0x799410u: goto label_799410;
        default: break;
    }

    ctx->pc = 0x7993b8u;

    // 0x7993b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7993bc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7993c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7993c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7993c4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x7993c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x7993c8: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x7993cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x7993ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x7993d0: 0x24527a8c  addiu       $s2, $v0, 0x7A8C
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 31372));
    // 0x7993d4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x7993d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x7993d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993dc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x7993dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x7993e0: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7993e4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x7993e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x7993e8: 0x2415fffe  addiu       $s5, $zero, -0x2
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7993ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x7993ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x7993f0: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x7993f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7993f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7993f8: 0x8ec2aac0  lw          $v0, -0x5540($s6)
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AAC0u));
    // 0x7993fc: 0x0  nop
    ctx->pc = 0x7993fcu;
    // NOP
label_799400:
    // 0x799400: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x799404: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799408: 0xc1e6a3e  jal         func_79A8F8
    ctx->pc = 0x799408u;
    SET_GPR_U32(ctx, 31, 0x799410u);
    ctx->pc = 0x79940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799408u;
    // 0x79940c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A8F8u, 0x799408u, 0x799410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799410u;
label_799410:
    // 0x799410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799414: 0x54430050  bnel        $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x799414u;
    {
        const bool branch_taken_0x799414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x799414) {
            ctx->pc = 0x799418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799414u;
            // 0x799418: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799558u;
            goto label_799558;
        }
    }
    ctx->pc = 0x79941Cu;
    // 0x79941c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799420: 0x9c6205b8  lwu         $v0, 0x5B8($v1)
    ctx->pc = 0x799420u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1464)));
    // 0x799424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799428: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x799428u;
    {
        const bool branch_taken_0x799428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799428u;
        // 0x79942c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799428) {
            ctx->pc = 0x7994B0u;
            goto label_7994b0;
        }
    }
    ctx->pc = 0x799430u;
    // 0x799430: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799434: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x799438: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799438u;
    {
        const bool branch_taken_0x799438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x41142  srl         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799438) {
            ctx->pc = 0x799460u;
            goto label_799460;
        }
    }
    ctx->pc = 0x799440u;
    // 0x799440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x799444: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x799448: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x79944c: 0x912006  srlv        $a0, $s1, $a0
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 4) & 0x1F));
    // 0x799450: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799454: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799458u;
    {
        const bool branch_taken_0x799458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799458u;
        // 0x79945c: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799458) {
            ctx->pc = 0x799464u;
            goto label_799464;
        }
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x799460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799464:
    // 0x799464: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x799464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x799468: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x799468u;
    {
        const bool branch_taken_0x799468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799468) {
            ctx->pc = 0x79946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799468u;
            // 0x79946c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799558u;
            goto label_799558;
        }
    }
    ctx->pc = 0x799470u;
    // 0x799470: 0x8ca205b8  lw          $v0, 0x5B8($a1)
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1464)));
    // 0x799474: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799478: 0xaca205b8  sw          $v0, 0x5B8($a1)
    ctx->pc = 0x799478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1464), GPR_U32(ctx, 2));
    // 0x79947c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799480: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x799484: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x799484u;
    {
        const bool branch_taken_0x799484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799484u;
        // 0x799488: 0x32142  srl         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799484) {
            ctx->pc = 0x799554u;
            goto label_799554;
        }
    }
    ctx->pc = 0x79948Cu;
    // 0x79948c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x799490: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x799490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x799494: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x799498: 0x711806  srlv        $v1, $s1, $v1
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 3) & 0x1F));
    // 0x79949c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7994a0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x7994a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x7994a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7994a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7994a8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7994A8u;
    {
        const bool branch_taken_0x7994a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a8) {
            ctx->pc = 0x799554u;
            goto label_799554;
        }
    }
    ctx->pc = 0x7994B0u;
label_7994b0:
    // 0x7994b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7994b4: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x7994b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7994B8u;
    {
        const bool branch_taken_0x7994b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B8u;
        // 0x7994bc: 0x41142  srl         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994b8) {
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994C0u;
    // 0x7994c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7994c4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x7994c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x7994c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x7994cc: 0x912006  srlv        $a0, $s1, $a0
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 4) & 0x1F));
    // 0x7994d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7994d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7994d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7994D8u;
    {
        const bool branch_taken_0x7994d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D8u;
        // 0x7994dc: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994d8) {
            ctx->pc = 0x7994E4u;
            goto label_7994e4;
        }
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994e4:
    // 0x7994e4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x7994e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x7994e8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x7994E8u;
    {
        const bool branch_taken_0x7994e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7994e8) {
            ctx->pc = 0x7994ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994E8u;
            // 0x7994ec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799558u;
            goto label_799558;
        }
    }
    ctx->pc = 0x7994F0u;
    // 0x7994f0: 0x90a202f5  lbu         $v0, 0x2F5($a1)
    ctx->pc = 0x7994f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 757)));
    // 0x7994f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x7994f8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7994F8u;
    {
        const bool branch_taken_0x7994f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7994f8) {
            ctx->pc = 0x7994FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994F8u;
            // 0x7994fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799558u;
            goto label_799558;
        }
    }
    ctx->pc = 0x799500u;
    // 0x799500: 0x8ca205b8  lw          $v0, 0x5B8($a1)
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1464)));
    // 0x799504: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x799508: 0xaca205b8  sw          $v0, 0x5B8($a1)
    ctx->pc = 0x799508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1464), GPR_U32(ctx, 2));
    // 0x79950c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x799510: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x799510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x799514: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799514u;
    {
        const bool branch_taken_0x799514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799514u;
        // 0x799518: 0x32142  srl         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799514) {
            ctx->pc = 0x79953Cu;
            goto label_79953c;
        }
    }
    ctx->pc = 0x79951Cu;
    // 0x79951c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x799520: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x799520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x799524: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x799528: 0x711806  srlv        $v1, $s1, $v1
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 3) & 0x1F));
    // 0x79952c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799530: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x799534: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799538: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x799538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_79953c:
    // 0x79953c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799540: 0xa04002f7  sb          $zero, 0x2F7($v0)
    ctx->pc = 0x799540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x799544: 0xa05402f4  sb          $s4, 0x2F4($v0)
    ctx->pc = 0x799544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x799548: 0xa04002f5  sb          $zero, 0x2F5($v0)
    ctx->pc = 0x799548u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x79954c: 0xa04002f6  sb          $zero, 0x2F6($v0)
    ctx->pc = 0x79954cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x799550: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x799550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_799554:
    // 0x799554: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_799558:
    // 0x799558: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79955c: 0x5440ffa8  bnel        $v0, $zero, . + 4 + (-0x58 << 2)
    ctx->pc = 0x79955Cu;
    {
        const bool branch_taken_0x79955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79955c) {
            ctx->pc = 0x799560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79955Cu;
            // 0x799560: 0x8ec2aac0  lw          $v0, -0x5540($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799400;
        }
    }
    ctx->pc = 0x799564u;
    // 0x799564: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799568: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79956c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79956cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799570: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799574: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x799574u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799578: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x799578u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79957c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x79957cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799584: 0x3e00008  jr          $ra
    ctx->pc = 0x799584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799584u;
        // 0x799588: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79958Cu;
    // 0x79958c: 0x0  nop
    ctx->pc = 0x79958cu;
    // NOP
    ctx->pc = 0x799590u;
}
} // namespace gh_r200
