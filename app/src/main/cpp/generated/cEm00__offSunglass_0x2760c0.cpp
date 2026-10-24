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

// Function: cEm00__offSunglass
// Address: 0x2760c0 - 0x2761b0
void cEm00__offSunglass_0x2760c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00__offSunglass_0x2760c0");
#endif

    switch (ctx->pc) {
        case 0x2760ecu: goto label_2760ec;
        case 0x276130u: goto label_276130;
        default: break;
    }

    ctx->pc = 0x2760c0u;

    // 0x2760c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2760c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2760c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2760c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2760c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2760c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2760cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2760ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760d0: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x2760d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2760d4: 0x38420256  xori        $v0, $v0, 0x256
    ctx->pc = 0x2760d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)598);
    // 0x2760d8: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x2760D8u;
    {
        const bool branch_taken_0x2760d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2760d8) {
            ctx->pc = 0x2760DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2760D8u;
            // 0x2760dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2761A0u;
            goto label_2761a0;
        }
    }
    ctx->pc = 0x2760E0u;
    // 0x2760e0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x2760e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x2760e4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2760E4u;
    SET_GPR_U32(ctx, 31, 0x2760ECu);
    ctx->pc = 0x2760E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2760E4u;
    // 0x2760e8: 0x24a579a0  addiu       $a1, $a1, 0x79A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2760E4u, 0x2760ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760ECu;
label_2760ec:
    // 0x2760ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2760ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760f0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2760F0u;
    {
        const bool branch_taken_0x2760f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760f0) {
            ctx->pc = 0x2760F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2760F0u;
            // 0x2760f4: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276108u;
            goto label_276108;
        }
    }
    ctx->pc = 0x2760F8u;
    // 0x2760f8: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2760f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x2760fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2760fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x276100: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x276100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x276104: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x276104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
label_276108:
    // 0x276108: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x276108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x27610c: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x27610cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x276110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276114: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x276114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x276118: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x276118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27611c: 0xae00174c  sw          $zero, 0x174C($s0)
    ctx->pc = 0x27611cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5964), GPR_U32(ctx, 0));
    // 0x276120: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x276120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    // 0x276124: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x276124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x276128: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x276128u;
    SET_GPR_U32(ctx, 31, 0x276130u);
    ctx->pc = 0x27612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276128u;
    // 0x27612c: 0xe6001750  swc1        $f0, 0x1750($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5968), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x276128u, 0x276130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276130u;
label_276130:
    // 0x276130: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x276130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x276134: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x276134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x276138: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276138u;
    {
        const bool branch_taken_0x276138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276138u;
        // 0x27613c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276138) {
            ctx->pc = 0x276158u;
            goto label_276158;
        }
    }
    ctx->pc = 0x276140u;
    // 0x276140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x276140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276144: 0x244279b0  addiu       $v0, $v0, 0x79B0
    ctx->pc = 0x276144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31152));
    // 0x276148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x276148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27614c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276150: 0x800008  jr          $a0
    ctx->pc = 0x276150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276158u: goto label_276158;
            case 0x276168u: goto label_276168;
            case 0x276178u: goto label_276178;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276150u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276158u;
label_276158:
    // 0x276158: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x276158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x27615c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27615cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276160: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x276160u;
    {
        const bool branch_taken_0x276160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276160u;
        // 0x276164: 0xe6001750  swc1        $f0, 0x1750($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5968), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276160) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x276168u;
label_276168:
    // 0x276168: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x276168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x27616c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27616cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276170: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276170u;
    {
        const bool branch_taken_0x276170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276170u;
        // 0x276174: 0xe6001750  swc1        $f0, 0x1750($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5968), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276170) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x276178u;
label_276178:
    // 0x276178: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x276178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x27617c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27617cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276180: 0x0  nop
    ctx->pc = 0x276180u;
    // NOP
    // 0x276184: 0xe6001750  swc1        $f0, 0x1750($s0)
    ctx->pc = 0x276184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5968), bits); }
label_276188:
    // 0x276188: 0x2402008d  addiu       $v0, $zero, 0x8D
    ctx->pc = 0x276188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x27618c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27618cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x276190: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x276190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x276194: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x276194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x276198: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x276198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27619c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27619cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2761a0:
    // 0x2761a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2761a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2761a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2761A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2761A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761A4u;
        // 0x2761a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2761A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2761ACu;
    // 0x2761ac: 0x0  nop
    ctx->pc = 0x2761acu;
    // NOP
    ctx->pc = 0x2761b0u;
}
