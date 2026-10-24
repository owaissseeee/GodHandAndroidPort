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

// Function: func_0029E2C0
// Address: 0x29e2c0 - 0x29e8e0
void func_0029E2C0_0x29e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029E2C0_0x29e2c0");
#endif

    switch (ctx->pc) {
        case 0x29e318u: goto label_29e318;
        case 0x29e360u: goto label_29e360;
        case 0x29e3b4u: goto label_29e3b4;
        case 0x29e3e0u: goto label_29e3e0;
        case 0x29e3f4u: goto label_29e3f4;
        case 0x29e410u: goto label_29e410;
        case 0x29e420u: goto label_29e420;
        case 0x29e438u: goto label_29e438;
        case 0x29e490u: goto label_29e490;
        case 0x29e4a0u: goto label_29e4a0;
        case 0x29e4d8u: goto label_29e4d8;
        case 0x29e500u: goto label_29e500;
        case 0x29e518u: goto label_29e518;
        case 0x29e52cu: goto label_29e52c;
        case 0x29e568u: goto label_29e568;
        case 0x29e59cu: goto label_29e59c;
        case 0x29e5e0u: goto label_29e5e0;
        case 0x29e628u: goto label_29e628;
        case 0x29e638u: goto label_29e638;
        case 0x29e648u: goto label_29e648;
        case 0x29e658u: goto label_29e658;
        case 0x29e668u: goto label_29e668;
        case 0x29e678u: goto label_29e678;
        case 0x29e6b0u: goto label_29e6b0;
        case 0x29e6d8u: goto label_29e6d8;
        case 0x29e6ecu: goto label_29e6ec;
        case 0x29e704u: goto label_29e704;
        case 0x29e714u: goto label_29e714;
        case 0x29e770u: goto label_29e770;
        case 0x29e7a8u: goto label_29e7a8;
        case 0x29e7d0u: goto label_29e7d0;
        case 0x29e7e8u: goto label_29e7e8;
        case 0x29e824u: goto label_29e824;
        case 0x29e848u: goto label_29e848;
        case 0x29e88cu: goto label_29e88c;
        default: break;
    }

    ctx->pc = 0x29e2c0u;

    // 0x29e2c0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x29e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x29e2c4: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29e2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29e2c8: 0x8c6276b0  lw          $v0, 0x76B0($v1)
    ctx->pc = 0x29e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x29e2cc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x29e2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x29e2d0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x29e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x29e2d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29e2d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x29e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x29e2dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29e2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29e2e0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x29e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x29e2e4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x29e2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x29e2e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29e2ec: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x29e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x29e2f0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x29e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x29e2f4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x29e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x29e2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29e2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29e2fc: 0x24150e00  addiu       $s5, $zero, 0xE00
    ctx->pc = 0x29e2fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x29e300: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29e300u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e304: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e308: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29e308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29e30c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29e310: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E310u;
    SET_GPR_U32(ctx, 31, 0x29E318u);
    ctx->pc = 0x29E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E310u;
    // 0x29e314: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E310u, 0x29E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E318u;
label_29e318:
    // 0x29e318: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x29e318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e31c: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29e320: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29e320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29e324: 0x8c8211ac  lw          $v0, 0x11AC($a0)
    ctx->pc = 0x29e324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29e328: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29e328u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29e32c: 0x223282a  slt         $a1, $s1, $v1
    ctx->pc = 0x29e32cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29e330: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29e330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29e334: 0x65300b  movn        $a2, $v1, $a1
    ctx->pc = 0x29e334u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29e338: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x29e338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x29e33c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29e33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29e340: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29e340u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29e344: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29e344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29e348: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e34c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29e34cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29e350: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29e350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29e354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e358: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E358u;
    SET_GPR_U32(ctx, 31, 0x29E360u);
    ctx->pc = 0x29E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E358u;
    // 0x29e35c: 0x15a942  srl         $s5, $s5, 5 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E358u, 0x29E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E360u;
label_29e360:
    // 0x29e360: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x29e360u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x29e364: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29e364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29e368: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x29e368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29e36c: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29e370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e374: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29e374u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29e378: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x29e378u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e37c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29e380: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29e380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29e384: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29e384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e388: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29e388u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29e38c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29e38cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29e390: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x29e390u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29e394: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x29e394u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29e398: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e398u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e39c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29e3a0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29e3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29e3a4: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x29e3a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x29e3a8: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x29e3a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3ac: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E3ACu;
    SET_GPR_U32(ctx, 31, 0x29E3B4u);
    ctx->pc = 0x29E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E3ACu;
    // 0x29e3b0: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E3ACu, 0x29E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E3B4u;
label_29e3b4:
    // 0x29e3b4: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29e3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29e3b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3bc: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29e3c0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29e3c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29e3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29e3c8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29e3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29e3cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29e3d0: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29e3d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29e3d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29e3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29e3d8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E3D8u;
    SET_GPR_U32(ctx, 31, 0x29E3E0u);
    ctx->pc = 0x29E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E3D8u;
    // 0x29e3dc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E3D8u, 0x29E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E3E0u;
label_29e3e0:
    // 0x29e3e0: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x29e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x29e3e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3e8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x29e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x29e3ec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E3ECu;
    SET_GPR_U32(ctx, 31, 0x29E3F4u);
    ctx->pc = 0x29E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E3ECu;
    // 0x29e3f0: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E3ECu, 0x29E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E3F4u;
label_29e3f4:
    // 0x29e3f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29e3f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3fc: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x29e3fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x29e400: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29e400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29e404: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29e404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29e408: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E408u;
    SET_GPR_U32(ctx, 31, 0x29E410u);
    ctx->pc = 0x29E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E408u;
    // 0x29e40c: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E408u, 0x29E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E410u;
label_29e410:
    // 0x29e410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e414: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x29e414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x29e418: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E418u;
    SET_GPR_U32(ctx, 31, 0x29E420u);
    ctx->pc = 0x29E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E418u;
    // 0x29e41c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E418u, 0x29E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E420u;
label_29e420:
    // 0x29e420: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e424: 0x3406fc00  ori         $a2, $zero, 0xFC00
    ctx->pc = 0x29e424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x29e428: 0x634b8  dsll        $a2, $a2, 18
    ctx->pc = 0x29e428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 18);
    // 0x29e42c: 0x34c63f00  ori         $a2, $a2, 0x3F00
    ctx->pc = 0x29e42cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16128);
    // 0x29e430: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E430u;
    SET_GPR_U32(ctx, 31, 0x29E438u);
    ctx->pc = 0x29E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E430u;
    // 0x29e434: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E430u, 0x29E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E438u;
label_29e438:
    // 0x29e438: 0x8e641188  lw          $a0, 0x1188($s3)
    ctx->pc = 0x29e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4488)));
    // 0x29e43c: 0x16303c  dsll32      $a2, $s6, 0
    ctx->pc = 0x29e43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29e440: 0x8e0511b8  lw          $a1, 0x11B8($s0)
    ctx->pc = 0x29e440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4536)));
    // 0x29e444: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29e444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29e448: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x29e448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29e44c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29e450: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29e450u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29e454: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29e454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29e458: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29e458u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29e45c: 0x3c032400  lui         $v1, 0x2400
    ctx->pc = 0x29e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9216 << 16));
    // 0x29e460: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29e460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29e464: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x29e464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29e468: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29e468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29e46c: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x29e46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29e470: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x29e470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x29e474: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x29e474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x29e478: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x29e478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x29e47c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29e47cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29e480: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e484: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29e484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29e488: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E488u;
    SET_GPR_U32(ctx, 31, 0x29E490u);
    ctx->pc = 0x29E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E488u;
    // 0x29e48c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E488u, 0x29E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E490u;
label_29e490:
    // 0x29e490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e494: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29e494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29e498: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E498u;
    SET_GPR_U32(ctx, 31, 0x29E4A0u);
    ctx->pc = 0x29E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E498u;
    // 0x29e49c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E498u, 0x29E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E4A0u;
label_29e4a0:
    // 0x29e4a0: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29e4a4: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x29e4a4u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29e4a8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29e4ac: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x29e4acu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29e4b0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29e4b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29e4b4: 0x18400053  blez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x29E4B4u;
    {
        const bool branch_taken_0x29e4b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4B4u;
        // 0x29e4b8: 0x3c0b02d  daddu       $s6, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4b4) {
            ctx->pc = 0x29E604u;
            goto label_29e604;
        }
    }
    ctx->pc = 0x29E4BCu;
    // 0x29e4bc: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x29e4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e4c0: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x29e4c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x29e4c4: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x29e4c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29e4c8: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x29e4c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x29e4cc: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x29e4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29e4d0: 0x8ec2118c  lw          $v0, 0x118C($s6)
    ctx->pc = 0x29e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4492)));
    // 0x29e4d4: 0x0  nop
    ctx->pc = 0x29e4d4u;
    // NOP
label_29e4d8:
    // 0x29e4d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29e4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e4dc: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x29e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x29e4e0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e4e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29e4e8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29e4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29e4ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29e4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29e4f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e4f4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29e4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29e4f8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E4F8u;
    SET_GPR_U32(ctx, 31, 0x29E500u);
    ctx->pc = 0x29E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E4F8u;
    // 0x29e4fc: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E4F8u, 0x29E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E500u;
label_29e500:
    // 0x29e500: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x29e500u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x29e504: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e50c: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x29e50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x29e510: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E510u;
    SET_GPR_U32(ctx, 31, 0x29E518u);
    ctx->pc = 0x29E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E510u;
    // 0x29e514: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E510u, 0x29E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E518u;
label_29e518:
    // 0x29e518: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29e518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29e51c: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29e51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29e520: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e524: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E524u;
    SET_GPR_U32(ctx, 31, 0x29E52Cu);
    ctx->pc = 0x29E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E524u;
    // 0x29e528: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E524u, 0x29E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E52Cu;
label_29e52c:
    // 0x29e52c: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x29e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29e530: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29e530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29e534: 0x8e666b80  lw          $a2, 0x6B80($s3)
    ctx->pc = 0x29e534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27520)));
    // 0x29e538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e53c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29e540: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29e540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29e544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e548: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e548u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e54c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29e54cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29e550: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29e550u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29e554: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e558: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29e558u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29e55c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29e55cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29e560: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E560u;
    SET_GPR_U32(ctx, 31, 0x29E568u);
    ctx->pc = 0x29E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E560u;
    // 0x29e564: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E560u, 0x29E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E568u;
label_29e568:
    // 0x29e568: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29e56c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29e570: 0x8c461194  lw          $a2, 0x1194($v0)
    ctx->pc = 0x29e570u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1194u));
    // 0x29e574: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29e574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e578: 0x8c831188  lw          $v1, 0x1188($a0)
    ctx->pc = 0x29e578u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29e57c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e57cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e580: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e584: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29e584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29e588: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e58c: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x29e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x29e590: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e594: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E594u;
    SET_GPR_U32(ctx, 31, 0x29E59Cu);
    ctx->pc = 0x29E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E594u;
    // 0x29e598: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E594u, 0x29E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E59Cu;
label_29e59c:
    // 0x29e59c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29e5a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e5a4: 0x8e666b80  lw          $a2, 0x6B80($s3)
    ctx->pc = 0x29e5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27520)));
    // 0x29e5a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29e5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29e5ac: 0x8ec7118c  lw          $a3, 0x118C($s6)
    ctx->pc = 0x29e5acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4492)));
    // 0x29e5b0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29e5b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e5b8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29e5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29e5bc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29e5bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29e5c0: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29e5c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e5c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e5cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e5d0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e5d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e5d4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29e5d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29e5d8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E5D8u;
    SET_GPR_U32(ctx, 31, 0x29E5E0u);
    ctx->pc = 0x29E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E5D8u;
    // 0x29e5dc: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E5D8u, 0x29E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5E0u;
label_29e5e0:
    // 0x29e5e0: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x29e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29e5e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e5e8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29e5e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29e5ec: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29e5f0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29e5f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29e5f4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29e5f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29e5f8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x29e5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29e5fc: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x29E5FCu;
    {
        const bool branch_taken_0x29e5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5FCu;
        // 0x29e600: 0x8ec2118c  lw          $v0, 0x118C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5fc) {
            ctx->pc = 0x29E4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e4d8;
        }
    }
    ctx->pc = 0x29E604u;
label_29e604:
    // 0x29e604: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x29e604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x29e608: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x29e608u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    // 0x29e60c: 0x26100780  addiu       $s0, $s0, 0x780
    ctx->pc = 0x29e60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1920));
    // 0x29e610: 0x34844140  ori         $a0, $a0, 0x4140
    ctx->pc = 0x29e610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16704);
    // 0x29e614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29e614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29e618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e61c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29e61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e620: 0xc0a8bb4  jal         func_2A2ED0
    ctx->pc = 0x29E620u;
    SET_GPR_U32(ctx, 31, 0x29E628u);
    ctx->pc = 0x29E624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E620u;
    // 0x29e624: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2ED0u, 0x29E620u, 0x29E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E628u;
label_29e628:
    // 0x29e628: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x29e628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e62c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e630: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29E630u;
    SET_GPR_U32(ctx, 31, 0x29E638u);
    ctx->pc = 0x29E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E630u;
    // 0x29e634: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29E630u, 0x29E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E638u;
label_29e638:
    // 0x29e638: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29e638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e63c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e640: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x29E640u;
    SET_GPR_U32(ctx, 31, 0x29E648u);
    ctx->pc = 0x29E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E640u;
    // 0x29e644: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x29E640u, 0x29E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E648u;
label_29e648:
    // 0x29e648: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e650: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29E650u;
    SET_GPR_U32(ctx, 31, 0x29E658u);
    ctx->pc = 0x29E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E650u;
    // 0x29e654: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29E650u, 0x29E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E658u;
label_29e658:
    // 0x29e658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e65c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e660: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E660u;
    SET_GPR_U32(ctx, 31, 0x29E668u);
    ctx->pc = 0x29E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E660u;
    // 0x29e664: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E660u, 0x29E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E668u;
label_29e668:
    // 0x29e668: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29e668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29e66c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e670: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E670u;
    SET_GPR_U32(ctx, 31, 0x29E678u);
    ctx->pc = 0x29E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E670u;
    // 0x29e674: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E670u, 0x29E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E678u;
label_29e678:
    // 0x29e678: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29e67c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x29e67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e680: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x29e680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x29e684: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e688: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29e688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29e68c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x29e68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29e690: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29e690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29e694: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29e694u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29e698: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e69c: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29e69cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29e6a0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e6a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e6a4: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29e6a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29e6a8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E6A8u;
    SET_GPR_U32(ctx, 31, 0x29E6B0u);
    ctx->pc = 0x29E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E6A8u;
    // 0x29e6ac: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E6A8u, 0x29E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6B0u;
label_29e6b0:
    // 0x29e6b0: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29e6b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6b8: 0x8fc6118c  lw          $a2, 0x118C($fp)
    ctx->pc = 0x29e6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4492)));
    // 0x29e6bc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29e6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29e6c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29e6c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29e6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29e6c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29e6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29e6cc: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29e6ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29e6d0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E6D0u;
    SET_GPR_U32(ctx, 31, 0x29E6D8u);
    ctx->pc = 0x29E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E6D0u;
    // 0x29e6d4: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E6D0u, 0x29E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6D8u;
label_29e6d8:
    // 0x29e6d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6dc: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29e6dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29e6e0: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x29e6e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x29e6e4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E6E4u;
    SET_GPR_U32(ctx, 31, 0x29E6ECu);
    ctx->pc = 0x29E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E6E4u;
    // 0x29e6e8: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E6E4u, 0x29E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6ECu;
label_29e6ec:
    // 0x29e6ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6f0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29e6f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29e6f4: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x29e6f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x29e6f8: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x29e6f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0x29e6fc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E6FCu;
    SET_GPR_U32(ctx, 31, 0x29E704u);
    ctx->pc = 0x29E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E6FCu;
    // 0x29e700: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E6FCu, 0x29E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E704u;
label_29e704:
    // 0x29e704: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e708: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29e70c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E70Cu;
    SET_GPR_U32(ctx, 31, 0x29E714u);
    ctx->pc = 0x29E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E70Cu;
    // 0x29e710: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E70Cu, 0x29E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E714u;
label_29e714:
    // 0x29e714: 0x8ee41180  lw          $a0, 0x1180($s7)
    ctx->pc = 0x29e714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29e718: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29e718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29e71c: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x29e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29e720: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x29e720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x29e724: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x29e724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29e728: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29e72c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29e72cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29e730: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29e730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29e734: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29e734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29e738: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29e738u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29e73c: 0x9c8611ac  lwu         $a2, 0x11AC($a0)
    ctx->pc = 0x29e73cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4524)));
    // 0x29e740: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29e740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29e744: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29e744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29e748: 0x3408800e  ori         $t0, $zero, 0x800E
    ctx->pc = 0x29e748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29e74c: 0x845b8  dsll        $t0, $t0, 22
    ctx->pc = 0x29e74cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 22);
    // 0x29e750: 0x35088c00  ori         $t0, $t0, 0x8C00
    ctx->pc = 0x29e750u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35840);
    // 0x29e754: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x29e754u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x29e758: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29e758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29e75c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e760: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29e760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29e764: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29e768: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E768u;
    SET_GPR_U32(ctx, 31, 0x29E770u);
    ctx->pc = 0x29E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E768u;
    // 0x29e76c: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E768u, 0x29E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E770u;
label_29e770:
    // 0x29e770: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29e774: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x29e774u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29e778: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x29e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x29e77c: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x29e77cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29e780: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x29e780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x29e784: 0x1840004a  blez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x29E784u;
    {
        const bool branch_taken_0x29e784 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E784u;
        // 0x29e788: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e784) {
            ctx->pc = 0x29E8B0u;
            goto label_29e8b0;
        }
    }
    ctx->pc = 0x29E78Cu;
    // 0x29e78c: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x29e78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e790: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29e790u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29e794: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x29e794u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29e798: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x29e798u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29e79c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x29e79cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29e7a0: 0x8e02118c  lw          $v0, 0x118C($s0)
    ctx->pc = 0x29e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29e7a4: 0x0  nop
    ctx->pc = 0x29e7a4u;
    // NOP
label_29e7a8:
    // 0x29e7a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29e7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7ac: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x29e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x29e7b0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e7b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e7b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29e7b8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29e7b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29e7bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29e7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29e7c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7c4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29e7c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29e7c8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E7C8u;
    SET_GPR_U32(ctx, 31, 0x29E7D0u);
    ctx->pc = 0x29E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E7C8u;
    // 0x29e7cc: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E7C8u, 0x29E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E7D0u;
label_29e7d0:
    // 0x29e7d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29e7d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29e7d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e7e0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E7E0u;
    SET_GPR_U32(ctx, 31, 0x29E7E8u);
    ctx->pc = 0x29E7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E7E0u;
    // 0x29e7e4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E7E0u, 0x29E7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E7E8u;
label_29e7e8:
    // 0x29e7e8: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29e7ec: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29e7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29e7f0: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29e7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29e7f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7f8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29e7fc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29e800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e804: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e808: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29e808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29e80c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29e80cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29e810: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e814: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29e814u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29e818: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29e818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29e81c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E81Cu;
    SET_GPR_U32(ctx, 31, 0x29E824u);
    ctx->pc = 0x29E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E81Cu;
    // 0x29e820: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E81Cu, 0x29E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E824u;
label_29e824:
    // 0x29e824: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29e824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29e828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e82c: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29e830: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29e830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e834: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e838: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29e838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29e83c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e83cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e840: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E840u;
    SET_GPR_U32(ctx, 31, 0x29E848u);
    ctx->pc = 0x29E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E840u;
    // 0x29e844: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E840u, 0x29E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E848u;
label_29e848:
    // 0x29e848: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29e84c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e850: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29e850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29e854: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29e854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29e858: 0x8e07118c  lw          $a3, 0x118C($s0)
    ctx->pc = 0x29e858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29e85c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29e860: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e864: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29e864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29e868: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29e868u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29e86c: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29e870: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e870u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e874: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29e874u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e878: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e87c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e87cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e880: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29e880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29e884: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E884u;
    SET_GPR_U32(ctx, 31, 0x29E88Cu);
    ctx->pc = 0x29E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E884u;
    // 0x29e888: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E884u, 0x29E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E88Cu;
label_29e88c:
    // 0x29e88c: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29e890: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29e890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e894: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29e894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29e898: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x29e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x29e89c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29e89cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29e8a0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x29e8a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x29e8a4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x29e8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29e8a8: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x29E8A8u;
    {
        const bool branch_taken_0x29e8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8A8u;
        // 0x29e8ac: 0x8e02118c  lw          $v0, 0x118C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8a8) {
            ctx->pc = 0x29E7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e7a8;
        }
    }
    ctx->pc = 0x29E8B0u;
label_29e8b0:
    // 0x29e8b0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x29e8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29e8b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x29e8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e8b8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x29e8b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e8bc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x29e8bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e8c0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x29e8c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e8c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29e8c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e8c8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x29e8c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e8cc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x29e8ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e8d0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x29e8d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e8d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8D8u;
        // 0x29e8dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E8E0u;
}
