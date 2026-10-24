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

// Function: cModel_calcWorldParts
// Address: 0x14a038 - 0x14a170
void cModel_calcWorldParts_0x14a038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_calcWorldParts_0x14a038");
#endif

    switch (ctx->pc) {
        case 0x14a08cu: goto label_14a08c;
        case 0x14a0c8u: goto label_14a0c8;
        case 0x14a108u: goto label_14a108;
        case 0x14a118u: goto label_14a118;
        case 0x14a12cu: goto label_14a12c;
        case 0x14a138u: goto label_14a138;
        default: break;
    }

    ctx->pc = 0x14a038u;

    // 0x14a038: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14a038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14a03c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x14a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x14a040: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14a040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x14a044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a048: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x14a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x14a04c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14a050: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14a054: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x14a054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x14a058: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x14a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x14a05c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x14a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x14a060: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x14A060u;
    {
        const bool branch_taken_0x14a060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A060u;
        // 0x14a064: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a060) {
            ctx->pc = 0x14A14Cu;
            goto label_14a14c;
        }
    }
    ctx->pc = 0x14A068u;
    // 0x14a068: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A068u;
    {
        const bool branch_taken_0x14a068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a068) {
            ctx->pc = 0x14A06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A068u;
            // 0x14a06c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A0B4u;
            goto label_14a0b4;
        }
    }
    ctx->pc = 0x14A070u;
    // 0x14a070: 0x26300110  addiu       $s0, $s1, 0x110
    ctx->pc = 0x14a070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x14a074: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x14a074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x14a078: 0x92280140  lbu         $t0, 0x140($s1)
    ctx->pc = 0x14a078u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x14a07c: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x14a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x14a080: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x14a080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x14a084: 0xc051e92  jal         func_147A48
    ctx->pc = 0x14A084u;
    SET_GPR_U32(ctx, 31, 0x14A08Cu);
    ctx->pc = 0x14A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A084u;
    // 0x14a088: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A48u, 0x14A084u, 0x14A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A08Cu;
label_14a08c:
    // 0x14a08c: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x14a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x14a090: 0x50500008  beql        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A090u;
    {
        const bool branch_taken_0x14a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x14a090) {
            ctx->pc = 0x14A094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A090u;
            // 0x14a094: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A0B4u;
            goto label_14a0b4;
        }
    }
    ctx->pc = 0x14A098u;
    // 0x14a098: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x14a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a09c: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x14a09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x14a0a0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x14a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a0a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14a0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14a0a8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x14a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a0ac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14a0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14a0b0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x14a0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_14a0b4:
    // 0x14a0b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14a0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0b8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14A0B8u;
    {
        const bool branch_taken_0x14a0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0B8u;
        // 0x14a0bc: 0x8e300144  lw          $s0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0b8) {
            ctx->pc = 0x14A14Cu;
            goto label_14a14c;
        }
    }
    ctx->pc = 0x14A0C0u;
    // 0x14a0c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14a0c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14a0c4: 0x3c130010  lui         $s3, 0x10
    ctx->pc = 0x14a0c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16 << 16));
label_14a0c8:
    // 0x14a0c8: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x14a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x14a0cc: 0x3113a  dsrl        $v0, $v1, 4
    ctx->pc = 0x14a0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 4);
    // 0x14a0d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14a0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14a0d4: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x14A0D4u;
    {
        const bool branch_taken_0x14a0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a0d4) {
            ctx->pc = 0x14A0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A0D4u;
            // 0x14a0d8: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A13Cu;
            goto label_14a13c;
        }
    }
    ctx->pc = 0x14A0DCu;
    // 0x14a0dc: 0xc620027c  lwc1        $f0, 0x27C($s1)
    ctx->pc = 0x14a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a0e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14a0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a0e4: 0x0  nop
    ctx->pc = 0x14a0e4u;
    // NOP
    // 0x14a0e8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x14A0E8u;
    {
        const bool branch_taken_0x14a0e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0E8u;
        // 0x14a0ec: 0x731024  and         $v0, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0e8) {
            ctx->pc = 0x14A12Cu;
            goto label_14a12c;
        }
    }
    ctx->pc = 0x14A0F0u;
    // 0x14a0f0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x14A0F0u;
    {
        const bool branch_taken_0x14a0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a0f0) {
            ctx->pc = 0x14A0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A0F0u;
            // 0x14a0f4: 0x8e250250  lw          $a1, 0x250($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A130u;
            goto label_14a130;
        }
    }
    ctx->pc = 0x14A0F8u;
    // 0x14a0f8: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x14a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x14a0fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a100: 0xc051d5a  jal         func_147568
    ctx->pc = 0x14A100u;
    SET_GPR_U32(ctx, 31, 0x14A108u);
    ctx->pc = 0x14A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A100u;
    // 0x14a104: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x14A100u, 0x14A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A108u;
label_14a108:
    // 0x14a108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a10c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14a10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a110: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x14A110u;
    SET_GPR_U32(ctx, 31, 0x14A118u);
    ctx->pc = 0x14A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A110u;
    // 0x14a114: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x14A110u, 0x14A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A118u;
label_14a118:
    // 0x14a118: 0xc62c027c  lwc1        $f12, 0x27C($s1)
    ctx->pc = 0x14a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a124: 0xc055b5c  jal         func_156D70
    ctx->pc = 0x14A124u;
    SET_GPR_U32(ctx, 31, 0x14A12Cu);
    ctx->pc = 0x14A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A124u;
    // 0x14a128: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156D70u, 0x14A124u, 0x14A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A12Cu;
label_14a12c:
    // 0x14a12c: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x14a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_14a130:
    // 0x14a130: 0xc054074  jal         func_1501D0
    ctx->pc = 0x14A130u;
    SET_GPR_U32(ctx, 31, 0x14A138u);
    ctx->pc = 0x14A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A130u;
    // 0x14a134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x14A130u, 0x14A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A138u;
label_14a138:
    // 0x14a138: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x14a138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_14a13c:
    // 0x14a13c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14a13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14a140: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x14a140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a144: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14A144u;
    {
        const bool branch_taken_0x14a144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A144u;
        // 0x14a148: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a144) {
            ctx->pc = 0x14A0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a0c8;
        }
    }
    ctx->pc = 0x14A14Cu;
label_14a14c:
    // 0x14a14c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x14a14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14a150: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x14a150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14a154: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x14a154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a158: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14a158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a15c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14a15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a160: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x14a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14a164: 0x3e00008  jr          $ra
    ctx->pc = 0x14A164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A164u;
        // 0x14a168: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A16Cu;
    // 0x14a16c: 0x0  nop
    ctx->pc = 0x14a16cu;
    // NOP
    ctx->pc = 0x14a170u;
}
