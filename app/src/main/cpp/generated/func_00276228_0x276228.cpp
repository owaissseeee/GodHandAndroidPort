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

// Function: func_00276228
// Address: 0x276228 - 0x276468
void func_00276228_0x276228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00276228_0x276228");
#endif

    switch (ctx->pc) {
        case 0x27629cu: goto label_27629c;
        case 0x2762a8u: goto label_2762a8;
        case 0x2762b0u: goto label_2762b0;
        case 0x2762c4u: goto label_2762c4;
        case 0x2762ccu: goto label_2762cc;
        case 0x2762e0u: goto label_2762e0;
        case 0x2762e8u: goto label_2762e8;
        case 0x2762fcu: goto label_2762fc;
        case 0x276304u: goto label_276304;
        case 0x276318u: goto label_276318;
        case 0x276320u: goto label_276320;
        case 0x276334u: goto label_276334;
        case 0x27633cu: goto label_27633c;
        case 0x276350u: goto label_276350;
        case 0x276358u: goto label_276358;
        case 0x27636cu: goto label_27636c;
        case 0x276374u: goto label_276374;
        case 0x276388u: goto label_276388;
        case 0x276390u: goto label_276390;
        case 0x2763a4u: goto label_2763a4;
        case 0x2763acu: goto label_2763ac;
        case 0x2763c0u: goto label_2763c0;
        case 0x2763c8u: goto label_2763c8;
        case 0x2763dcu: goto label_2763dc;
        case 0x2763e4u: goto label_2763e4;
        case 0x2763f8u: goto label_2763f8;
        case 0x276400u: goto label_276400;
        case 0x276414u: goto label_276414;
        case 0x27641cu: goto label_27641c;
        case 0x276430u: goto label_276430;
        case 0x276438u: goto label_276438;
        case 0x27644cu: goto label_27644c;
        case 0x276454u: goto label_276454;
        default: break;
    }

    ctx->pc = 0x276228u;

    // 0x276228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27622c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x276230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276238: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x276238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x27623c: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27623Cu;
    {
        const bool branch_taken_0x27623c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x27623c) {
            ctx->pc = 0x276240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27623Cu;
            // 0x276240: 0x26020490  addiu       $v0, $s0, 0x490 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276260u;
            goto label_276260;
        }
    }
    ctx->pc = 0x276244u;
    // 0x276244: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x276244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276248: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x276248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27624c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x27624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276250: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x276250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x276254: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x276254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276258: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27625c: 0x26020490  addiu       $v0, $s0, 0x490
    ctx->pc = 0x27625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_276260:
    // 0x276260: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x276260u;
    {
        const bool branch_taken_0x276260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x276264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276260u;
        // 0x276264: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276260) {
            ctx->pc = 0x276280u;
            goto label_276280;
        }
    }
    ctx->pc = 0x276268u;
    // 0x276268: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x276268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x27626c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x27626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276270: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x276270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x276274: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x276274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276278: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27627c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x27627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276280:
    // 0x276280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276284: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x276284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x276288: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x276288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27628c: 0xe60100b4  swc1        $f1, 0xB4($s0)
    ctx->pc = 0x27628cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x276290: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x276290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276294: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x276294u;
    SET_GPR_U32(ctx, 31, 0x27629Cu);
    ctx->pc = 0x276298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276294u;
    // 0x276298: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x276294u, 0x27629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27629Cu;
label_27629c:
    // 0x27629c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27629cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762a0: 0xc054a88  jal         func_152A20
    ctx->pc = 0x2762A0u;
    SET_GPR_U32(ctx, 31, 0x2762A8u);
    ctx->pc = 0x2762A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762A0u;
    // 0x2762a4: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x2762A0u, 0x2762A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762A8u;
label_2762a8:
    // 0x2762a8: 0xc05280e  jal         func_14A038
    ctx->pc = 0x2762A8u;
    SET_GPR_U32(ctx, 31, 0x2762B0u);
    ctx->pc = 0x2762ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762A8u;
    // 0x2762ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x2762A8u, 0x2762B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762B0u;
label_2762b0:
    // 0x2762b0: 0x8e0406ec  lw          $a0, 0x6EC($s0)
    ctx->pc = 0x2762b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x2762b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2762B4u;
    {
        const bool branch_taken_0x2762b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2762b4) {
            ctx->pc = 0x2762B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2762B4u;
            // 0x2762b8: 0x8e0406f0  lw          $a0, 0x6F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2762D0u;
            goto label_2762d0;
        }
    }
    ctx->pc = 0x2762BCu;
    // 0x2762bc: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x2762BCu;
    SET_GPR_U32(ctx, 31, 0x2762C4u);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x2762BCu, 0x2762C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762C4u;
label_2762c4:
    // 0x2762c4: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2762C4u;
    SET_GPR_U32(ctx, 31, 0x2762CCu);
    ctx->pc = 0x2762C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762C4u;
    // 0x2762c8: 0x8e0406ec  lw          $a0, 0x6EC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2762C4u, 0x2762CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762CCu;
label_2762cc:
    // 0x2762cc: 0x8e0406f0  lw          $a0, 0x6F0($s0)
    ctx->pc = 0x2762ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
label_2762d0:
    // 0x2762d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2762D0u;
    {
        const bool branch_taken_0x2762d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2762d0) {
            ctx->pc = 0x2762D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2762D0u;
            // 0x2762d4: 0x8e0406f8  lw          $a0, 0x6F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2762ECu;
            goto label_2762ec;
        }
    }
    ctx->pc = 0x2762D8u;
    // 0x2762d8: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x2762D8u;
    SET_GPR_U32(ctx, 31, 0x2762E0u);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x2762D8u, 0x2762E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762E0u;
label_2762e0:
    // 0x2762e0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2762E0u;
    SET_GPR_U32(ctx, 31, 0x2762E8u);
    ctx->pc = 0x2762E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762E0u;
    // 0x2762e4: 0x8e0406f0  lw          $a0, 0x6F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2762E0u, 0x2762E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762E8u;
label_2762e8:
    // 0x2762e8: 0x8e0406f8  lw          $a0, 0x6F8($s0)
    ctx->pc = 0x2762e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1784)));
label_2762ec:
    // 0x2762ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2762ECu;
    {
        const bool branch_taken_0x2762ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2762ec) {
            ctx->pc = 0x2762F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2762ECu;
            // 0x2762f0: 0x8e0406fc  lw          $a0, 0x6FC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276308u;
            goto label_276308;
        }
    }
    ctx->pc = 0x2762F4u;
    // 0x2762f4: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x2762F4u;
    SET_GPR_U32(ctx, 31, 0x2762FCu);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x2762F4u, 0x2762FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762FCu;
label_2762fc:
    // 0x2762fc: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2762FCu;
    SET_GPR_U32(ctx, 31, 0x276304u);
    ctx->pc = 0x276300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762FCu;
    // 0x276300: 0x8e0406f8  lw          $a0, 0x6F8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2762FCu, 0x276304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276304u;
label_276304:
    // 0x276304: 0x8e0406fc  lw          $a0, 0x6FC($s0)
    ctx->pc = 0x276304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1788)));
label_276308:
    // 0x276308: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x276308u;
    {
        const bool branch_taken_0x276308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276308) {
            ctx->pc = 0x27630Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276308u;
            // 0x27630c: 0x8e040700  lw          $a0, 0x700($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276324u;
            goto label_276324;
        }
    }
    ctx->pc = 0x276310u;
    // 0x276310: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x276310u;
    SET_GPR_U32(ctx, 31, 0x276318u);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x276310u, 0x276318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276318u;
label_276318:
    // 0x276318: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x276318u;
    SET_GPR_U32(ctx, 31, 0x276320u);
    ctx->pc = 0x27631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276318u;
    // 0x27631c: 0x8e0406fc  lw          $a0, 0x6FC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x276318u, 0x276320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276320u;
label_276320:
    // 0x276320: 0x8e040700  lw          $a0, 0x700($s0)
    ctx->pc = 0x276320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
label_276324:
    // 0x276324: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x276324u;
    {
        const bool branch_taken_0x276324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276324) {
            ctx->pc = 0x276328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276324u;
            // 0x276328: 0x8e040704  lw          $a0, 0x704($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276340u;
            goto label_276340;
        }
    }
    ctx->pc = 0x27632Cu;
    // 0x27632c: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x27632Cu;
    SET_GPR_U32(ctx, 31, 0x276334u);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x27632Cu, 0x276334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276334u;
label_276334:
    // 0x276334: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x276334u;
    SET_GPR_U32(ctx, 31, 0x27633Cu);
    ctx->pc = 0x276338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276334u;
    // 0x276338: 0x8e040700  lw          $a0, 0x700($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x276334u, 0x27633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27633Cu;
label_27633c:
    // 0x27633c: 0x8e040704  lw          $a0, 0x704($s0)
    ctx->pc = 0x27633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_276340:
    // 0x276340: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x276340u;
    {
        const bool branch_taken_0x276340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276340) {
            ctx->pc = 0x276344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276340u;
            // 0x276344: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27635Cu;
            goto label_27635c;
        }
    }
    ctx->pc = 0x276348u;
    // 0x276348: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x276348u;
    SET_GPR_U32(ctx, 31, 0x276350u);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x276348u, 0x276350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276350u;
label_276350:
    // 0x276350: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x276350u;
    SET_GPR_U32(ctx, 31, 0x276358u);
    ctx->pc = 0x276354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276350u;
    // 0x276354: 0x8e040704  lw          $a0, 0x704($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x276350u, 0x276358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276358u;
label_276358:
    // 0x276358: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x276358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_27635c:
    // 0x27635c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27635Cu;
    {
        const bool branch_taken_0x27635c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27635c) {
            ctx->pc = 0x276360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27635Cu;
            // 0x276360: 0x8e040734  lw          $a0, 0x734($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276378u;
            goto label_276378;
        }
    }
    ctx->pc = 0x276364u;
    // 0x276364: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x276364u;
    SET_GPR_U32(ctx, 31, 0x27636Cu);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x276364u, 0x27636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27636Cu;
label_27636c:
    // 0x27636c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x27636Cu;
    SET_GPR_U32(ctx, 31, 0x276374u);
    ctx->pc = 0x276370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27636Cu;
    // 0x276370: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27636Cu, 0x276374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276374u;
label_276374:
    // 0x276374: 0x8e040734  lw          $a0, 0x734($s0)
    ctx->pc = 0x276374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
label_276378:
    // 0x276378: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x276378u;
    {
        const bool branch_taken_0x276378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276378) {
            ctx->pc = 0x27637Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276378u;
            // 0x27637c: 0x8e0406f4  lw          $a0, 0x6F4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276394u;
            goto label_276394;
        }
    }
    ctx->pc = 0x276380u;
    // 0x276380: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x276380u;
    SET_GPR_U32(ctx, 31, 0x276388u);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x276380u, 0x276388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276388u;
label_276388:
    // 0x276388: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x276388u;
    SET_GPR_U32(ctx, 31, 0x276390u);
    ctx->pc = 0x27638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276388u;
    // 0x27638c: 0x8e040734  lw          $a0, 0x734($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x276388u, 0x276390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276390u;
label_276390:
    // 0x276390: 0x8e0406f4  lw          $a0, 0x6F4($s0)
    ctx->pc = 0x276390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
label_276394:
    // 0x276394: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x276394u;
    {
        const bool branch_taken_0x276394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276394) {
            ctx->pc = 0x276398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276394u;
            // 0x276398: 0x8e04070c  lw          $a0, 0x70C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2763B0u;
            goto label_2763b0;
        }
    }
    ctx->pc = 0x27639Cu;
    // 0x27639c: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x27639Cu;
    SET_GPR_U32(ctx, 31, 0x2763A4u);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x27639Cu, 0x2763A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763A4u;
label_2763a4:
    // 0x2763a4: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2763A4u;
    SET_GPR_U32(ctx, 31, 0x2763ACu);
    ctx->pc = 0x2763A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2763A4u;
    // 0x2763a8: 0x8e0406f4  lw          $a0, 0x6F4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2763A4u, 0x2763ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763ACu;
label_2763ac:
    // 0x2763ac: 0x8e04070c  lw          $a0, 0x70C($s0)
    ctx->pc = 0x2763acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_2763b0:
    // 0x2763b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2763B0u;
    {
        const bool branch_taken_0x2763b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2763b0) {
            ctx->pc = 0x2763B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2763B0u;
            // 0x2763b4: 0x8e040740  lw          $a0, 0x740($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2763CCu;
            goto label_2763cc;
        }
    }
    ctx->pc = 0x2763B8u;
    // 0x2763b8: 0xc0708de  jal         func_1C2378
    ctx->pc = 0x2763B8u;
    SET_GPR_U32(ctx, 31, 0x2763C0u);
    ctx->pc = 0x1C2378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2378u, 0x2763B8u, 0x2763C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763C0u;
label_2763c0:
    // 0x2763c0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2763C0u;
    SET_GPR_U32(ctx, 31, 0x2763C8u);
    ctx->pc = 0x2763C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2763C0u;
    // 0x2763c4: 0x8e04070c  lw          $a0, 0x70C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2763C0u, 0x2763C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763C8u;
label_2763c8:
    // 0x2763c8: 0x8e040740  lw          $a0, 0x740($s0)
    ctx->pc = 0x2763c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
label_2763cc:
    // 0x2763cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2763CCu;
    {
        const bool branch_taken_0x2763cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2763cc) {
            ctx->pc = 0x2763D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2763CCu;
            // 0x2763d0: 0x8e040744  lw          $a0, 0x744($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2763E8u;
            goto label_2763e8;
        }
    }
    ctx->pc = 0x2763D4u;
    // 0x2763d4: 0xc09f4c0  jal         func_27D300
    ctx->pc = 0x2763D4u;
    SET_GPR_U32(ctx, 31, 0x2763DCu);
    ctx->pc = 0x27D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D300u, 0x2763D4u, 0x2763DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763DCu;
label_2763dc:
    // 0x2763dc: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2763DCu;
    SET_GPR_U32(ctx, 31, 0x2763E4u);
    ctx->pc = 0x2763E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2763DCu;
    // 0x2763e0: 0x8e040740  lw          $a0, 0x740($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2763DCu, 0x2763E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763E4u;
label_2763e4:
    // 0x2763e4: 0x8e040744  lw          $a0, 0x744($s0)
    ctx->pc = 0x2763e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
label_2763e8:
    // 0x2763e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2763E8u;
    {
        const bool branch_taken_0x2763e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2763e8) {
            ctx->pc = 0x2763ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2763E8u;
            // 0x2763ec: 0x8e040748  lw          $a0, 0x748($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276404u;
            goto label_276404;
        }
    }
    ctx->pc = 0x2763F0u;
    // 0x2763f0: 0xc09fa54  jal         func_27E950
    ctx->pc = 0x2763F0u;
    SET_GPR_U32(ctx, 31, 0x2763F8u);
    ctx->pc = 0x27E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E950u, 0x2763F0u, 0x2763F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763F8u;
label_2763f8:
    // 0x2763f8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2763F8u;
    SET_GPR_U32(ctx, 31, 0x276400u);
    ctx->pc = 0x2763FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2763F8u;
    // 0x2763fc: 0x8e040744  lw          $a0, 0x744($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2763F8u, 0x276400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276400u;
label_276400:
    // 0x276400: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x276400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
label_276404:
    // 0x276404: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x276404u;
    {
        const bool branch_taken_0x276404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276404) {
            ctx->pc = 0x276408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276404u;
            // 0x276408: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276420u;
            goto label_276420;
        }
    }
    ctx->pc = 0x27640Cu;
    // 0x27640c: 0xc0a036e  jal         func_280DB8
    ctx->pc = 0x27640Cu;
    SET_GPR_U32(ctx, 31, 0x276414u);
    ctx->pc = 0x280DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280DB8u, 0x27640Cu, 0x276414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276414u;
label_276414:
    // 0x276414: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x276414u;
    SET_GPR_U32(ctx, 31, 0x27641Cu);
    ctx->pc = 0x276418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276414u;
    // 0x276418: 0x8e040748  lw          $a0, 0x748($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x276414u, 0x27641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27641Cu;
label_27641c:
    // 0x27641c: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x27641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_276420:
    // 0x276420: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x276420u;
    {
        const bool branch_taken_0x276420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276420) {
            ctx->pc = 0x276424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276420u;
            // 0x276424: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27643Cu;
            goto label_27643c;
        }
    }
    ctx->pc = 0x276428u;
    // 0x276428: 0xc0a0c1c  jal         func_283070
    ctx->pc = 0x276428u;
    SET_GPR_U32(ctx, 31, 0x276430u);
    ctx->pc = 0x283070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283070u, 0x276428u, 0x276430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276430u;
label_276430:
    // 0x276430: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x276430u;
    SET_GPR_U32(ctx, 31, 0x276438u);
    ctx->pc = 0x276434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276430u;
    // 0x276434: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x276430u, 0x276438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276438u;
label_276438:
    // 0x276438: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x276438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_27643c:
    // 0x27643c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27643Cu;
    {
        const bool branch_taken_0x27643c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27643c) {
            ctx->pc = 0x276440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27643Cu;
            // 0x276440: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276458u;
            goto label_276458;
        }
    }
    ctx->pc = 0x276444u;
    // 0x276444: 0xc0a0c1c  jal         func_283070
    ctx->pc = 0x276444u;
    SET_GPR_U32(ctx, 31, 0x27644Cu);
    ctx->pc = 0x283070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283070u, 0x276444u, 0x27644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27644Cu;
label_27644c:
    // 0x27644c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x27644Cu;
    SET_GPR_U32(ctx, 31, 0x276454u);
    ctx->pc = 0x276450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27644Cu;
    // 0x276450: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27644Cu, 0x276454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276454u;
label_276454:
    // 0x276454: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x276454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_276458:
    // 0x276458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27645c: 0x3e00008  jr          $ra
    ctx->pc = 0x27645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27645Cu;
        // 0x276460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27645Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276464u;
    // 0x276464: 0x0  nop
    ctx->pc = 0x276464u;
    // NOP
    ctx->pc = 0x276468u;
}
