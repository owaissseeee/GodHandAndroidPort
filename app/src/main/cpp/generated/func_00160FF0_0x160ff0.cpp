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

// Function: func_00160FF0
// Address: 0x160ff0 - 0x161288
void func_00160FF0_0x160ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00160FF0_0x160ff0");
#endif

    switch (ctx->pc) {
        case 0x161060u: goto label_161060;
        case 0x161074u: goto label_161074;
        case 0x1610f8u: goto label_1610f8;
        case 0x161148u: goto label_161148;
        case 0x16116cu: goto label_16116c;
        case 0x161184u: goto label_161184;
        case 0x161198u: goto label_161198;
        case 0x161260u: goto label_161260;
        default: break;
    }

    ctx->pc = 0x160ff0u;

    // 0x160ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x160ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x160ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ff8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x160ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x160ffc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x160ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x161000: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x161000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161004: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x161004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x161008: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x161008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16100c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x161010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161014: 0x86830052  lh          $v1, 0x52($s4)
    ctx->pc = 0x161014u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 82)));
    // 0x161018: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x161018u;
    {
        const bool branch_taken_0x161018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161018u;
        // 0x16101c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161018) {
            ctx->pc = 0x161120u;
            goto label_161120;
        }
    }
    ctx->pc = 0x161020u;
    // 0x161020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161020u;
    {
        const bool branch_taken_0x161020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161020u;
        // 0x161024: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161020) {
            ctx->pc = 0x161038u;
            goto label_161038;
        }
    }
    ctx->pc = 0x161028u;
    // 0x161028: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x161028u;
    {
        const bool branch_taken_0x161028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161028u;
        // 0x16102c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161028) {
            ctx->pc = 0x161048u;
            goto label_161048;
        }
    }
    ctx->pc = 0x161030u;
    // 0x161030: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x161030u;
    {
        const bool branch_taken_0x161030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161030u;
        // 0x161034: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161030) {
            ctx->pc = 0x16126Cu;
            goto label_16126c;
        }
    }
    ctx->pc = 0x161038u;
label_161038:
    // 0x161038: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x161038u;
    {
        const bool branch_taken_0x161038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161038u;
        // 0x16103c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161038) {
            ctx->pc = 0x161154u;
            goto label_161154;
        }
    }
    ctx->pc = 0x161040u;
    // 0x161040: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x161040u;
    {
        const bool branch_taken_0x161040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161040u;
        // 0x161044: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161040) {
            ctx->pc = 0x16126Cu;
            goto label_16126c;
        }
    }
    ctx->pc = 0x161048u;
label_161048:
    // 0x161048: 0x82910b9c  lb          $s1, 0xB9C($s4)
    ctx->pc = 0x161048u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2972)));
    // 0x16104c: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x16104cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x161050: 0x3c120200  lui         $s2, 0x200
    ctx->pc = 0x161050u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)512 << 16));
    // 0x161054: 0x3c130056  lui         $s3, 0x56
    ctx->pc = 0x161054u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)86 << 16));
    // 0x161058: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x161058u;
    SET_GPR_U32(ctx, 31, 0x161060u);
    ctx->pc = 0x16105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161058u;
    // 0x16105c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x161058u, 0x161060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161060u;
label_161060:
    // 0x161060: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161064: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x161064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161068: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x161068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16106c: 0xc0b4526  jal         func_2D1498
    ctx->pc = 0x16106Cu;
    SET_GPR_U32(ctx, 31, 0x161074u);
    ctx->pc = 0x161070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16106Cu;
    // 0x161070: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1498u, 0x16106Cu, 0x161074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161074u;
label_161074:
    // 0x161074: 0x8e027a80  lw          $v0, 0x7A80($s0)
    ctx->pc = 0x161074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31360)));
    // 0x161078: 0x26077a80  addiu       $a3, $s0, 0x7A80
    ctx->pc = 0x161078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 31360));
    // 0x16107c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x16107cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x161080: 0x8ce5fff8  lw          $a1, -0x8($a3)
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
    // 0x161084: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x161084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x161088: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x161088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x16108c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16108cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x161090: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x161090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x161094: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x161094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x161098: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x161098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x16109c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x16109cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1610a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1610a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1610a4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1610a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1610a8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1610a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1610ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1610acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1610b0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1610b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1610b4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1610b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1610b8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1610b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1610bc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1610bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1610c0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1610c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1610c4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1610c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1610c8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1610c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1610cc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1610ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1610d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1610d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1610d4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1610d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1610d8: 0xace5fff8  sw          $a1, -0x8($a3)
    ctx->pc = 0x1610d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967288), GPR_U32(ctx, 5));
    // 0x1610dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1610dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1610e0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1610e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1610e4: 0x248479d0  addiu       $a0, $a0, 0x79D0
    ctx->pc = 0x1610e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31184));
    // 0x1610e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1610e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610ec: 0xae027a80  sw          $v0, 0x7A80($s0)
    ctx->pc = 0x1610ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31360), GPR_U32(ctx, 2));
    // 0x1610f0: 0xc0ad2fa  jal         func_2B4BE8
    ctx->pc = 0x1610F0u;
    SET_GPR_U32(ctx, 31, 0x1610F8u);
    ctx->pc = 0x1610F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1610F0u;
    // 0x1610f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BE8u, 0x1610F0u, 0x1610F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610F8u;
label_1610f8:
    // 0x1610f8: 0x8e037a80  lw          $v1, 0x7A80($s0)
    ctx->pc = 0x1610f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31360)));
    // 0x1610fc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1610fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x161100: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x161100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161104: 0xae626e40  sw          $v0, 0x6E40($s3)
    ctx->pc = 0x161104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28224), GPR_U32(ctx, 2));
    // 0x161108: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x161108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x16110c: 0xaca46e44  sw          $a0, 0x6E44($a1)
    ctx->pc = 0x16110cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x566E44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x566E44u, _value); } while (0);
    // 0x161110: 0xae037a80  sw          $v1, 0x7A80($s0)
    ctx->pc = 0x161110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31360), GPR_U32(ctx, 3));
    // 0x161114: 0x96820052  lhu         $v0, 0x52($s4)
    ctx->pc = 0x161114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 82)));
    // 0x161118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16111c: 0xa6820052  sh          $v0, 0x52($s4)
    ctx->pc = 0x16111cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 2));
label_161120:
    // 0x161120: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x161120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
    // 0x161124: 0x8c626e44  lw          $v0, 0x6E44($v1)
    ctx->pc = 0x161124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x566E44u));
    // 0x161128: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x161128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16112c: 0x1c400011  bgtz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16112Cu;
    {
        const bool branch_taken_0x16112c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x161130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16112Cu;
        // 0x161130: 0xac626e44  sw          $v0, 0x6E44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16112c) {
            ctx->pc = 0x161174u;
            goto label_161174;
        }
    }
    ctx->pc = 0x161134u;
    // 0x161134: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x161134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x161138: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x161138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16113c: 0x8c456e40  lw          $a1, 0x6E40($v0)
    ctx->pc = 0x16113cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x566E40u));
    // 0x161140: 0xc0ad34e  jal         func_2B4D38
    ctx->pc = 0x161140u;
    SET_GPR_U32(ctx, 31, 0x161148u);
    ctx->pc = 0x161144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161140u;
    // 0x161144: 0x248479d0  addiu       $a0, $a0, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4D38u, 0x161140u, 0x161148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161148u;
label_161148:
    // 0x161148: 0x96820052  lhu         $v0, 0x52($s4)
    ctx->pc = 0x161148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 82)));
    // 0x16114c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161150: 0xa6820052  sh          $v0, 0x52($s4)
    ctx->pc = 0x161150u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 2));
label_161154:
    // 0x161154: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x161154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x161158: 0x3c110056  lui         $s1, 0x56
    ctx->pc = 0x161158u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)86 << 16));
    // 0x16115c: 0x245079d0  addiu       $s0, $v0, 0x79D0
    ctx->pc = 0x16115cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31184));
    // 0x161160: 0x8e256e40  lw          $a1, 0x6E40($s1)
    ctx->pc = 0x161160u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x566E40u));
    // 0x161164: 0xc0ad3b2  jal         func_2B4EC8
    ctx->pc = 0x161164u;
    SET_GPR_U32(ctx, 31, 0x16116Cu);
    ctx->pc = 0x161168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161164u;
    // 0x161168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4EC8u, 0x161164u, 0x16116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16116Cu;
label_16116c:
    // 0x16116c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16116Cu;
    {
        const bool branch_taken_0x16116c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16116Cu;
        // 0x161170: 0x8e256e40  lw          $a1, 0x6E40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16116c) {
            ctx->pc = 0x16117Cu;
            goto label_16117c;
        }
    }
    ctx->pc = 0x161174u;
label_161174:
    // 0x161174: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x161174u;
    {
        const bool branch_taken_0x161174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161174u;
        // 0x161178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161174) {
            ctx->pc = 0x161268u;
            goto label_161268;
        }
    }
    ctx->pc = 0x16117Cu;
label_16117c:
    // 0x16117c: 0xc0ad35a  jal         func_2B4D68
    ctx->pc = 0x16117Cu;
    SET_GPR_U32(ctx, 31, 0x161184u);
    ctx->pc = 0x161180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16117Cu;
    // 0x161180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4D68u, 0x16117Cu, 0x161184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161184u;
label_161184:
    // 0x161184: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x161184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x161188: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x161188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16118c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16118cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x161190: 0xc0b453e  jal         func_2D14F8
    ctx->pc = 0x161190u;
    SET_GPR_U32(ctx, 31, 0x161198u);
    ctx->pc = 0x161194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161190u;
    // 0x161194: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D14F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D14F8u, 0x161190u, 0x161198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161198u;
label_161198:
    // 0x161198: 0x3c0a0074  lui         $t2, 0x74
    ctx->pc = 0x161198u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)116 << 16));
    // 0x16119c: 0x3c04fbff  lui         $a0, 0xFBFF
    ctx->pc = 0x16119cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64511 << 16));
    // 0x1611a0: 0x8d427a80  lw          $v0, 0x7A80($t2)
    ctx->pc = 0x1611a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x1611a4: 0x254b7a80  addiu       $t3, $t2, 0x7A80
    ctx->pc = 0x1611a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 31360));
    // 0x1611a8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1611a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1611ac: 0x8d63fff8  lw          $v1, -0x8($t3)
    ctx->pc = 0x1611acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1611b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1611b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1611b4: 0x3c09fdff  lui         $t1, 0xFDFF
    ctx->pc = 0x1611b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65023 << 16));
    // 0x1611b8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1611b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x1611bc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1611bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1611c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1611c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1611c4: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x1611c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x1611c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1611c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1611cc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1611ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1611d0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1611d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1611d4: 0x3c08dfff  lui         $t0, 0xDFFF
    ctx->pc = 0x1611d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57343 << 16));
    // 0x1611d8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1611d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1611dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1611dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1611e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1611e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1611e4: 0x3c07efff  lui         $a3, 0xEFFF
    ctx->pc = 0x1611e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61439 << 16));
    // 0x1611e8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1611e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1611ec: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1611ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1611f0: 0x3c05ffdf  lui         $a1, 0xFFDF
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65503 << 16));
    // 0x1611f4: 0x3c04fff7  lui         $a0, 0xFFF7
    ctx->pc = 0x1611f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65527 << 16));
    // 0x1611f8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1611f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1611fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1611fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x161200: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x161200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x161204: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x161204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x161208: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x161208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16120c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16120cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161210: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x161210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x161214: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x161214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x161218: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x16121c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16121cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x161220: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x161220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x161224: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x161224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x161228: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x161228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x16122c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x161230: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x161230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x161234: 0xad427a80  sw          $v0, 0x7A80($t2)
    ctx->pc = 0x161234u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 31360), GPR_U32(ctx, 2));
    // 0x161238: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x16123c: 0xad63fff8  sw          $v1, -0x8($t3)
    ctx->pc = 0x16123cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967288), GPR_U32(ctx, 3));
    // 0x161240: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x161244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161248: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16124c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16124cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161250: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x161250u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x161254: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x161254u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x161258: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x161258u;
    SET_GPR_U32(ctx, 31, 0x161260u);
    ctx->pc = 0x16125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161258u;
    // 0x16125c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x161258u, 0x161260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161260u;
label_161260:
    // 0x161260: 0xa6800052  sh          $zero, 0x52($s4)
    ctx->pc = 0x161260u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x161264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161268:
    // 0x161268: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x161268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16126c:
    // 0x16126c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16126cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161270: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x161270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161274: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x161274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161278: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x161278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16127c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16127cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161280: 0x3e00008  jr          $ra
    ctx->pc = 0x161280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161280u;
        // 0x161284: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161288u;
}
