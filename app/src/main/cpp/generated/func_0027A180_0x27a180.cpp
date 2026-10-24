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

// Function: func_0027A180
// Address: 0x27a180 - 0x27a2b8
void func_0027A180_0x27a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027A180_0x27a180");
#endif

    switch (ctx->pc) {
        case 0x27a1b8u: goto label_27a1b8;
        case 0x27a294u: goto label_27a294;
        case 0x27a29cu: goto label_27a29c;
        default: break;
    }

    ctx->pc = 0x27a180u;

    // 0x27a180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27a184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a188: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27a18c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27a18cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a190: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27a194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a19c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27a19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1a0: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x27a1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27a1a4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x27a1a8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x27a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x27a1ac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27a1b0: 0xc0525ce  jal         func_149738
    ctx->pc = 0x27A1B0u;
    SET_GPR_U32(ctx, 31, 0x27A1B8u);
    ctx->pc = 0x27A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A1B0u;
    // 0x27a1b4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x27A1B0u, 0x27A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A1B8u;
label_27a1b8:
    // 0x27a1b8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27A1B8u;
    {
        const bool branch_taken_0x27a1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1B8u;
        // 0x27a1bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1b8) {
            ctx->pc = 0x27A29Cu;
            goto label_27a29c;
        }
    }
    ctx->pc = 0x27A1C0u;
    // 0x27a1c0: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x27a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x27a1c4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x27a1c8: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x27a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x27a1cc: 0x920602b4  lbu         $a2, 0x2B4($s0)
    ctx->pc = 0x27a1ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27a1d0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27a1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27a1d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x27a1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x27a1d8: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x27a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x27a1dc: 0xa2050531  sb          $a1, 0x531($s0)
    ctx->pc = 0x27a1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 5));
    // 0x27a1e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27a1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a1e4: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x27a1e8: 0xae0021b0  sw          $zero, 0x21B0($s0)
    ctx->pc = 0x27a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8624), GPR_U32(ctx, 0));
    // 0x27a1ec: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A1ECu;
    {
        const bool branch_taken_0x27a1ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1ECu;
        // 0x27a1f0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1ec) {
            ctx->pc = 0x27A200u;
            goto label_27a200;
        }
    }
    ctx->pc = 0x27A1F4u;
    // 0x27a1f4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27a1f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A1F8u;
    {
        const bool branch_taken_0x27a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1F8u;
        // 0x27a1fc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1f8) {
            ctx->pc = 0x27A204u;
            goto label_27a204;
        }
    }
    ctx->pc = 0x27A200u;
label_27a200:
    // 0x27a200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a204:
    // 0x27a204: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27A204u;
    {
        const bool branch_taken_0x27a204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a204) {
            ctx->pc = 0x27A28Cu;
            goto label_27a28c;
        }
    }
    ctx->pc = 0x27A20Cu;
    // 0x27a20c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27a20cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27a210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A210u;
    {
        const bool branch_taken_0x27a210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A210u;
        // 0x27a214: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a210) {
            ctx->pc = 0x27A224u;
            goto label_27a224;
        }
    }
    ctx->pc = 0x27A218u;
    // 0x27a218: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27a21c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A21Cu;
    {
        const bool branch_taken_0x27a21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A21Cu;
        // 0x27a220: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a21c) {
            ctx->pc = 0x27A228u;
            goto label_27a228;
        }
    }
    ctx->pc = 0x27A224u;
label_27a224:
    // 0x27a224: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27a224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a228:
    // 0x27a228: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x27a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x27a22c: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x27a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x27a230: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x27a230u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a238: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x27a238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x27a23c: 0xe48100e0  swc1        $f1, 0xE0($a0)
    ctx->pc = 0x27a23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x27a240: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27a240u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a244: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x27a244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27a248: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x27a248u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a24c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x27a24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x27a250: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27a250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27a254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A254u;
    {
        const bool branch_taken_0x27a254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A254u;
        // 0x27a258: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a254) {
            ctx->pc = 0x27A268u;
            goto label_27a268;
        }
    }
    ctx->pc = 0x27A25Cu;
    // 0x27a25c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27a260: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A260u;
    {
        const bool branch_taken_0x27a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A260u;
        // 0x27a264: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a260) {
            ctx->pc = 0x27A26Cu;
            goto label_27a26c;
        }
    }
    ctx->pc = 0x27A268u;
label_27a268:
    // 0x27a268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a26c:
    // 0x27a26c: 0xc4a0d880  lwc1        $f0, -0x2780($a1)
    ctx->pc = 0x27a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a270: 0x24a3d880  addiu       $v1, $a1, -0x2780
    ctx->pc = 0x27a270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x27a274: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x27a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x27a278: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x27a278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27a27c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a280: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27a280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27a284: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27a284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a288: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27a288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27a28c:
    // 0x27a28c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x27A28Cu;
    SET_GPR_U32(ctx, 31, 0x27A294u);
    ctx->pc = 0x27A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A28Cu;
    // 0x27a290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27A28Cu, 0x27A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A294u;
label_27a294:
    // 0x27a294: 0xc09e980  jal         func_27A600
    ctx->pc = 0x27A294u;
    SET_GPR_U32(ctx, 31, 0x27A29Cu);
    ctx->pc = 0x27A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A294u;
    // 0x27a298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A600u, 0x27A294u, 0x27A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A29Cu;
label_27a29c:
    // 0x27a29c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27a29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27a2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a2a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27a2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a2a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x27A2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2ACu;
        // 0x27a2b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A2B4u;
    // 0x27a2b4: 0x0  nop
    ctx->pc = 0x27a2b4u;
    // NOP
    ctx->pc = 0x27a2b8u;
}
