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

// Function: func_003AECB8
// Address: 0x3aecb8 - 0x3aeec0
void func_003AECB8_0x3aecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AECB8_0x3aecb8");
#endif

    switch (ctx->pc) {
        case 0x3aed20u: goto label_3aed20;
        case 0x3aed48u: goto label_3aed48;
        case 0x3aed88u: goto label_3aed88;
        case 0x3aeda8u: goto label_3aeda8;
        case 0x3aee18u: goto label_3aee18;
        case 0x3aee78u: goto label_3aee78;
        default: break;
    }

    ctx->pc = 0x3aecb8u;

    // 0x3aecb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3aecb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3aecbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3aecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3aecc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3aecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3aecc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3aecc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aecc8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3aecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3aeccc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3aecccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aecd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3aecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3aecd4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3aecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3aecd8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3aecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3aecdc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3aecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3aece0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aece4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3aece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3aece8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3aece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3aecec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3aececu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3aecf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AECF0u;
    {
        const bool branch_taken_0x3aecf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECF0u;
        // 0x3aecf4: 0x200c02d  daddu       $t8, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aecf0) {
            ctx->pc = 0x3AED00u;
            goto label_3aed00;
        }
    }
    ctx->pc = 0x3AECF8u;
    // 0x3aecf8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3aecf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aecfc: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x3aecfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_3aed00:
    // 0x3aed00: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x3aed00u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3aed04: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x3aed04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3aed08: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3aed08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3aed0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3aed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3aed10: 0x2b39021  addu        $s2, $s5, $s3
    ctx->pc = 0x3aed10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x3aed14: 0xb2282a  slt         $a1, $a1, $s2
    ctx->pc = 0x3aed14u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3aed18: 0xc0eba06  jal         func_3AE818
    ctx->pc = 0x3AED18u;
    SET_GPR_U32(ctx, 31, 0x3AED20u);
    ctx->pc = 0x3AED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AED18u;
    // 0x3aed1c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE818u, 0x3AED18u, 0x3AED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AED20u;
label_3aed20:
    // 0x3aed20: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x3aed20u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed24: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3aed24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3aed28: 0x270a0014  addiu       $t2, $t8, 0x14
    ctx->pc = 0x3aed28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x3aed2c: 0x26190014  addiu       $t9, $s0, 0x14
    ctx->pc = 0x3aed2cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3aed30: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x3aed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3aed34: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3aed34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3aed38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AED38u;
    {
        const bool branch_taken_0x3aed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED38u;
        // 0x3aed3c: 0x26260014  addiu       $a2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aed38) {
            ctx->pc = 0x3AED60u;
            goto label_3aed60;
        }
    }
    ctx->pc = 0x3AED40u;
    // 0x3aed40: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x3aed40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x3aed44: 0x0  nop
    ctx->pc = 0x3aed44u;
    // NOP
label_3aed48:
    // 0x3aed48: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3aed48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3aed4c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3aed4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3aed50: 0x0  nop
    ctx->pc = 0x3aed50u;
    // NOP
    // 0x3aed54: 0x0  nop
    ctx->pc = 0x3aed54u;
    // NOP
    // 0x3aed58: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AED58u;
    {
        const bool branch_taken_0x3aed58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aed58) {
            ctx->pc = 0x3AED5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AED58u;
            // 0x3aed5c: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AED48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aed48;
        }
    }
    ctx->pc = 0x3AED60u;
label_3aed60:
    // 0x3aed60: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x3aed60u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed64: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x3aed64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3aed68: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x3aed68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x3aed6c: 0x1c2a021  addu        $s4, $t6, $v0
    ctx->pc = 0x3aed6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3aed70: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x3aed70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x3aed74: 0x3238021  addu        $s0, $t9, $v1
    ctx->pc = 0x3aed74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3aed78: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x3aed78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed7c: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x3aed7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3aed80: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3AED80u;
    {
        const bool branch_taken_0x3aed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED80u;
        // 0x3aed84: 0x12a880  sll         $s5, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aed80) {
            ctx->pc = 0x3AEE74u;
            goto label_3aee74;
        }
    }
    ctx->pc = 0x3AED88u;
label_3aed88:
    // 0x3aed88: 0x95cc0000  lhu         $t4, 0x0($t6)
    ctx->pc = 0x3aed88u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3aed8c: 0x25d30004  addiu       $s3, $t6, 0x4
    ctx->pc = 0x3aed8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x3aed90: 0x1180001a  beqz        $t4, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AED90u;
    {
        const bool branch_taken_0x3aed90 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED90u;
        // 0x3aed94: 0x25f10004  addiu       $s1, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aed90) {
            ctx->pc = 0x3AEDFCu;
            goto label_3aedfc;
        }
    }
    ctx->pc = 0x3AED98u;
    // 0x3aed98: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x3aed98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed9c: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x3aed9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeda0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3aeda0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeda4: 0x0  nop
    ctx->pc = 0x3aeda4u;
    // NOP
label_3aeda8:
    // 0x3aeda8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x3aeda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3aedac: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3aedacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3aedb0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3aedb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3aedb4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3aedb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3aedb8: 0x150302b  sltu        $a2, $t2, $s0
    ctx->pc = 0x3aedb8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3aedbc: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3aedbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3aedc0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3aedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x3aedc4: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x3aedc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3aedc8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3aedc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3aedcc: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x3aedccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3aedd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3aedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3aedd4: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3aedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3aedd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3aedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3aeddc: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x3aeddcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3aede0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x3aede0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aede4: 0x6d2821  addu        $a1, $v1, $t5
    ctx->pc = 0x3aede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3aede8: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x3aede8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3aedec: 0x56c02  srl         $t5, $a1, 16
    ctx->pc = 0x3aedecu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3aedf0: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3AEDF0u;
    {
        const bool branch_taken_0x3aedf0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDF0u;
        // 0x3aedf4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aedf0) {
            ctx->pc = 0x3AEDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aeda8;
        }
    }
    ctx->pc = 0x3AEDF8u;
    // 0x3aedf8: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x3aedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
label_3aedfc:
    // 0x3aedfc: 0x95cc0002  lhu         $t4, 0x2($t6)
    ctx->pc = 0x3aedfcu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x3aee00: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AEE00u;
    {
        const bool branch_taken_0x3aee00 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE00u;
        // 0x3aee04: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aee00) {
            ctx->pc = 0x3AEE64u;
            goto label_3aee64;
        }
    }
    ctx->pc = 0x3AEE08u;
    // 0x3aee08: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x3aee08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aee0c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3aee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3aee10: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3aee10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aee14: 0x0  nop
    ctx->pc = 0x3aee14u;
    // NOP
label_3aee18:
    // 0x3aee18: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x3aee18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3aee1c: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x3aee1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3aee20: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3aee20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3aee24: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x3aee24u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3aee28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3aee2c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3aee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3aee30: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x3aee30u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aee34: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x3aee34u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3aee38: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3aee38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3aee3c: 0x95420002  lhu         $v0, 0x2($t2)
    ctx->pc = 0x3aee3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3aee40: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3aee40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3aee44: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3aee44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3aee48: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3aee48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3aee4c: 0x150202b  sltu        $a0, $t2, $s0
    ctx->pc = 0x3aee4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3aee50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3aee54: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x3aee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3aee58: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3AEE58u;
    {
        const bool branch_taken_0x3aee58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE58u;
        // 0x3aee5c: 0x56c02  srl         $t5, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aee58) {
            ctx->pc = 0x3AEE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aee18;
        }
    }
    ctx->pc = 0x3AEE60u;
    // 0x3aee60: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x3aee60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_3aee64:
    // 0x3aee64: 0x260702d  daddu       $t6, $s3, $zero
    ctx->pc = 0x3aee64u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aee68: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x3aee68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3aee6c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3AEE6Cu;
    {
        const bool branch_taken_0x3aee6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE6Cu;
        // 0x3aee70: 0x220782d  daddu       $t7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aee6c) {
            ctx->pc = 0x3AED88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aed88;
        }
    }
    ctx->pc = 0x3AEE74u;
label_3aee74:
    // 0x3aee74: 0x2d54021  addu        $t0, $s6, $s5
    ctx->pc = 0x3aee74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_3aee78:
    // 0x3aee78: 0x5a400006  blezl       $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AEE78u;
    {
        const bool branch_taken_0x3aee78 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x3aee78) {
            ctx->pc = 0x3AEE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEE78u;
            // 0x3aee7c: 0xaf120010  sw          $s2, 0x10($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEE94u;
            goto label_3aee94;
        }
    }
    ctx->pc = 0x3AEE80u;
    // 0x3aee80: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x3aee80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x3aee84: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3aee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3aee88: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AEE88u;
    {
        const bool branch_taken_0x3aee88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aee88) {
            ctx->pc = 0x3AEE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEE88u;
            // 0x3aee8c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aee78;
        }
    }
    ctx->pc = 0x3AEE90u;
    // 0x3aee90: 0xaf120010  sw          $s2, 0x10($t8)
    ctx->pc = 0x3aee90u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
label_3aee94:
    // 0x3aee94: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x3aee94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aee98: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3aee98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3aee9c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3aee9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3aeea0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3aeea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3aeea4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3aeea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aeea8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3aeea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aeeac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3aeeacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aeeb0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3aeeb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aeeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aeeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aeeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEEB8u;
        // 0x3aeebc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEEC0u;
}
