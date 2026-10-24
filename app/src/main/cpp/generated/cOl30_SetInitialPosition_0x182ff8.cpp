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

// Function: cOl30_SetInitialPosition
// Address: 0x182ff8 - 0x183240
void cOl30_SetInitialPosition_0x182ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl30_SetInitialPosition_0x182ff8");
#endif

    switch (ctx->pc) {
        case 0x183084u: goto label_183084;
        case 0x1830a0u: goto label_1830a0;
        case 0x1830a8u: goto label_1830a8;
        case 0x1830ecu: goto label_1830ec;
        case 0x1830f8u: goto label_1830f8;
        case 0x183178u: goto label_183178;
        case 0x18317cu: goto label_18317c;
        case 0x1831b0u: goto label_1831b0;
        case 0x1831b8u: goto label_1831b8;
        case 0x18320cu: goto label_18320c;
        default: break;
    }

    ctx->pc = 0x182ff8u;

    // 0x182ff8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x182ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x182ffc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x182ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x183000: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x183000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x183004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183008: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x183008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x18300c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x18300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x183010: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x183010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x183014: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x183014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x183018: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x183018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x18301c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x183020: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x183020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x183024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x183024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x183028: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x183028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18302c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x18302cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x183030: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x183030u;
    {
        const bool branch_taken_0x183030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x183030) {
            ctx->pc = 0x183034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183030u;
            // 0x183034: 0x26220100  addiu       $v0, $s1, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183054u;
            goto label_183054;
        }
    }
    ctx->pc = 0x183038u;
    // 0x183038: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x183038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18303c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x18303cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x183040: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x183040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183044: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x183044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x183048: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x183048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18304c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x183050: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x183050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_183054:
    // 0x183054: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x183054u;
    {
        const bool branch_taken_0x183054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x183054) {
            ctx->pc = 0x183074u;
            goto label_183074;
        }
    }
    ctx->pc = 0x18305Cu;
    // 0x18305c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x18305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183060: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x183060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x183064: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x183064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183068: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x183068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18306c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x18306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183070: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x183070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_183074:
    // 0x183074: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x183074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183078: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x183078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18307c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x18307Cu;
    SET_GPR_U32(ctx, 31, 0x183084u);
    ctx->pc = 0x183080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18307Cu;
    // 0x183080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x18307Cu, 0x183084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183084u;
label_183084:
    // 0x183084: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x183084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183088: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x183088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18308c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x18308cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183090: 0x245e2a10  addiu       $fp, $v0, 0x2A10
    ctx->pc = 0x183090u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
    // 0x183094: 0x26360b10  addiu       $s6, $s1, 0xB10
    ctx->pc = 0x183094u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2832));
    // 0x183098: 0x24170050  addiu       $s7, $zero, 0x50
    ctx->pc = 0x183098u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x18309c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18309cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1830a0:
    // 0x1830a0: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x1830a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1830a4: 0x25e1021  addu        $v0, $s2, $fp
    ctx->pc = 0x1830a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_1830a8:
    // 0x1830a8: 0x922502b4  lbu         $a1, 0x2B4($s1)
    ctx->pc = 0x1830a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1830ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1830acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1830b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1830b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830b4: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x1830b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1830b8: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1830B8u;
    {
        const bool branch_taken_0x1830b8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1830BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830B8u;
        // 0x1830bc: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830b8) {
            ctx->pc = 0x1830C4u;
            goto label_1830c4;
        }
    }
    ctx->pc = 0x1830C0u;
    // 0x1830c0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1830c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1830c4:
    // 0x1830c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1830c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1830c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1830C8u;
    {
        const bool branch_taken_0x1830c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1830CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830C8u;
        // 0x1830cc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830c8) {
            ctx->pc = 0x1830E0u;
            goto label_1830e0;
        }
    }
    ctx->pc = 0x1830D0u;
    // 0x1830d0: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1830d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1830d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1830d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1830d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1830D8u;
    {
        const bool branch_taken_0x1830d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1830DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830D8u;
        // 0x1830dc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830d8) {
            ctx->pc = 0x1830E4u;
            goto label_1830e4;
        }
    }
    ctx->pc = 0x1830E0u;
label_1830e0:
    // 0x1830e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1830e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1830e4:
    // 0x1830e4: 0xc05404e  jal         func_150138
    ctx->pc = 0x1830E4u;
    SET_GPR_U32(ctx, 31, 0x1830ECu);
    ctx->pc = 0x1830E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1830E4u;
    // 0x1830e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x1830E4u, 0x1830ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830ECu;
label_1830ec:
    // 0x1830ec: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x1830ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1830f0: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1830F0u;
    SET_GPR_U32(ctx, 31, 0x1830F8u);
    ctx->pc = 0x1830F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1830F0u;
    // 0x1830f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1830F0u, 0x1830F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830F8u;
label_1830f8:
    // 0x1830f8: 0x8e220b10  lw          $v0, 0xB10($s1)
    ctx->pc = 0x1830f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2832)));
    // 0x1830fc: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x1830fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x183100: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x183100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x183104: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x183104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183108: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x183108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18310c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x18310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x183110: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x183110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x183114: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x183114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x183118: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x183118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18311c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18311cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x183120: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x183120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x183124: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x183124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x183128: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x183128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18312c: 0x10740007  beq         $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x18312Cu;
    {
        const bool branch_taken_0x18312c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x183130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18312Cu;
        // 0x183130: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18312c) {
            ctx->pc = 0x18314Cu;
            goto label_18314c;
        }
    }
    ctx->pc = 0x183134u;
    // 0x183134: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x183134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183138: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x183138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18313c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183140: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x183140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x183144: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x183144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183148: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x183148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18314c:
    // 0x18314c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18314cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x183150: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x183150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x183154: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x183154u;
    {
        const bool branch_taken_0x183154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183154u;
        // 0x183158: 0x25e1021  addu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183154) {
            ctx->pc = 0x1830A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1830a8;
        }
    }
    ctx->pc = 0x18315Cu;
    // 0x18315c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x18315cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183160: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x183160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x183164: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x183164u;
    {
        const bool branch_taken_0x183164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183164) {
            ctx->pc = 0x183168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183164u;
            // 0x183168: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1830A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1830a0;
        }
    }
    ctx->pc = 0x18316Cu;
    // 0x18316c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18316cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183170: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x183170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x183174: 0x0  nop
    ctx->pc = 0x183174u;
    // NOP
label_183178:
    // 0x183178: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18317c:
    // 0x18317c: 0x0  nop
    ctx->pc = 0x18317cu;
    // NOP
    // 0x183180: 0x0  nop
    ctx->pc = 0x183180u;
    // NOP
    // 0x183184: 0x0  nop
    ctx->pc = 0x183184u;
    // NOP
    // 0x183188: 0x0  nop
    ctx->pc = 0x183188u;
    // NOP
    // 0x18318c: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18318Cu;
    {
        const bool branch_taken_0x18318c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x183190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18318Cu;
        // 0x183190: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18318c) {
            ctx->pc = 0x18317Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18317c;
        }
    }
    ctx->pc = 0x183194u;
    // 0x183194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x183194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x183198: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x183198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18319c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18319Cu;
    {
        const bool branch_taken_0x18319c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1831A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18319Cu;
        // 0x1831a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18319c) {
            ctx->pc = 0x183178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183178;
        }
    }
    ctx->pc = 0x1831A4u;
    // 0x1831a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1831a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831a8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1831a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1831ac: 0x0  nop
    ctx->pc = 0x1831acu;
    // NOP
label_1831b0:
    // 0x1831b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1831b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1831b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1831b8:
    // 0x1831b8: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x1831b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1831bc: 0x0  nop
    ctx->pc = 0x1831bcu;
    // NOP
    // 0x1831c0: 0x0  nop
    ctx->pc = 0x1831c0u;
    // NOP
    // 0x1831c4: 0x0  nop
    ctx->pc = 0x1831c4u;
    // NOP
    // 0x1831c8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1831C8u;
    {
        const bool branch_taken_0x1831c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1831CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831C8u;
        // 0x1831cc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1831c8) {
            ctx->pc = 0x1831B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1831b8;
        }
    }
    ctx->pc = 0x1831D0u;
    // 0x1831d0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1831d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831d4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1831d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1831d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1831D8u;
    {
        const bool branch_taken_0x1831d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1831DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831D8u;
        // 0x1831dc: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1831d8) {
            ctx->pc = 0x1831B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1831b0;
        }
    }
    ctx->pc = 0x1831E0u;
    // 0x1831e0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1831e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1831e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1831e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1831e8: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x1831e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x1831ec: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x1831ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x1831f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1831f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831f4: 0x24c62a20  addiu       $a2, $a2, 0x2A20
    ctx->pc = 0x1831f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10784));
    // 0x1831f8: 0x25082a58  addiu       $t0, $t0, 0x2A58
    ctx->pc = 0x1831f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10840));
    // 0x1831fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1831fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x183200: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x183200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x183204: 0xc0ab4ae  jal         func_2AD2B8
    ctx->pc = 0x183204u;
    SET_GPR_U32(ctx, 31, 0x18320Cu);
    ctx->pc = 0x183208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183204u;
    // 0x183208: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD2B8u, 0x183204u, 0x18320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18320Cu;
label_18320c:
    // 0x18320c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x18320cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x183210: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x183210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x183214: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x183214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x183218: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x183218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18321c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x18321cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x183220: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x183220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183224: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x183224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x183228: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x183228u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18322c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x18322cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183230: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x183230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183234: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x183234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183238: 0x3e00008  jr          $ra
    ctx->pc = 0x183238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183238u;
        // 0x18323c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183240u;
}
