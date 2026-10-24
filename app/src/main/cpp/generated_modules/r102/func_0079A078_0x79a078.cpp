#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079A078
// Address: 0x79a078 - 0x79a2a0
void func_0079A078_0x79a078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A078_0x79a078");
#endif

    switch (ctx->pc) {
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a120u: goto label_79a120;
        case 0x79a128u: goto label_79a128;
        case 0x79a130u: goto label_79a130;
        case 0x79a148u: goto label_79a148;
        case 0x79a160u: goto label_79a160;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1d0u: goto label_79a1d0;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a21cu: goto label_79a21c;
        case 0x79a228u: goto label_79a228;
        case 0x79a238u: goto label_79a238;
        case 0x79a264u: goto label_79a264;
        case 0x79a270u: goto label_79a270;
        default: break;
    }

    ctx->pc = 0x79a078u;

    // 0x79a078: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79a078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79a07c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a080: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a084: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a088: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79a08c: 0x24a5ae80  addiu       $a1, $a1, -0x5180
    ctx->pc = 0x79a08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946432));
    // 0x79a090: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79a090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79a094: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a098: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x79a09c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x79a09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79a0a0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x79a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x79a0a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a0a8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79a0ac: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79a0b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79a0b4: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x79a0b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79a0bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a0c0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x79a0c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x79a0c4: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x79A0C4u;
    SET_GPR_U32(ctx, 31, 0x79A0CCu);
    ctx->pc = 0x79A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C4u;
    // 0x79a0c8: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79A0C4u, 0x79A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0CCu;
label_79a0cc:
    // 0x79a0cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x79a0ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0d0: 0x260464f0  addiu       $a0, $s0, 0x64F0
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x79a0d4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79a0d8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x79a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79a0dc: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79A0DCu;
    SET_GPR_U32(ctx, 31, 0x79A0E4u);
    ctx->pc = 0x79A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0DCu;
    // 0x79a0e0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A0DCu, 0x79A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0E4u;
label_79a0e4:
    // 0x79a0e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A0E4u;
    {
        const bool branch_taken_0x79a0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0E4u;
        // 0x79a0e8: 0x3c04005f  lui         $a0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0e4) {
            ctx->pc = 0x79A0F8u;
            goto label_79a0f8;
        }
    }
    ctx->pc = 0x79A0ECu;
    // 0x79a0ec: 0xc0a241a  jal         func_289068
    ctx->pc = 0x79A0ECu;
    SET_GPR_U32(ctx, 31, 0x79A0F4u);
    ctx->pc = 0x79A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0ECu;
    // 0x79a0f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289068u, 0x79A0ECu, 0x79A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0F4u;
label_79a0f4:
    // 0x79a0f4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_79a0f8:
    // 0x79a0f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a100: 0x3c014644  lui         $at, 0x4644
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17988 << 16));
    // 0x79a104: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x79a104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x79a108: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a10c: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x79a110: 0x24143138  addiu       $s4, $zero, 0x3138
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12600));
    // 0x79a114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79a114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a118: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A118u;
    SET_GPR_U32(ctx, 31, 0x79A120u);
    ctx->pc = 0x79A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A118u;
    // 0x79a11c: 0x3c130400  lui         $s3, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A118u, 0x79A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A120u;
label_79a120:
    // 0x79a120: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x79a120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x79a124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a128:
    // 0x79a128: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A128u;
    SET_GPR_U32(ctx, 31, 0x79A130u);
    ctx->pc = 0x79A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A128u;
    // 0x79a12c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A128u, 0x79A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A130u;
label_79a130:
    // 0x79a130: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a13c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a140: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A140u;
    SET_GPR_U32(ctx, 31, 0x79A148u);
    ctx->pc = 0x79A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A140u;
    // 0x79a144: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A140u, 0x79A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A148u;
label_79a148:
    // 0x79a148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a14c: 0x2c633138  sltiu       $v1, $v1, 0x3138
    ctx->pc = 0x79a14cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12600) ? 1 : 0);
    // 0x79a150: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x79A150u;
    {
        const bool branch_taken_0x79a150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A150u;
        // 0x79a154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a150) {
            ctx->pc = 0x79A1F8u;
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A158u;
    // 0x79a158: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A158u;
    SET_GPR_U32(ctx, 31, 0x79A160u);
    ctx->pc = 0x79A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A158u;
    // 0x79a15c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A158u, 0x79A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A160u;
label_79a160:
    // 0x79a160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a164: 0x2831023  subu        $v0, $s4, $v1
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x79a168: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A168u;
    {
        const bool branch_taken_0x79a168 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A168u;
        // 0x79a16c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a168) {
            ctx->pc = 0x79A184u;
            goto label_79a184;
        }
    }
    ctx->pc = 0x79A170u;
    // 0x79a170: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x79a170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a174: 0x0  nop
    ctx->pc = 0x79a174u;
    // NOP
    // 0x79a178: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x79a178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x79a17c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79A17Cu;
    {
        const bool branch_taken_0x79a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a17c) {
            ctx->pc = 0x79A19Cu;
            goto label_79a19c;
        }
    }
    ctx->pc = 0x79A184u;
label_79a184:
    // 0x79a184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a188: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a18c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x79a18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a190: 0x0  nop
    ctx->pc = 0x79a190u;
    // NOP
    // 0x79a194: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x79a194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x79a198: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x79a198u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_79a19c:
    // 0x79a19c: 0x0  nop
    ctx->pc = 0x79a19cu;
    // NOP
    // 0x79a1a0: 0x0  nop
    ctx->pc = 0x79a1a0u;
    // NOP
    // 0x79a1a4: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x79a1a4u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x79a1a8: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x79A1A8u;
    SET_GPR_U32(ctx, 31, 0x79A1B0u);
    ctx->pc = 0x79A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A8u;
    // 0x79a1ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x79A1A8u, 0x79A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B0u;
label_79a1b0:
    // 0x79a1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x79a1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a1b4: 0x0  nop
    ctx->pc = 0x79a1b4u;
    // NOP
    // 0x79a1b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79a1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79a1bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x79a1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x79a1c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79a1c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x79a1c4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x79a1c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x79a1c8: 0xc0a574c  jal         func_295D30
    ctx->pc = 0x79A1C8u;
    SET_GPR_U32(ctx, 31, 0x79A1D0u);
    ctx->pc = 0x79A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1C8u;
    // 0x79a1cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D30u, 0x79A1C8u, 0x79A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D0u;
label_79a1d0:
    // 0x79a1d0: 0x8e238658  lw          $v1, -0x79A8($s1)
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x79a1d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a1d8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x79a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x79a1dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A1DCu;
    {
        const bool branch_taken_0x79a1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1DCu;
        // 0x79a1e0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1dc) {
            ctx->pc = 0x79A1F8u;
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A1E4u;
    // 0x79a1e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1e8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A1E8u;
    SET_GPR_U32(ctx, 31, 0x79A1F0u);
    ctx->pc = 0x79A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1E8u;
    // 0x79a1ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A1E8u, 0x79A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F0u;
label_79a1f0:
    // 0x79a1f0: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x79A1F0u;
    {
        const bool branch_taken_0x79a1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F0u;
        // 0x79a1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1f0) {
            ctx->pc = 0x79A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a128;
        }
    }
    ctx->pc = 0x79A1F8u;
label_79a1f8:
    // 0x79a1f8: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x79a1fc: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x79a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x79a200: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79a200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79a204: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a208: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A208u;
    {
        const bool branch_taken_0x79a208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a208) {
            ctx->pc = 0x79A20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A208u;
            // 0x79a20c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A250u;
            goto label_79a250;
        }
    }
    ctx->pc = 0x79A210u;
    // 0x79a210: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a214: 0xc0a574c  jal         func_295D30
    ctx->pc = 0x79A214u;
    SET_GPR_U32(ctx, 31, 0x79A21Cu);
    ctx->pc = 0x79A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A214u;
    // 0x79a218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D30u, 0x79A214u, 0x79A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A21Cu;
label_79a21c:
    // 0x79a21c: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79a21cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a220: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79A220u;
    SET_GPR_U32(ctx, 31, 0x79A228u);
    ctx->pc = 0x79A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A220u;
    // 0x79a224: 0x26c464f0  addiu       $a0, $s6, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A220u, 0x79A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A228u;
label_79a228:
    // 0x79a228: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A228u;
    {
        const bool branch_taken_0x79a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a228) {
            ctx->pc = 0x79A22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A228u;
            // 0x79a22c: 0x8e248658  lw          $a0, -0x79A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A23Cu;
            goto label_79a23c;
        }
    }
    ctx->pc = 0x79A230u;
    // 0x79a230: 0xc0a2420  jal         func_289080
    ctx->pc = 0x79A230u;
    SET_GPR_U32(ctx, 31, 0x79A238u);
    ctx->pc = 0x79A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A230u;
    // 0x79a234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289080u, 0x79A230u, 0x79A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A238u;
label_79a238:
    // 0x79a238: 0x8e248658  lw          $a0, -0x79A8($s1)
    ctx->pc = 0x79a238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
label_79a23c:
    // 0x79a23c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x79a240: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79a244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a248: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79a24c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x79a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_79a250:
    // 0x79a250: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a254: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x79a254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79a258: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a25c: 0xc0b567c  jal         func_2D59F0
    ctx->pc = 0x79A25Cu;
    SET_GPR_U32(ctx, 31, 0x79A264u);
    ctx->pc = 0x79A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A25Cu;
    // 0x79a260: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x79A25Cu, 0x79A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A264u;
label_79a264:
    // 0x79a264: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a268: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A268u;
    SET_GPR_U32(ctx, 31, 0x79A270u);
    ctx->pc = 0x79A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A268u;
    // 0x79a26c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A268u, 0x79A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A270u;
label_79a270:
    // 0x79a270: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79a270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a274: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79a274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a278: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79a278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a27c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79a27cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a280: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79a280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a284: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79a284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a288: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x79a288u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a28c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a290: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x79a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a294: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x79a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a298: 0x3e00008  jr          $ra
    ctx->pc = 0x79A298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A298u;
        // 0x79a29c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A2A0u;
}
} // namespace gh_r102
