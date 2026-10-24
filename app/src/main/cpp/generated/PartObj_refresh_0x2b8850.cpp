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

// Function: PartObj_refresh
// Address: 0x2b8850 - 0x2b8908
void PartObj_refresh_0x2b8850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartObj_refresh_0x2b8850");
#endif

    switch (ctx->pc) {
        case 0x2b88a8u: goto label_2b88a8;
        case 0x2b88f0u: goto label_2b88f0;
        case 0x2b88f8u: goto label_2b88f8;
        default: break;
    }

    ctx->pc = 0x2b8850u;

    // 0x2b8850: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b8850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b8854: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8858: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x2b8858u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x2b885c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2b885cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2b8860: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b8860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b8864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8868: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b8868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b886c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B886Cu;
    {
        const bool branch_taken_0x2b886c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B886Cu;
        // 0x2b8870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b886c) {
            ctx->pc = 0x2B88F8u;
            goto label_2b88f8;
        }
    }
    ctx->pc = 0x2B8874u;
    // 0x2b8874: 0x8e0504d0  lw          $a1, 0x4D0($s0)
    ctx->pc = 0x2b8874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1232)));
    // 0x2b8878: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B8878u;
    {
        const bool branch_taken_0x2b8878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8878) {
            ctx->pc = 0x2B887Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8878u;
            // 0x2b887c: 0x8e0202f8  lw          $v0, 0x2F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B88ACu;
            goto label_2b88ac;
        }
    }
    ctx->pc = 0x2B8880u;
    // 0x2b8880: 0x920204d4  lbu         $v0, 0x4D4($s0)
    ctx->pc = 0x2b8880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1236)));
    // 0x2b8884: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B8884u;
    {
        const bool branch_taken_0x2b8884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8884) {
            ctx->pc = 0x2B8888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8884u;
            // 0x2b8888: 0x8e0202f8  lw          $v0, 0x2F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B88ACu;
            goto label_2b88ac;
        }
    }
    ctx->pc = 0x2B888Cu;
    // 0x2b888c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b888cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b8890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b8894: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2b8894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b8898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b889c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b889cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b88a0: 0xc0560a8  jal         func_1582A0
    ctx->pc = 0x2B88A0u;
    SET_GPR_U32(ctx, 31, 0x2B88A8u);
    ctx->pc = 0x2B88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88A0u;
    // 0x2b88a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1582A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1582A0u, 0x2B88A0u, 0x2B88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88A8u;
label_2b88a8:
    // 0x2b88a8: 0x8e0202f8  lw          $v0, 0x2F8($s0)
    ctx->pc = 0x2b88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
label_2b88ac:
    // 0x2b88ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b88acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b88b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B88B0u;
    {
        const bool branch_taken_0x2b88b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88B0u;
        // 0x2b88b4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b88b0) {
            ctx->pc = 0x2B88F0u;
            goto label_2b88f0;
        }
    }
    ctx->pc = 0x2B88B8u;
    // 0x2b88b8: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x2b88b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2b88bc: 0x8c44aff0  lw          $a0, -0x5010($v0)
    ctx->pc = 0x2b88bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x2b88c0: 0x24820220  addiu       $v0, $a0, 0x220
    ctx->pc = 0x2b88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x2b88c4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B88C4u;
    {
        const bool branch_taken_0x2b88c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b88c4) {
            ctx->pc = 0x2B88C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B88C4u;
            // 0x2b88c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B88E8u;
            goto label_2b88e8;
        }
    }
    ctx->pc = 0x2B88CCu;
    // 0x2b88cc: 0xc4800220  lwc1        $f0, 0x220($a0)
    ctx->pc = 0x2b88ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b88d0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x2b88d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x2b88d4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b88d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b88d8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b88d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b88dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b88dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b88e0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b88e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b88e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b88e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b88e8:
    // 0x2b88e8: 0xc05404a  jal         func_150128
    ctx->pc = 0x2B88E8u;
    SET_GPR_U32(ctx, 31, 0x2B88F0u);
    ctx->pc = 0x2B88ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88E8u;
    // 0x2b88ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x2B88E8u, 0x2B88F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88F0u;
label_2b88f0:
    // 0x2b88f0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2B88F0u;
    SET_GPR_U32(ctx, 31, 0x2B88F8u);
    ctx->pc = 0x2B88F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88F0u;
    // 0x2b88f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2B88F0u, 0x2B88F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88F8u;
label_2b88f8:
    // 0x2b88f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b88f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b88fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b88fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8900: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8900u;
        // 0x2b8904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8908u;
}
