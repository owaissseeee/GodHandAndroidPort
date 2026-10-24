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

// Function: func_002BEBC8
// Address: 0x2bebc8 - 0x2becb0
void func_002BEBC8_0x2bebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BEBC8_0x2bebc8");
#endif

    switch (ctx->pc) {
        case 0x2bec08u: goto label_2bec08;
        case 0x2bec44u: goto label_2bec44;
        case 0x2bec98u: goto label_2bec98;
        default: break;
    }

    ctx->pc = 0x2bebc8u;

    // 0x2bebc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bebc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bebcc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2bebccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2bebd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bebd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bebd4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2bebd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2bebd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bebd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bebdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bebe0: 0x946426c0  lhu         $a0, 0x26C0($v1)
    ctx->pc = 0x2bebe0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x3C26C0u));
    // 0x2bebe4: 0x247126c0  addiu       $s1, $v1, 0x26C0
    ctx->pc = 0x2bebe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
    // 0x2bebe8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bebec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2bebecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2bebf0: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BEBF0u;
    {
        const bool branch_taken_0x2bebf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBF0u;
        // 0x2bebf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebf0) {
            ctx->pc = 0x2BEC20u;
            goto label_2bec20;
        }
    }
    ctx->pc = 0x2BEBF8u;
    // 0x2bebf8: 0x10850009  beq         $a0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BEBF8u;
    {
        const bool branch_taken_0x2bebf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBF8u;
        // 0x2bebfc: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebf8) {
            ctx->pc = 0x2BEC20u;
            goto label_2bec20;
        }
    }
    ctx->pc = 0x2BEC00u;
    // 0x2bec00: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x2bec00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2bec04: 0x0  nop
    ctx->pc = 0x2bec04u;
    // NOP
label_2bec08:
    // 0x2bec08: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2bec08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bec0c: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEC0Cu;
    {
        const bool branch_taken_0x2bec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bec0c) {
            ctx->pc = 0x2BEC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEC0Cu;
            // 0x2bec10: 0x96230002  lhu         $v1, 0x2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC24u;
            goto label_2bec24;
        }
    }
    ctx->pc = 0x2BEC14u;
    // 0x2bec14: 0x0  nop
    ctx->pc = 0x2bec14u;
    // NOP
    // 0x2bec18: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BEC18u;
    {
        const bool branch_taken_0x2bec18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2bec18) {
            ctx->pc = 0x2BEC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEC18u;
            // 0x2bec1c: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bec08;
        }
    }
    ctx->pc = 0x2BEC20u;
label_2bec20:
    // 0x2bec20: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x2bec20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2bec24:
    // 0x2bec24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2bec24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2bec28: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BEC28u;
    {
        const bool branch_taken_0x2bec28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bec28) {
            ctx->pc = 0x2BEC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEC28u;
            // 0x2bec2c: 0x96230002  lhu         $v1, 0x2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC4Cu;
            goto label_2bec4c;
        }
    }
    ctx->pc = 0x2BEC30u;
    // 0x2bec30: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x2bec30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2bec34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bec38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec3c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BEC3Cu;
    SET_GPR_U32(ctx, 31, 0x2BEC44u);
    ctx->pc = 0x2BEC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC3Cu;
    // 0x2bec40: 0x24061650  addiu       $a2, $zero, 0x1650 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BEC3Cu, 0x2BEC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC44u;
label_2bec44:
    // 0x2bec44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEC44u;
    {
        const bool branch_taken_0x2bec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC44u;
        // 0x2bec48: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec44) {
            ctx->pc = 0x2BEC64u;
            goto label_2bec64;
        }
    }
    ctx->pc = 0x2BEC4Cu;
label_2bec4c:
    // 0x2bec4c: 0x24041650  addiu       $a0, $zero, 0x1650
    ctx->pc = 0x2bec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5712));
    // 0x2bec50: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x2bec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x2bec54: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2bec54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bec58: 0x24429cb8  addiu       $v0, $v0, -0x6348
    ctx->pc = 0x2bec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941880));
    // 0x2bec5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bec60: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2bec60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2bec64:
    // 0x2bec64: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2bec64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2bec68: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BEC68u;
    {
        const bool branch_taken_0x2bec68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC68u;
        // 0x2bec6c: 0xae421658  sw          $v0, 0x1658($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec68) {
            ctx->pc = 0x2BEC98u;
            goto label_2bec98;
        }
    }
    ctx->pc = 0x2BEC70u;
    // 0x2bec70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2bec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2bec74: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2bec74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x2bec78: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x2bec78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x2bec7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2bec7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2bec80: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEC80u;
    {
        const bool branch_taken_0x2bec80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC80u;
        // 0x2bec84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec80) {
            ctx->pc = 0x2BEC9Cu;
            goto label_2bec9c;
        }
    }
    ctx->pc = 0x2BEC88u;
    // 0x2bec88: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2bec88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bec8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bec8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec90: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BEC90u;
    SET_GPR_U32(ctx, 31, 0x2BEC98u);
    ctx->pc = 0x2BEC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC90u;
    // 0x2bec94: 0x24061650  addiu       $a2, $zero, 0x1650 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BEC90u, 0x2BEC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC98u;
label_2bec98:
    // 0x2bec98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bec98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bec9c:
    // 0x2bec9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bec9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2beca0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2beca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2beca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BECA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECA8u;
        // 0x2becac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BECA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BECB0u;
}
