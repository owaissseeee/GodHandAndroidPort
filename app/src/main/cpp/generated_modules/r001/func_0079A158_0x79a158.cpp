#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: func_0079A158
// Address: 0x79a158 - 0x79a438
void func_0079A158_0x79a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A158_0x79a158");
#endif

    switch (ctx->pc) {
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1b8u: goto label_79a1b8;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a210u: goto label_79a210;
        case 0x79a244u: goto label_79a244;
        case 0x79a250u: goto label_79a250;
        case 0x79a258u: goto label_79a258;
        case 0x79a26cu: goto label_79a26c;
        case 0x79a288u: goto label_79a288;
        case 0x79a29cu: goto label_79a29c;
        case 0x79a2acu: goto label_79a2ac;
        case 0x79a2ccu: goto label_79a2cc;
        case 0x79a2ecu: goto label_79a2ec;
        case 0x79a2fcu: goto label_79a2fc;
        case 0x79a324u: goto label_79a324;
        case 0x79a338u: goto label_79a338;
        case 0x79a348u: goto label_79a348;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a370u: goto label_79a370;
        case 0x79a380u: goto label_79a380;
        case 0x79a394u: goto label_79a394;
        case 0x79a3a8u: goto label_79a3a8;
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a3d8u: goto label_79a3d8;
        case 0x79a3e8u: goto label_79a3e8;
        case 0x79a3f8u: goto label_79a3f8;
        case 0x79a430u: goto label_79a430;
        default: break;
    }

    ctx->pc = 0x79a158u;

    // 0x79a158: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x79a15c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a160: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x79a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x79a164: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a168: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x79a16c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x79a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x79a170: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x79a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x79a174: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x79a178: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x79a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x79a17c: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x79a180: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x79a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x79a184: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a188: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x79a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x79a18c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x79a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x79a190: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x79a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x79a194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a198: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79A198u;
    SET_GPR_U32(ctx, 31, 0x79A1A0u);
    ctx->pc = 0x79A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A198u;
    // 0x79a19c: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A198u, 0x79A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A0u;
label_79a1a0:
    // 0x79a1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1a8: 0xc04d484  jal         func_135210
    ctx->pc = 0x79A1A8u;
    SET_GPR_U32(ctx, 31, 0x79A1B0u);
    ctx->pc = 0x79A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A8u;
    // 0x79a1ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x79A1A8u, 0x79A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B0u;
label_79a1b0:
    // 0x79a1b0: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79A1B0u;
    SET_GPR_U32(ctx, 31, 0x79A1B8u);
    ctx->pc = 0x79A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1B0u;
    // 0x79a1b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A1B0u, 0x79A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B8u;
label_79a1b8:
    // 0x79a1b8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a1b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a1bc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79a1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a1c0: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a1c4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a1c8: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AF00u));
    // 0x79a1cc: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79a1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a1d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a1d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1d8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x79a1dc: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79A1DCu;
    SET_GPR_U32(ctx, 31, 0x79A1E4u);
    ctx->pc = 0x79A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1DCu;
    // 0x79a1e0: 0x3c120057  lui         $s2, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A1DCu, 0x79A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E4u;
label_79a1e4:
    // 0x79a1e4: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x79a1e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79a1ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a1f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a1f4: 0x8e04af00  lw          $a0, -0x5100($s0)
    ctx->pc = 0x79a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a1f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79a1fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79a200: 0x26569b70  addiu       $s6, $s2, -0x6490
    ctx->pc = 0x79a200u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    // 0x79a204: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x79a208: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79A208u;
    SET_GPR_U32(ctx, 31, 0x79A210u);
    ctx->pc = 0x79A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A208u;
    // 0x79a20c: 0x3c150400  lui         $s5, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A208u, 0x79A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A210u;
label_79a210:
    // 0x79a210: 0x24141009  addiu       $s4, $zero, 0x1009
    ctx->pc = 0x79a210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x79a214: 0x8e03af00  lw          $v1, -0x5100($s0)
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a218: 0x24021005  addiu       $v0, $zero, 0x1005
    ctx->pc = 0x79a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x79a21c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a220: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a224: 0xa462006e  sh          $v0, 0x6E($v1)
    ctx->pc = 0x79a224u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 110), (uint16_t)GPR_U32(ctx, 2));
    // 0x79a228: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a22c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a22cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a230: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a234: 0x8e05af00  lw          $a1, -0x5100($s0)
    ctx->pc = 0x79a234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946560)));
    // 0x79a238: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x79a238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a23c: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79A23Cu;
    SET_GPR_U32(ctx, 31, 0x79A244u);
    ctx->pc = 0x79A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A23Cu;
    // 0x79a240: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A23Cu, 0x79A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A244u;
label_79a244:
    // 0x79a244: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a248: 0x24537a24  addiu       $s3, $v0, 0x7A24
    ctx->pc = 0x79a248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x79a24c: 0x0  nop
    ctx->pc = 0x79a24cu;
    // NOP
label_79a250:
    // 0x79a250: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A250u;
    SET_GPR_U32(ctx, 31, 0x79A258u);
    ctx->pc = 0x79A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A250u;
    // 0x79a254: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A250u, 0x79A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A258u;
label_79a258:
    // 0x79a258: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A258u;
    {
        const bool branch_taken_0x79a258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A258u;
        // 0x79a25c: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a258) {
            ctx->pc = 0x79A280u;
            goto label_79a280;
        }
    }
    ctx->pc = 0x79A260u;
    // 0x79a260: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a264: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x79A264u;
    SET_GPR_U32(ctx, 31, 0x79A26Cu);
    ctx->pc = 0x79A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A264u;
    // 0x79a268: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x79A264u, 0x79A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A26Cu;
label_79a26c:
    // 0x79a26c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A26Cu;
    {
        const bool branch_taken_0x79a26c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A26Cu;
        // 0x79a270: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a26c) {
            ctx->pc = 0x79A280u;
            goto label_79a280;
        }
    }
    ctx->pc = 0x79A274u;
    // 0x79a274: 0x8e23af00  lw          $v1, -0x5100($s1)
    ctx->pc = 0x79a274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
    // 0x79a278: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x79A278u;
    {
        const bool branch_taken_0x79a278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A278u;
        // 0x79a27c: 0x24021005  addiu       $v0, $zero, 0x1005 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a278) {
            ctx->pc = 0x79A41Cu;
            goto label_79a41c;
        }
    }
    ctx->pc = 0x79A280u;
label_79a280:
    // 0x79a280: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A280u;
    SET_GPR_U32(ctx, 31, 0x79A288u);
    ctx->pc = 0x79A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A280u;
    // 0x79a284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A280u, 0x79A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A288u;
label_79a288:
    // 0x79a288: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x79A288u;
    {
        const bool branch_taken_0x79a288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a288) {
            ctx->pc = 0x79A28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A288u;
            // 0x79a28c: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A2C4u;
            goto label_79a2c4;
        }
    }
    ctx->pc = 0x79A290u;
    // 0x79a290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a294: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x79A294u;
    SET_GPR_U32(ctx, 31, 0x79A29Cu);
    ctx->pc = 0x79A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A294u;
    // 0x79a298: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79A294u, 0x79A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A29Cu;
label_79a29c:
    // 0x79a29c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A29Cu;
    {
        const bool branch_taken_0x79a29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A29Cu;
        // 0x79a2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a29c) {
            ctx->pc = 0x79A2C0u;
            goto label_79a2c0;
        }
    }
    ctx->pc = 0x79A2A4u;
    // 0x79a2a4: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x79A2A4u;
    SET_GPR_U32(ctx, 31, 0x79A2ACu);
    ctx->pc = 0x79A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A4u;
    // 0x79a2a8: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x79A2A4u, 0x79A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2ACu;
label_79a2ac:
    // 0x79a2ac: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A2ACu;
    {
        const bool branch_taken_0x79a2ac = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2ACu;
        // 0x79a2b0: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2ac) {
            ctx->pc = 0x79A2C4u;
            goto label_79a2c4;
        }
    }
    ctx->pc = 0x79A2B4u;
    // 0x79a2b4: 0x8e23af00  lw          $v1, -0x5100($s1)
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
    // 0x79a2b8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x79A2B8u;
    {
        const bool branch_taken_0x79a2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B8u;
        // 0x79a2bc: 0x2402100a  addiu       $v0, $zero, 0x100A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2b8) {
            ctx->pc = 0x79A41Cu;
            goto label_79a41c;
        }
    }
    ctx->pc = 0x79A2C0u;
label_79a2c0:
    // 0x79a2c0: 0x26509b70  addiu       $s0, $s2, -0x6490
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
label_79a2c4:
    // 0x79a2c4: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A2C4u;
    SET_GPR_U32(ctx, 31, 0x79A2CCu);
    ctx->pc = 0x79A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2C4u;
    // 0x79a2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A2C4u, 0x79A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2CCu;
label_79a2cc:
    // 0x79a2cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A2CCu;
    {
        const bool branch_taken_0x79a2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2CCu;
        // 0x79a2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2cc) {
            ctx->pc = 0x79A2E4u;
            goto label_79a2e4;
        }
    }
    ctx->pc = 0x79A2D4u;
    // 0x79a2d4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x79a2d8: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x79a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x79a2dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A2DCu;
    {
        const bool branch_taken_0x79a2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2DCu;
        // 0x79a2e0: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2dc) {
            ctx->pc = 0x79A314u;
            goto label_79a314;
        }
    }
    ctx->pc = 0x79A2E4u;
label_79a2e4:
    // 0x79a2e4: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x79A2E4u;
    SET_GPR_U32(ctx, 31, 0x79A2ECu);
    ctx->pc = 0x79A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2E4u;
    // 0x79a2e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79A2E4u, 0x79A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2ECu;
label_79a2ec:
    // 0x79a2ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79A2ECu;
    {
        const bool branch_taken_0x79a2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a2ec) {
            ctx->pc = 0x79A2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2ECu;
            // 0x79a2f0: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A31Cu;
            goto label_79a31c;
        }
    }
    ctx->pc = 0x79A2F4u;
    // 0x79a2f4: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A2F4u;
    SET_GPR_U32(ctx, 31, 0x79A2FCu);
    ctx->pc = 0x79A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F4u;
    // 0x79a2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A2F4u, 0x79A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2FCu;
label_79a2fc:
    // 0x79a2fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A2FCu;
    {
        const bool branch_taken_0x79a2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2FCu;
        // 0x79a300: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2fc) {
            ctx->pc = 0x79A31Cu;
            goto label_79a31c;
        }
    }
    ctx->pc = 0x79A304u;
    // 0x79a304: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x79a308: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x79a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x79a30c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A30Cu;
    {
        const bool branch_taken_0x79a30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A30Cu;
        // 0x79a310: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a30c) {
            ctx->pc = 0x79A31Cu;
            goto label_79a31c;
        }
    }
    ctx->pc = 0x79A314u;
label_79a314:
    // 0x79a314: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x79A314u;
    {
        const bool branch_taken_0x79a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A314u;
        // 0x79a318: 0x24021008  addiu       $v0, $zero, 0x1008 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a314) {
            ctx->pc = 0x79A41Cu;
            goto label_79a41c;
        }
    }
    ctx->pc = 0x79A31Cu;
label_79a31c:
    // 0x79a31c: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A31Cu;
    SET_GPR_U32(ctx, 31, 0x79A324u);
    ctx->pc = 0x79A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A31Cu;
    // 0x79a320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A31Cu, 0x79A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A324u;
label_79a324:
    // 0x79a324: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79A324u;
    {
        const bool branch_taken_0x79a324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a324) {
            ctx->pc = 0x79A328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A324u;
            // 0x79a328: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A354u;
            goto label_79a354;
        }
    }
    ctx->pc = 0x79A32Cu;
    // 0x79a32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a330: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x79A330u;
    SET_GPR_U32(ctx, 31, 0x79A338u);
    ctx->pc = 0x79A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A330u;
    // 0x79a334: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79A330u, 0x79A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A338u;
label_79a338:
    // 0x79a338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A338u;
    {
        const bool branch_taken_0x79a338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A338u;
        // 0x79a33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a338) {
            ctx->pc = 0x79A350u;
            goto label_79a350;
        }
    }
    ctx->pc = 0x79A340u;
    // 0x79a340: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x79A340u;
    SET_GPR_U32(ctx, 31, 0x79A348u);
    ctx->pc = 0x79A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A340u;
    // 0x79a344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x79A340u, 0x79A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A348u;
label_79a348:
    // 0x79a348: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x79A348u;
    {
        const bool branch_taken_0x79a348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A348u;
        // 0x79a34c: 0x8e22af00  lw          $v0, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a348) {
            ctx->pc = 0x79A3C4u;
            goto label_79a3c4;
        }
    }
    ctx->pc = 0x79A350u;
label_79a350:
    // 0x79a350: 0x26509b70  addiu       $s0, $s2, -0x6490
    ctx->pc = 0x79a350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
label_79a354:
    // 0x79a354: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A354u;
    SET_GPR_U32(ctx, 31, 0x79A35Cu);
    ctx->pc = 0x79A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A354u;
    // 0x79a358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A354u, 0x79A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A35Cu;
label_79a35c:
    // 0x79a35c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79A35Cu;
    {
        const bool branch_taken_0x79a35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a35c) {
            ctx->pc = 0x79A360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A35Cu;
            // 0x79a360: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A38Cu;
            goto label_79a38c;
        }
    }
    ctx->pc = 0x79A364u;
    // 0x79a364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a368: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x79A368u;
    SET_GPR_U32(ctx, 31, 0x79A370u);
    ctx->pc = 0x79A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A368u;
    // 0x79a36c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79A368u, 0x79A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A370u;
label_79a370:
    // 0x79a370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A370u;
    {
        const bool branch_taken_0x79a370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A370u;
        // 0x79a374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a370) {
            ctx->pc = 0x79A388u;
            goto label_79a388;
        }
    }
    ctx->pc = 0x79A378u;
    // 0x79a378: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x79A378u;
    SET_GPR_U32(ctx, 31, 0x79A380u);
    ctx->pc = 0x79A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A378u;
    // 0x79a37c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x79A378u, 0x79A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A380u;
label_79a380:
    // 0x79a380: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79A380u;
    {
        const bool branch_taken_0x79a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x8e22af00  lw          $v0, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a380) {
            ctx->pc = 0x79A3C4u;
            goto label_79a3c4;
        }
    }
    ctx->pc = 0x79A388u;
label_79a388:
    // 0x79a388: 0x26509b70  addiu       $s0, $s2, -0x6490
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
label_79a38c:
    // 0x79a38c: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A38Cu;
    SET_GPR_U32(ctx, 31, 0x79A394u);
    ctx->pc = 0x79A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A38Cu;
    // 0x79a390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A38Cu, 0x79A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A394u;
label_79a394:
    // 0x79a394: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x79A394u;
    {
        const bool branch_taken_0x79a394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a394) {
            ctx->pc = 0x79A398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A394u;
            // 0x79a398: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3D0u;
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A39Cu;
    // 0x79a39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3a0: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x79A3A0u;
    SET_GPR_U32(ctx, 31, 0x79A3A8u);
    ctx->pc = 0x79A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A0u;
    // 0x79a3a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79A3A0u, 0x79A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A8u;
label_79a3a8:
    // 0x79a3a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A3A8u;
    {
        const bool branch_taken_0x79a3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A8u;
        // 0x79a3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a8) {
            ctx->pc = 0x79A3CCu;
            goto label_79a3cc;
        }
    }
    ctx->pc = 0x79A3B0u;
    // 0x79a3b0: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x79A3B0u;
    SET_GPR_U32(ctx, 31, 0x79A3B8u);
    ctx->pc = 0x79A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B0u;
    // 0x79a3b4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x79A3B0u, 0x79A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B8u;
label_79a3b8:
    // 0x79a3b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A3B8u;
    {
        const bool branch_taken_0x79a3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B8u;
        // 0x79a3bc: 0x26509b70  addiu       $s0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3b8) {
            ctx->pc = 0x79A3D0u;
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A3C0u;
    // 0x79a3c0: 0x8e22af00  lw          $v0, -0x5100($s1)
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
label_79a3c4:
    // 0x79a3c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x79A3C4u;
    {
        const bool branch_taken_0x79a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C4u;
        // 0x79a3c8: 0xa454006e  sh          $s4, 0x6E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 110), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c4) {
            ctx->pc = 0x79A420u;
            goto label_79a420;
        }
    }
    ctx->pc = 0x79A3CCu;
label_79a3cc:
    // 0x79a3cc: 0x26509b70  addiu       $s0, $s2, -0x6490
    ctx->pc = 0x79a3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
label_79a3d0:
    // 0x79a3d0: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A3D0u;
    SET_GPR_U32(ctx, 31, 0x79A3D8u);
    ctx->pc = 0x79A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3D0u;
    // 0x79a3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A3D0u, 0x79A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D8u;
label_79a3d8:
    // 0x79a3d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A3D8u;
    {
        const bool branch_taken_0x79a3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D8u;
        // 0x79a3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3d8) {
            ctx->pc = 0x79A3F0u;
            goto label_79a3f0;
        }
    }
    ctx->pc = 0x79A3E0u;
    // 0x79a3e0: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x79A3E0u;
    SET_GPR_U32(ctx, 31, 0x79A3E8u);
    ctx->pc = 0x79A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3E0u;
    // 0x79a3e4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x79A3E0u, 0x79A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3E8u;
label_79a3e8:
    // 0x79a3e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A3E8u;
    {
        const bool branch_taken_0x79a3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E8u;
        // 0x79a3ec: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e8) {
            ctx->pc = 0x79A410u;
            goto label_79a410;
        }
    }
    ctx->pc = 0x79A3F0u;
label_79a3f0:
    // 0x79a3f0: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79A3F0u;
    SET_GPR_U32(ctx, 31, 0x79A3F8u);
    ctx->pc = 0x79A3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3F0u;
    // 0x79a3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79A3F0u, 0x79A3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3F8u;
label_79a3f8:
    // 0x79a3f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A3F8u;
    {
        const bool branch_taken_0x79a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F8u;
        // 0x79a3fc: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3f8) {
            ctx->pc = 0x79A418u;
            goto label_79a418;
        }
    }
    ctx->pc = 0x79A400u;
    // 0x79a400: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x79a404: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x79a404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x79a408: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A408u;
    {
        const bool branch_taken_0x79a408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A408u;
        // 0x79a40c: 0x24021006  addiu       $v0, $zero, 0x1006 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a408) {
            ctx->pc = 0x79A41Cu;
            goto label_79a41c;
        }
    }
    ctx->pc = 0x79A410u;
label_79a410:
    // 0x79a410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A410u;
    {
        const bool branch_taken_0x79a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A410u;
        // 0x79a414: 0x24021007  addiu       $v0, $zero, 0x1007 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a410) {
            ctx->pc = 0x79A41Cu;
            goto label_79a41c;
        }
    }
    ctx->pc = 0x79A418u;
label_79a418:
    // 0x79a418: 0x24021006  addiu       $v0, $zero, 0x1006
    ctx->pc = 0x79a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4102));
label_79a41c:
    // 0x79a41c: 0xa462006e  sh          $v0, 0x6E($v1)
    ctx->pc = 0x79a41cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 110), (uint16_t)GPR_U32(ctx, 2));
label_79a420:
    // 0x79a420: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x79a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x79a424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a428: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A428u;
    SET_GPR_U32(ctx, 31, 0x79A430u);
    ctx->pc = 0x79A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A428u;
    // 0x79a42c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A428u, 0x79A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A430u;
label_79a430:
    // 0x79a430: 0x1000ff87  b           . + 4 + (-0x79 << 2)
    ctx->pc = 0x79A430u;
    {
        const bool branch_taken_0x79a430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a430) {
            ctx->pc = 0x79A250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a250;
        }
    }
    ctx->pc = 0x79A438u;
}
} // namespace gh_r001
