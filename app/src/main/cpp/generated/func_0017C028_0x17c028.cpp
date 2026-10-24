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

// Function: func_0017C028
// Address: 0x17c028 - 0x17c3a0
void func_0017C028_0x17c028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017C028_0x17c028");
#endif

    switch (ctx->pc) {
        case 0x17c0b4u: goto label_17c0b4;
        case 0x17c0d0u: goto label_17c0d0;
        case 0x17c0d8u: goto label_17c0d8;
        case 0x17c134u: goto label_17c134;
        case 0x17c140u: goto label_17c140;
        case 0x17c1c0u: goto label_17c1c0;
        case 0x17c1c4u: goto label_17c1c4;
        case 0x17c1f0u: goto label_17c1f0;
        case 0x17c220u: goto label_17c220;
        case 0x17c368u: goto label_17c368;
        default: break;
    }

    ctx->pc = 0x17c028u;

    // 0x17c028: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x17c028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x17c02c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x17c02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x17c030: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x17c030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x17c034: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17c034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c038: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x17c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x17c03c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x17c03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x17c040: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x17c040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x17c044: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x17c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x17c048: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x17c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x17c04c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17c04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17c050: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x17c050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x17c054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17c058: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x17c058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x17c05c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x17c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x17c060: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C060u;
    {
        const bool branch_taken_0x17c060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x17c060) {
            ctx->pc = 0x17C064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C060u;
            // 0x17c064: 0x26420100  addiu       $v0, $s2, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C084u;
            goto label_17c084;
        }
    }
    ctx->pc = 0x17C068u;
    // 0x17c068: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x17c068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c06c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17c06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17c070: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x17c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c074: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17c074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17c078: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x17c078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c07c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17c07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x17c080: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x17c080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_17c084:
    // 0x17c084: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C084u;
    {
        const bool branch_taken_0x17c084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x17c084) {
            ctx->pc = 0x17C0A4u;
            goto label_17c0a4;
        }
    }
    ctx->pc = 0x17C08Cu;
    // 0x17c08c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x17c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c090: 0xe6400100  swc1        $f0, 0x100($s2)
    ctx->pc = 0x17c090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x17c094: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x17c094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c098: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17c098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17c09c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x17c09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c0a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17c0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17c0a4:
    // 0x17c0a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17c0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17c0a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17c0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17c0ac: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x17C0ACu;
    SET_GPR_U32(ctx, 31, 0x17C0B4u);
    ctx->pc = 0x17C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0ACu;
    // 0x17c0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x17C0ACu, 0x17C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0B4u;
label_17c0b4:
    // 0x17c0b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17c0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0b8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17c0bc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x17c0bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c0c0: 0x245e1ad0  addiu       $fp, $v0, 0x1AD0
    ctx->pc = 0x17c0c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 6864));
    // 0x17c0c4: 0x26560d80  addiu       $s6, $s2, 0xD80
    ctx->pc = 0x17c0c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 3456));
    // 0x17c0c8: 0x24170050  addiu       $s7, $zero, 0x50
    ctx->pc = 0x17c0c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17c0cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17c0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c0d0:
    // 0x17c0d0: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x17c0d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17c0d4: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x17c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_17c0d8:
    // 0x17c0d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17c0dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17c0dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17c0e0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x17c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17c0e4: 0x5623002c  bnel        $s1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x17C0E4u;
    {
        const bool branch_taken_0x17c0e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x17c0e4) {
            ctx->pc = 0x17C0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C0E4u;
            // 0x17c0e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C198u;
            goto label_17c198;
        }
    }
    ctx->pc = 0x17C0ECu;
    // 0x17c0ec: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x17c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x17c0f0: 0x924502b4  lbu         $a1, 0x2B4($s2)
    ctx->pc = 0x17c0f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x17c0f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x17c0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c0f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0fc: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x17c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17c100: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C100u;
    {
        const bool branch_taken_0x17c100 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x17C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C100u;
        // 0x17c104: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c100) {
            ctx->pc = 0x17C10Cu;
            goto label_17c10c;
        }
    }
    ctx->pc = 0x17C108u;
    // 0x17c108: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x17c108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_17c10c:
    // 0x17c10c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17c10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17c110: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C110u;
    {
        const bool branch_taken_0x17c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C110u;
        // 0x17c114: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c110) {
            ctx->pc = 0x17C128u;
            goto label_17c128;
        }
    }
    ctx->pc = 0x17C118u;
    // 0x17c118: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x17c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x17c11c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17C120u;
    {
        const bool branch_taken_0x17c120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C120u;
        // 0x17c124: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c120) {
            ctx->pc = 0x17C12Cu;
            goto label_17c12c;
        }
    }
    ctx->pc = 0x17C128u;
label_17c128:
    // 0x17c128: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17c128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c12c:
    // 0x17c12c: 0xc05404e  jal         func_150138
    ctx->pc = 0x17C12Cu;
    SET_GPR_U32(ctx, 31, 0x17C134u);
    ctx->pc = 0x17C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C12Cu;
    // 0x17c130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x17C12Cu, 0x17C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C134u;
label_17c134:
    // 0x17c134: 0x8e450250  lw          $a1, 0x250($s2)
    ctx->pc = 0x17c134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x17c138: 0xc054074  jal         func_1501D0
    ctx->pc = 0x17C138u;
    SET_GPR_U32(ctx, 31, 0x17C140u);
    ctx->pc = 0x17C13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C138u;
    // 0x17c13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x17C138u, 0x17C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C140u;
label_17c140:
    // 0x17c140: 0x8e420d80  lw          $v0, 0xD80($s2)
    ctx->pc = 0x17c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3456)));
    // 0x17c144: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x17c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c148: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x17c148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17c14c: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x17c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c150: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x17c150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c154: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x17c154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17c158: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17c15c: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x17c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x17c160: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x17c160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17c164: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17c164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17c168: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x17c168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17c16c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x17c16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17c170: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c174: 0x10740007  beq         $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C174u;
    {
        const bool branch_taken_0x17c174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x17C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C174u;
        // 0x17c178: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c174) {
            ctx->pc = 0x17C194u;
            goto label_17c194;
        }
    }
    ctx->pc = 0x17C17Cu;
    // 0x17c17c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x17c17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c180: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x17c180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x17c184: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x17c184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c188: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x17c188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17c18c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x17c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c190: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x17c190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_17c194:
    // 0x17c194: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17c194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17c198:
    // 0x17c198: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x17c198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17c19c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x17C19Cu;
    {
        const bool branch_taken_0x17c19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C19Cu;
        // 0x17c1a0: 0x1117c2  srl         $v0, $s1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c19c) {
            ctx->pc = 0x17C0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c0d8;
        }
    }
    ctx->pc = 0x17C1A4u;
    // 0x17c1a4: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x17c1a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1a8: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x17c1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x17c1ac: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x17C1ACu;
    {
        const bool branch_taken_0x17c1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c1ac) {
            ctx->pc = 0x17C1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C1ACu;
            // 0x17c1b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c0d0;
        }
    }
    ctx->pc = 0x17C1B4u;
    // 0x17c1b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c1b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c1bc: 0x0  nop
    ctx->pc = 0x17c1bcu;
    // NOP
label_17c1c0:
    // 0x17c1c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17c1c4:
    // 0x17c1c4: 0x0  nop
    ctx->pc = 0x17c1c4u;
    // NOP
    // 0x17c1c8: 0x0  nop
    ctx->pc = 0x17c1c8u;
    // NOP
    // 0x17c1cc: 0x0  nop
    ctx->pc = 0x17c1ccu;
    // NOP
    // 0x17c1d0: 0x0  nop
    ctx->pc = 0x17c1d0u;
    // NOP
    // 0x17c1d4: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17C1D4u;
    {
        const bool branch_taken_0x17c1d4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x17C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1D4u;
        // 0x17c1d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1d4) {
            ctx->pc = 0x17C1C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c1c4;
        }
    }
    ctx->pc = 0x17C1DCu;
    // 0x17c1dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17c1e0: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x17c1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x17c1e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17C1E4u;
    {
        const bool branch_taken_0x17c1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1E4u;
        // 0x17c1e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1e4) {
            ctx->pc = 0x17C1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c1c0;
        }
    }
    ctx->pc = 0x17C1ECu;
    // 0x17c1ec: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x17c1ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c1f0:
    // 0x17c1f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17c1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17c1f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17c1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c1f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17c1f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c1fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c200: 0x25b10001  addiu       $s1, $t5, 0x1
    ctx->pc = 0x17c200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x17c204: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x17c204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c208: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x17c208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c20c: 0x240c0050  addiu       $t4, $zero, 0x50
    ctx->pc = 0x17c20cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17c210: 0x27af0020  addiu       $t7, $sp, 0x20
    ctx->pc = 0x17c210u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c214: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x17c214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c218: 0x27ae0010  addiu       $t6, $sp, 0x10
    ctx->pc = 0x17c218u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c21c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x17c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_17c220:
    // 0x17c220: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c224: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17c224u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17c228: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17c228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17c22c: 0x5062003c  beql        $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x17C22Cu;
    {
        const bool branch_taken_0x17c22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c22c) {
            ctx->pc = 0x17C230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C22Cu;
            // 0x17c230: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C320u;
            goto label_17c320;
        }
    }
    ctx->pc = 0x17C234u;
    // 0x17c234: 0x12a001a  div         $zero, $t1, $t2
    ctx->pc = 0x17c234u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17c238: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17C238u;
    {
        const bool branch_taken_0x17c238 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c238) {
            ctx->pc = 0x17C23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C238u;
            // 0x17c23c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C240u;
            goto label_17c240;
        }
    }
    ctx->pc = 0x17C240u;
label_17c240:
    // 0x17c240: 0x8e450d80  lw          $a1, 0xD80($s2)
    ctx->pc = 0x17c240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3456)));
    // 0x17c244: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x17c244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x17c248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c24c: 0x0  nop
    ctx->pc = 0x17c24cu;
    // NOP
    // 0x17c250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c254: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x17c254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17c258: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17c258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17c25c: 0x2010  mfhi        $a0
    ctx->pc = 0x17c25cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x17c260: 0xad1018  mult        $v0, $a1, $t5
    ctx->pc = 0x17c260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17c264: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x17c264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x17c268: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x17c268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x17c26c: 0x6c1018  mult        $v0, $v1, $t4
    ctx->pc = 0x17c26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17c270: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x17c270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17c274: 0x1441023  subu        $v0, $t2, $a0
    ctx->pc = 0x17c274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x17c278: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x17c278u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17c27c: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x17c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x17c280: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17c280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17c284: 0x1810  mfhi        $v1
    ctx->pc = 0x17c284u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x17c288: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x17c288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x17c28c: 0x8c2018  mult        $a0, $a0, $t4
    ctx->pc = 0x17c28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17c290: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x17c290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17c294: 0xac1018  mult        $v0, $a1, $t4
    ctx->pc = 0x17c294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17c298: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x17c298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17c29c: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x17c29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17c2a0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x17c2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17c2a4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x17c2a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c2a8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x17c2a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c2ac: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17c2acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17c2b0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17c2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17c2b4: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x17c2b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17c2b8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17c2bc: 0xd9e40000  lqc2        $vf4, 0x0($t7)
    ctx->pc = 0x17c2bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x17c2c0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17c2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17c2c4: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17c2c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c2c8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x17c2c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x17c2cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17c2ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17c2d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x17c2d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17c2d4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17c2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17c2d8: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x17c2d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17c2dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17c2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17c2e0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x17c2e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c2e4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17c2e8: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17c2e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c2ec: 0xd9c50000  lqc2        $vf5, 0x0($t6)
    ctx->pc = 0x17c2ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x17c2f0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17c2f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17c2f4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17c2f8: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x17c2f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17c2fc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x17c2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17c300: 0x10fd0006  beq         $a3, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C300u;
    {
        const bool branch_taken_0x17c300 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 29));
        ctx->pc = 0x17C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C300u;
        // 0x17c304: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c300) {
            ctx->pc = 0x17C31Cu;
            goto label_17c31c;
        }
    }
    ctx->pc = 0x17C308u;
    // 0x17c308: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x17c308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x17c30c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x17c30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c310: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x17c310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x17c314: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17c314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c318: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x17c318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_17c31c:
    // 0x17c31c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17c31cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_17c320:
    // 0x17c320: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x17c320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c324: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x17c324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17c328: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x17C328u;
    {
        const bool branch_taken_0x17c328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C328u;
        // 0x17c32c: 0x317c2  srl         $v0, $v1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c328) {
            ctx->pc = 0x17C220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c220;
        }
    }
    ctx->pc = 0x17C330u;
    // 0x17c330: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x17c330u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c334: 0x29a20005  slti        $v0, $t5, 0x5
    ctx->pc = 0x17c334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x17c338: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x17C338u;
    {
        const bool branch_taken_0x17c338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C338u;
        // 0x17c33c: 0x3c060042  lui         $a2, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c338) {
            ctx->pc = 0x17C1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c1f0;
        }
    }
    ctx->pc = 0x17C340u;
    // 0x17c340: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x17c340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x17c344: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17c344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c348: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x17c348u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x17c34c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17c34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c350: 0x24c61ae0  addiu       $a2, $a2, 0x1AE0
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6880));
    // 0x17c354: 0x25081b20  addiu       $t0, $t0, 0x1B20
    ctx->pc = 0x17c354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6944));
    // 0x17c358: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x17c358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x17c35c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x17c35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17c360: 0xc0ab4ae  jal         func_2AD2B8
    ctx->pc = 0x17C360u;
    SET_GPR_U32(ctx, 31, 0x17C368u);
    ctx->pc = 0x17C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C360u;
    // 0x17c364: 0x2409001e  addiu       $t1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD2B8u, 0x17C360u, 0x17C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C368u;
label_17c368:
    // 0x17c368: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x17c368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17c36c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x17c36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17c370: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x17c370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17c374: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x17c374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17c378: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x17c378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17c37c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x17c37cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c380: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x17c380u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17c384: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17c384u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17c388: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x17c388u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c38c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c390: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x17c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c394: 0x3e00008  jr          $ra
    ctx->pc = 0x17C394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C394u;
        // 0x17c398: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C39Cu;
    // 0x17c39c: 0x0  nop
    ctx->pc = 0x17c39cu;
    // NOP
    ctx->pc = 0x17c3a0u;
}
