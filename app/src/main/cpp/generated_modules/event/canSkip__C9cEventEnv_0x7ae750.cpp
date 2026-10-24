#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: canSkip__C9cEventEnv
// Address: 0x7ae750 - 0x7ae808
void canSkip__C9cEventEnv_0x7ae750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("canSkip__C9cEventEnv_0x7ae750");
#endif

    switch (ctx->pc) {
        case 0x7ae764u: goto label_7ae764;
        case 0x7ae7ccu: goto label_7ae7cc;
        default: break;
    }

    ctx->pc = 0x7ae750u;

    // 0x7ae750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae75c: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AE75Cu;
    SET_GPR_U32(ctx, 31, 0x7AE764u);
    ctx->pc = 0x7AE760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE75Cu;
    // 0x7ae760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AE75Cu, 0x7AE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE764u;
label_7ae764:
    // 0x7ae764: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x7AE764u;
    {
        const bool branch_taken_0x7ae764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE764u;
        // 0x7ae768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae764) {
            ctx->pc = 0x7AE7F4u;
            goto label_7ae7f4;
        }
    }
    ctx->pc = 0x7AE76Cu;
    // 0x7ae76c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7ae76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae770: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x7ae770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x7ae774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae778: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AE778u;
    {
        const bool branch_taken_0x7ae778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE778u;
        // 0x7ae77c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae778) {
            ctx->pc = 0x7AE788u;
            goto label_7ae788;
        }
    }
    ctx->pc = 0x7AE780u;
    // 0x7ae780: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x7AE780u;
    {
        const bool branch_taken_0x7ae780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE780u;
        // 0x7ae784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae780) {
            ctx->pc = 0x7AE7F4u;
            goto label_7ae7f4;
        }
    }
    ctx->pc = 0x7AE788u;
label_7ae788:
    // 0x7ae788: 0x9043748c  lbu         $v1, 0x748C($v0)
    ctx->pc = 0x7ae788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29836)));
    // 0x7ae78c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x7AE78Cu;
    {
        const bool branch_taken_0x7ae78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE78Cu;
        // 0x7ae790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae78c) {
            ctx->pc = 0x7AE7F4u;
            goto label_7ae7f4;
        }
    }
    ctx->pc = 0x7AE794u;
    // 0x7ae794: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7ae794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7ae798: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7ae798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7ae79c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x7ae79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x7ae7a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ae7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ae7a4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x7ae7a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7ae7a8: 0x54800012  bnel        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x7AE7A8u;
    {
        const bool branch_taken_0x7ae7a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae7a8) {
            ctx->pc = 0x7AE7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE7A8u;
            // 0x7ae7ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE7F4u;
            goto label_7ae7f4;
        }
    }
    ctx->pc = 0x7AE7B0u;
    // 0x7ae7b0: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x7ae7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x7ae7b4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x7ae7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x7ae7b8: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7AE7B8u;
    {
        const bool branch_taken_0x7ae7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7ae7b8) {
            ctx->pc = 0x7AE7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE7B8u;
            // 0x7ae7bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE7F4u;
            goto label_7ae7f4;
        }
    }
    ctx->pc = 0x7AE7C0u;
    // 0x7ae7c0: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ae7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ae7c4: 0xc1eb3b8  jal         func_7ACEE0
    ctx->pc = 0x7AE7C4u;
    SET_GPR_U32(ctx, 31, 0x7AE7CCu);
    ctx->pc = 0x7AE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE7C4u;
    // 0x7ae7c8: 0x24845248  addiu       $a0, $a0, 0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEE0u, 0x7AE7C4u, 0x7AE7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE7CCu;
label_7ae7cc:
    // 0x7ae7cc: 0x2442ffdd  addiu       $v0, $v0, -0x23
    ctx->pc = 0x7ae7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967261));
    // 0x7ae7d0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x7ae7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ae7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7ae7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ae7d8: 0x0  nop
    ctx->pc = 0x7ae7d8u;
    // NOP
    // 0x7ae7dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7ae7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7ae7e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x7ae7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ae7e4: 0x0  nop
    ctx->pc = 0x7ae7e4u;
    // NOP
    // 0x7ae7e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x7AE7E8u;
    {
        const bool branch_taken_0x7ae7e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x7AE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE7E8u;
        // 0x7ae7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae7e8) {
            ctx->pc = 0x7AE7F4u;
            goto label_7ae7f4;
        }
    }
    ctx->pc = 0x7AE7F0u;
    // 0x7ae7f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7ae7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ae7f4:
    // 0x7ae7f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ae7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE7FCu;
        // 0x7ae800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE804u;
    // 0x7ae804: 0x0  nop
    ctx->pc = 0x7ae804u;
    // NOP
    ctx->pc = 0x7ae808u;
}
} // namespace gh_event
