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

// Function: func_0028E0E0
// Address: 0x28e0e0 - 0x28e418
void func_0028E0E0_0x28e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028E0E0_0x28e0e0");
#endif

    switch (ctx->pc) {
        case 0x28e184u: goto label_28e184;
        case 0x28e2dcu: goto label_28e2dc;
        case 0x28e328u: goto label_28e328;
        case 0x28e33cu: goto label_28e33c;
        case 0x28e378u: goto label_28e378;
        case 0x28e380u: goto label_28e380;
        case 0x28e388u: goto label_28e388;
        case 0x28e394u: goto label_28e394;
        case 0x28e39cu: goto label_28e39c;
        case 0x28e3b8u: goto label_28e3b8;
        case 0x28e3d0u: goto label_28e3d0;
        case 0x28e3f0u: goto label_28e3f0;
        default: break;
    }

    ctx->pc = 0x28e0e0u;

    // 0x28e0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28e0e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28e0e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28e0ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28e0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28e0f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28e0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e0fc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x28e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e100: 0x26071510  addiu       $a3, $s0, 0x1510
    ctx->pc = 0x28e100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
    // 0x28e104: 0x26031520  addiu       $v1, $s0, 0x1520
    ctx->pc = 0x28e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5408));
    // 0x28e108: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e10c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28e10cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e110: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E110u;
    {
        const bool branch_taken_0x28e110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x28E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E110u;
        // 0x28e114: 0xae021510  sw          $v0, 0x1510($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e110) {
            ctx->pc = 0x28E130u;
            goto label_28e130;
        }
    }
    ctx->pc = 0x28E118u;
    // 0x28e118: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x28e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e11c: 0xe6001520  swc1        $f0, 0x1520($s0)
    ctx->pc = 0x28e11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5408), bits); }
    // 0x28e120: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e124: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28e124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28e128: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28e128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e12c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28e12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28e130:
    // 0x28e130: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x28e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e134: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x28e134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x28e138: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x28e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x28e13c: 0x240500d7  addiu       $a1, $zero, 0xD7
    ctx->pc = 0x28e13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x28e140: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x28e140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x28e144: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x28e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x28e148: 0xace20024  sw          $v0, 0x24($a3)
    ctx->pc = 0x28e148u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
    // 0x28e14c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x28e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x28e150: 0xace30028  sw          $v1, 0x28($a3)
    ctx->pc = 0x28e150u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 3));
    // 0x28e154: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x28e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x28e158: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x28e158u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x28e15c: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x28e15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x28e160: 0xa0e30030  sb          $v1, 0x30($a3)
    ctx->pc = 0x28e160u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x28e164: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x28e164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x28e168: 0xa0e20031  sb          $v0, 0x31($a3)
    ctx->pc = 0x28e168u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x28e16c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x28e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x28e170: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28e170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28e174: 0xae030564  sw          $v1, 0x564($s0)
    ctx->pc = 0x28e174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 3));
    // 0x28e178: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x28e178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28e17c: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x28E17Cu;
    SET_GPR_U32(ctx, 31, 0x28E184u);
    ctx->pc = 0x28E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E17Cu;
    // 0x28e180: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x28E17Cu, 0x28E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E184u;
label_28e184:
    // 0x28e184: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x28e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x28e188: 0x24030404  addiu       $v1, $zero, 0x404
    ctx->pc = 0x28e188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x28e18c: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x28e18cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x28e190: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x28E190u;
    {
        const bool branch_taken_0x28e190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E190u;
        // 0x28e194: 0x28820405  slti        $v0, $a0, 0x405 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1029) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e190) {
            ctx->pc = 0x28E294u;
            goto label_28e294;
        }
    }
    ctx->pc = 0x28E198u;
    // 0x28e198: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28E198u;
    {
        const bool branch_taken_0x28e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E198u;
        // 0x28e19c: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e198) {
            ctx->pc = 0x28E1DCu;
            goto label_28e1dc;
        }
    }
    ctx->pc = 0x28E1A0u;
    // 0x28e1a0: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28E1A0u;
    {
        const bool branch_taken_0x28e1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1A0u;
        // 0x28e1a4: 0x28820106  slti        $v0, $a0, 0x106 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)262) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1a0) {
            ctx->pc = 0x28E21Cu;
            goto label_28e21c;
        }
    }
    ctx->pc = 0x28E1A8u;
    // 0x28e1a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E1A8u;
    {
        const bool branch_taken_0x28e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1A8u;
        // 0x28e1ac: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1a8) {
            ctx->pc = 0x28E1C0u;
            goto label_28e1c0;
        }
    }
    ctx->pc = 0x28E1B0u;
    // 0x28e1b0: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x28E1B0u;
    {
        const bool branch_taken_0x28e1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1B0u;
        // 0x28e1b4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1b0) {
            ctx->pc = 0x28E23Cu;
            goto label_28e23c;
        }
    }
    ctx->pc = 0x28E1B8u;
    // 0x28e1b8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x28E1B8u;
    {
        const bool branch_taken_0x28e1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e1b8) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E1C0u;
label_28e1c0:
    // 0x28e1c0: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x28e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x28e1c4: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28E1C4u;
    {
        const bool branch_taken_0x28e1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1C4u;
        // 0x28e1c8: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1c4) {
            ctx->pc = 0x28E258u;
            goto label_28e258;
        }
    }
    ctx->pc = 0x28E1CCu;
    // 0x28e1cc: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x28E1CCu;
    {
        const bool branch_taken_0x28e1cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1CCu;
        // 0x28e1d0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1cc) {
            ctx->pc = 0x28E278u;
            goto label_28e278;
        }
    }
    ctx->pc = 0x28E1D4u;
    // 0x28e1d4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x28E1D4u;
    {
        const bool branch_taken_0x28e1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e1d4) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E1DCu;
label_28e1dc:
    // 0x28e1dc: 0x24020607  addiu       $v0, $zero, 0x607
    ctx->pc = 0x28e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1543));
    // 0x28e1e0: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x28E1E0u;
    {
        const bool branch_taken_0x28e1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1E0u;
        // 0x28e1e4: 0x28820608  slti        $v0, $a0, 0x608 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1e0) {
            ctx->pc = 0x28E2D0u;
            goto label_28e2d0;
        }
    }
    ctx->pc = 0x28E1E8u;
    // 0x28e1e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E1E8u;
    {
        const bool branch_taken_0x28e1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1E8u;
        // 0x28e1ec: 0x24020503  addiu       $v0, $zero, 0x503 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1e8) {
            ctx->pc = 0x28E200u;
            goto label_28e200;
        }
    }
    ctx->pc = 0x28E1F0u;
    // 0x28e1f0: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x28E1F0u;
    {
        const bool branch_taken_0x28e1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1F0u;
        // 0x28e1f4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1f0) {
            ctx->pc = 0x28E2B4u;
            goto label_28e2b4;
        }
    }
    ctx->pc = 0x28E1F8u;
    // 0x28e1f8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x28E1F8u;
    {
        const bool branch_taken_0x28e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e1f8) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E200u;
label_28e200:
    // 0x28e200: 0x24020701  addiu       $v0, $zero, 0x701
    ctx->pc = 0x28e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x28e204: 0x1082003a  beq         $a0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x28E204u;
    {
        const bool branch_taken_0x28e204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E204u;
        // 0x28e208: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e204) {
            ctx->pc = 0x28E2F0u;
            goto label_28e2f0;
        }
    }
    ctx->pc = 0x28E20Cu;
    // 0x28e20c: 0x10820040  beq         $a0, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x28E20Cu;
    {
        const bool branch_taken_0x28e20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E20Cu;
        // 0x28e210: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e20c) {
            ctx->pc = 0x28E310u;
            goto label_28e310;
        }
    }
    ctx->pc = 0x28E214u;
    // 0x28e214: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x28E214u;
    {
        const bool branch_taken_0x28e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e214) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E21Cu;
label_28e21c:
    // 0x28e21c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x28e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x28e220: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x28e220u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x569B70u));
    // 0x28e224: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28e224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28e228: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28e228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28e22c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x28E22Cu;
    {
        const bool branch_taken_0x28e22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E22Cu;
        // 0x28e230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e22c) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E234u;
    // 0x28e234: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x28E234u;
    {
        const bool branch_taken_0x28e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E234u;
        // 0x28e238: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e234) {
            ctx->pc = 0x28E404u;
            goto label_28e404;
        }
    }
    ctx->pc = 0x28E23Cu;
label_28e23c:
    // 0x28e23c: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x28e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x28e240: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28e244: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x28e244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x28e248: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x28E248u;
    {
        const bool branch_taken_0x28e248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E248u;
        // 0x28e24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e248) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E250u;
    // 0x28e250: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x28E250u;
    {
        const bool branch_taken_0x28e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E250u;
        // 0x28e254: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e250) {
            ctx->pc = 0x28E404u;
            goto label_28e404;
        }
    }
    ctx->pc = 0x28E258u;
label_28e258:
    // 0x28e258: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x28e258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x28e25c: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x28e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x569B70u));
    // 0x28e260: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28e260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28e264: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x28e264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x28e268: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x28E268u;
    {
        const bool branch_taken_0x28e268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E268u;
        // 0x28e26c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e268) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E270u;
    // 0x28e270: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x28E270u;
    {
        const bool branch_taken_0x28e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E270u;
        // 0x28e274: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e270) {
            ctx->pc = 0x28E404u;
            goto label_28e404;
        }
    }
    ctx->pc = 0x28E278u;
label_28e278:
    // 0x28e278: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x28e278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x28e27c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28e280: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x28e280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x28e284: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x28E284u;
    {
        const bool branch_taken_0x28e284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E284u;
        // 0x28e288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e284) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E28Cu;
    // 0x28e28c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x28E28Cu;
    {
        const bool branch_taken_0x28e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E28Cu;
        // 0x28e290: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e28c) {
            ctx->pc = 0x28E404u;
            goto label_28e404;
        }
    }
    ctx->pc = 0x28E294u;
label_28e294:
    // 0x28e294: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x28e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x28e298: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x28e298u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x569B70u));
    // 0x28e29c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28e2a0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x28e2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x28e2a4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x28E2A4u;
    {
        const bool branch_taken_0x28e2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2A4u;
        // 0x28e2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2a4) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E2ACu;
    // 0x28e2ac: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x28E2ACu;
    {
        const bool branch_taken_0x28e2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2ACu;
        // 0x28e2b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2ac) {
            ctx->pc = 0x28E404u;
            goto label_28e404;
        }
    }
    ctx->pc = 0x28E2B4u;
label_28e2b4:
    // 0x28e2b4: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x28e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x28e2b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28e2bc: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x28e2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x28e2c0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28E2C0u;
    {
        const bool branch_taken_0x28e2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2C0u;
        // 0x28e2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2c0) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E2C8u;
    // 0x28e2c8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x28E2C8u;
    {
        const bool branch_taken_0x28e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2C8u;
        // 0x28e2cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2c8) {
            ctx->pc = 0x28E404u;
            goto label_28e404;
        }
    }
    ctx->pc = 0x28E2D0u;
label_28e2d0:
    // 0x28e2d0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x28e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x28e2d4: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x28e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x569B70u));
    // 0x28e2d8: 0x90830015  lbu         $v1, 0x15($a0)
    ctx->pc = 0x28e2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
label_28e2dc:
    // 0x28e2dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28e2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28e2e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28E2E0u;
    {
        const bool branch_taken_0x28e2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2E0u;
        // 0x28e2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2e0) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E2E8u;
    // 0x28e2e8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x28E2E8u;
    {
        const bool branch_taken_0x28e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2E8u;
        // 0x28e2ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2e8) {
            ctx->pc = 0x28E404u;
            goto label_28e404;
        }
    }
    ctx->pc = 0x28E2F0u;
label_28e2f0:
    // 0x28e2f0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x28e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x28e2f4: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x28e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x569B70u));
    // 0x28e2f8: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x28e2f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28e2fc: 0x319fa  dsrl        $v1, $v1, 7
    ctx->pc = 0x28e2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 7);
    // 0x28e300: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E300u;
    {
        const bool branch_taken_0x28e300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E300u;
        // 0x28e304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e300) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E308u;
    // 0x28e308: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x28E308u;
    {
        const bool branch_taken_0x28e308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E308u;
        // 0x28e30c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e308) {
            ctx->pc = 0x28E404u;
            goto label_28e404;
        }
    }
    ctx->pc = 0x28E310u;
label_28e310:
    // 0x28e310: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x28e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x28e314: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28e318: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x28E318u;
    {
        const bool branch_taken_0x28e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E318u;
        // 0x28e31c: 0x319ba  dsrl        $v1, $v1, 6 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e318) {
            ctx->pc = 0x28E2DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e2dc;
        }
    }
    ctx->pc = 0x28E320u;
label_28e320:
    // 0x28e320: 0xc0a3a8e  jal         func_28EA38
    ctx->pc = 0x28E320u;
    SET_GPR_U32(ctx, 31, 0x28E328u);
    ctx->pc = 0x28E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E320u;
    // 0x28e324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA38u, 0x28E320u, 0x28E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E328u;
label_28e328:
    // 0x28e328: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x28E328u;
    {
        const bool branch_taken_0x28e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E328u;
        // 0x28e32c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e328) {
            ctx->pc = 0x28E3FCu;
            goto label_28e3fc;
        }
    }
    ctx->pc = 0x28E330u;
    // 0x28e330: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28e330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e334: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x28E334u;
    SET_GPR_U32(ctx, 31, 0x28E33Cu);
    ctx->pc = 0x28E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E334u;
    // 0x28e338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x28E334u, 0x28E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E33Cu;
label_28e33c:
    // 0x28e33c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28e33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28e340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28e340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e344: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e348: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28e34c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e350: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x28e350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x28e354: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28e354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e358: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x28e358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x28e35c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e360: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x28e360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x28e364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e368: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e36c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x28e36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e370: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28E370u;
    SET_GPR_U32(ctx, 31, 0x28E378u);
    ctx->pc = 0x28E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E370u;
    // 0x28e374: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28E370u, 0x28E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E378u;
label_28e378:
    // 0x28e378: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28E378u;
    SET_GPR_U32(ctx, 31, 0x28E380u);
    ctx->pc = 0x28E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E378u;
    // 0x28e37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28E378u, 0x28E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E380u;
label_28e380:
    // 0x28e380: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x28E380u;
    SET_GPR_U32(ctx, 31, 0x28E388u);
    ctx->pc = 0x28E384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E380u;
    // 0x28e384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x28E380u, 0x28E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E388u;
label_28e388:
    // 0x28e388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e38c: 0xc054a88  jal         func_152A20
    ctx->pc = 0x28E38Cu;
    SET_GPR_U32(ctx, 31, 0x28E394u);
    ctx->pc = 0x28E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E38Cu;
    // 0x28e390: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x28E38Cu, 0x28E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E394u;
label_28e394:
    // 0x28e394: 0xc05280e  jal         func_14A038
    ctx->pc = 0x28E394u;
    SET_GPR_U32(ctx, 31, 0x28E39Cu);
    ctx->pc = 0x28E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E394u;
    // 0x28e398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x28E394u, 0x28E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E39Cu;
label_28e39c:
    // 0x28e39c: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x28e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x28e3a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28e3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x28e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28e3ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28e3b0: 0xc05404a  jal         func_150128
    ctx->pc = 0x28E3B0u;
    SET_GPR_U32(ctx, 31, 0x28E3B8u);
    ctx->pc = 0x28E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3B0u;
    // 0x28e3b4: 0xae020258  sw          $v0, 0x258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x28E3B0u, 0x28E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3B8u;
label_28e3b8:
    // 0x28e3b8: 0xa2000531  sb          $zero, 0x531($s0)
    ctx->pc = 0x28e3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e3bc: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x28e3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x28e3c0: 0x24c63f68  addiu       $a2, $a2, 0x3F68
    ctx->pc = 0x28e3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16232));
    // 0x28e3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3c8: 0xc053bd4  jal         func_14EF50
    ctx->pc = 0x28E3C8u;
    SET_GPR_U32(ctx, 31, 0x28E3D0u);
    ctx->pc = 0x28E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3C8u;
    // 0x28e3cc: 0x26050670  addiu       $a1, $s0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x28E3C8u, 0x28E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3D0u;
label_28e3d0:
    // 0x28e3d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x28e3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x28e3d4: 0x240400d7  addiu       $a0, $zero, 0xD7
    ctx->pc = 0x28e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x28e3d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e3dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28e3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e3e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x28e3e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e3e8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x28E3E8u;
    SET_GPR_U32(ctx, 31, 0x28E3F0u);
    ctx->pc = 0x28E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3E8u;
    // 0x28e3ec: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x28E3E8u, 0x28E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3F0u;
label_28e3f0:
    // 0x28e3f0: 0xae001550  sw          $zero, 0x1550($s0)
    ctx->pc = 0x28e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5456), GPR_U32(ctx, 0));
    // 0x28e3f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E3F4u;
    {
        const bool branch_taken_0x28e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3F4u;
        // 0x28e3f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3f4) {
            ctx->pc = 0x28E400u;
            goto label_28e400;
        }
    }
    ctx->pc = 0x28E3FCu;
label_28e3fc:
    // 0x28e3fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e400:
    // 0x28e400: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28e400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28e404:
    // 0x28e404: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28e404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e408: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28e408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e410: 0x3e00008  jr          $ra
    ctx->pc = 0x28E410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E410u;
        // 0x28e414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E418u;
}
