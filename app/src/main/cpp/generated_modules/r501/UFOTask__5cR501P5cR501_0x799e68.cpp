#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: UFOTask__5cR501P5cR501
// Address: 0x799e68 - 0x79a1f8
void UFOTask__5cR501P5cR501_0x799e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UFOTask__5cR501P5cR501_0x799e68");
#endif

    switch (ctx->pc) {
        case 0x799edcu: goto label_799edc;
        case 0x799efcu: goto label_799efc;
        case 0x799f14u: goto label_799f14;
        case 0x799f2cu: goto label_799f2c;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fd0u: goto label_799fd0;
        case 0x799ff8u: goto label_799ff8;
        case 0x79a040u: goto label_79a040;
        case 0x79a07cu: goto label_79a07c;
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a134u: goto label_79a134;
        case 0x79a174u: goto label_79a174;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1f0u: goto label_79a1f0;
        default: break;
    }

    ctx->pc = 0x799e68u;

    // 0x799e68: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x799e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x799e6c: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x799e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x799e70: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x799e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x799e74: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x799e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x799e78: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x799e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x799e7c: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x799e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x799e80: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x799e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x799e84: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x799e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x799e88: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x799e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x799e8c: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x799e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x799e90: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x799e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x799e94: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x799e94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x799e98: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x799e98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x799e9c: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x799e9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x799ea0: 0x8c820388  lw          $v0, 0x388($a0)
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x799ea4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x799ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799ea8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x799ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799eac: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x799eb0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x799eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799eb4: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x799eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799eb8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ebc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x799ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x799ec0: 0x24a50620  addiu       $a1, $a1, 0x620
    ctx->pc = 0x799ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
    // 0x799ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x799ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x799ecc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799ed0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799ed4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x799ED4u;
    SET_GPR_U32(ctx, 31, 0x799EDCu);
    ctx->pc = 0x799ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ED4u;
    // 0x799ed8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x799ED4u, 0x799EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EDCu;
label_799edc:
    // 0x799edc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x799ee0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799ee4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799ee8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x799ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799eec: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ef0: 0x24a50628  addiu       $a1, $a1, 0x628
    ctx->pc = 0x799ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1576));
    // 0x799ef4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x799EF4u;
    SET_GPR_U32(ctx, 31, 0x799EFCu);
    ctx->pc = 0x799EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF4u;
    // 0x799ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x799EF4u, 0x799EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EFCu;
label_799efc:
    // 0x799efc: 0x3c1e005d  lui         $fp, 0x5D
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)93 << 16));
    // 0x799f00: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799f04: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799f08: 0x24a50630  addiu       $a1, $a1, 0x630
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
    // 0x799f0c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x799F0Cu;
    SET_GPR_U32(ctx, 31, 0x799F14u);
    ctx->pc = 0x799F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F0Cu;
    // 0x799f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x799F0Cu, 0x799F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F14u;
label_799f14:
    // 0x799f14: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799f18: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799f1c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799f20: 0x24a50638  addiu       $a1, $a1, 0x638
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1592));
    // 0x799f24: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x799F24u;
    SET_GPR_U32(ctx, 31, 0x799F2Cu);
    ctx->pc = 0x799F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F24u;
    // 0x799f28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x799F24u, 0x799F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F2Cu;
label_799f2c:
    // 0x799f2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799f30: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x799f34: 0x3c01408a  lui         $at, 0x408A
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16522 << 16));
    // 0x799f38: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x799f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x799f3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799f40: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x799f44: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x799f48: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799f4c: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x799f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x799f50: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x799f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x799f54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799f58: 0x24750580  addiu       $s5, $v1, 0x580
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
    // 0x799f5c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799f60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799f64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799f68: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x799f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
    // 0x799f6c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799f70: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x799f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x799f74: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x799f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x799f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x799f7c: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x799f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x799f80: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x799f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x799f84: 0x27b600c0  addiu       $s6, $sp, 0xC0
    ctx->pc = 0x799f84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x799f88: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x799f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x799f8c: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x799f90: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x799f94: 0x24740590  addiu       $s4, $v1, 0x590
    ctx->pc = 0x799f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1424));
    // 0x799f98: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x799f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x799f9c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x799f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x799fa0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x799fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x799fa4: 0x8cc209d0  lw          $v0, 0x9D0($a2)
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2512)));
    // 0x799fa8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x799fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x799fac: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x799facu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x799fb0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x799fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x799fb4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x799fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x799fb8: 0xa3a00090  sb          $zero, 0x90($sp)
    ctx->pc = 0x799fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x799fbc: 0xa3a00091  sb          $zero, 0x91($sp)
    ctx->pc = 0x799fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 145), (uint8_t)GPR_U32(ctx, 0));
    // 0x799fc0: 0xa3a00092  sb          $zero, 0x92($sp)
    ctx->pc = 0x799fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 146), (uint8_t)GPR_U32(ctx, 0));
    // 0x799fc4: 0xac5d0384  sw          $sp, 0x384($v0)
    ctx->pc = 0x799fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 900), GPR_U32(ctx, 29));
label_799fc8:
    // 0x799fc8: 0xc1e7f5e  jal         func_79FD78
    ctx->pc = 0x799FC8u;
    SET_GPR_U32(ctx, 31, 0x799FD0u);
    ctx->pc = 0x799FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC8u;
    // 0x799fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79FD78u, 0x799FC8u, 0x799FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FD0u;
label_799fd0:
    // 0x799fd0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799fd4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x799fd8: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x799fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x799fdc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x799fe0: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x799fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x799fe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799fec: 0xacc20250  sw          $v0, 0x250($a2)
    ctx->pc = 0x799fecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 2));
    // 0x799ff0: 0xc1e80d6  jal         func_7A0358
    ctx->pc = 0x799FF0u;
    SET_GPR_U32(ctx, 31, 0x799FF8u);
    ctx->pc = 0x799FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF0u;
    // 0x799ff4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A0358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A0358u, 0x799FF0u, 0x799FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF8u;
label_799ff8:
    // 0x799ff8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x799ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x799ffc: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x799FFCu;
    {
        const bool branch_taken_0x799ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x79A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FFCu;
        // 0x79a000: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ffc) {
            ctx->pc = 0x79A018u;
            goto label_79a018;
        }
    }
    ctx->pc = 0x79A004u;
    // 0x79a004: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a008: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x79a008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a00c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a00cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a010: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x79a010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a014: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a018:
    // 0x79a018: 0x8fd0aff0  lw          $s0, -0x5010($fp)
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294946800)));
    // 0x79a01c: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x79a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79a020: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79a020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x79a024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79a024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79a028: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x79a028u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x79a02c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x79a02cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x79a030: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a034: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a038: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x79A038u;
    SET_GPR_U32(ctx, 31, 0x79A040u);
    ctx->pc = 0x79A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A038u;
    // 0x79a03c: 0x46156301  sub.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x79A038u, 0x79A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A040u;
label_79a040:
    // 0x79a040: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x79a044: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a048: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x79a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79a04c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x79a050: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a054: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x79a054u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x79a058: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x79a058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x79a05c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x79a05cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x79a060: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a064: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x79a064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x79a068: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x79a068u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x79a06c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x79a06cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x79a070: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x79a070u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x79a074: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x79A074u;
    SET_GPR_U32(ctx, 31, 0x79A07Cu);
    ctx->pc = 0x79A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A074u;
    // 0x79a078: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79A074u, 0x79A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A07Cu;
label_79a07c:
    // 0x79a07c: 0xc6010224  lwc1        $f1, 0x224($s0)
    ctx->pc = 0x79a07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a080: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x79a080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x79a084: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x79a084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x79a088: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x79a088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x79a08c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x79a08cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x79a090: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a094: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x79a098: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A098u;
    {
        const bool branch_taken_0x79a098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x79A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A098u;
        // 0x79a09c: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a098) {
            ctx->pc = 0x79A0B4u;
            goto label_79a0b4;
        }
    }
    ctx->pc = 0x79A0A0u;
    // 0x79a0a0: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x79a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x79a0a4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x79a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a0a8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a0a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a0ac: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x79a0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a0b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a0b4:
    // 0x79a0b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a0b8: 0xc05404a  jal         func_150128
    ctx->pc = 0x79A0B8u;
    SET_GPR_U32(ctx, 31, 0x79A0C0u);
    ctx->pc = 0x79A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B8u;
    // 0x79a0bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x79A0B8u, 0x79A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0C0u;
label_79a0c0:
    // 0x79a0c0: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x79a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a0c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x79a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a0c8: 0xe440024c  swc1        $f0, 0x24C($v0)
    ctx->pc = 0x79a0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
    // 0x79a0cc: 0xc6e10640  lwc1        $f1, 0x640($s7)
    ctx->pc = 0x79a0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a0d0: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x79a0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x79a0d4: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x79a0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x79a0d8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x79a0d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x79a0dc: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x79a0dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x79a0e0: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x79a0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a0e4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79a0e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79a0e8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x79a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a0ec: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x79a0ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a0f0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x79a0f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x79a0f4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79a0f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x79a0f8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79a0f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79a0fc: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x79a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a100: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x79a100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x79a104: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x79a104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a108: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a10c: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x79a110: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A110u;
    {
        const bool branch_taken_0x79a110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x79A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A110u;
        // 0x79a114: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a110) {
            ctx->pc = 0x79A12Cu;
            goto label_79a12c;
        }
    }
    ctx->pc = 0x79A118u;
    // 0x79a118: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x79a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x79a11c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x79a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a120: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a124: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x79a124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a128: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a12c:
    // 0x79a12c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x79A12Cu;
    SET_GPR_U32(ctx, 31, 0x79A134u);
    ctx->pc = 0x79A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A12Cu;
    // 0x79a130: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x79A12Cu, 0x79A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A134u;
label_79a134:
    // 0x79a134: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79a138: 0x4a00029  bltz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x79A138u;
    {
        const bool branch_taken_0x79a138 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a138) {
            ctx->pc = 0x79A1E0u;
            goto label_79a1e0;
        }
    }
    ctx->pc = 0x79A140u;
    // 0x79a140: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x79A140u;
    {
        const bool branch_taken_0x79a140 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x79A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A140u;
        // 0x79a144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a140) {
            ctx->pc = 0x79A174u;
            goto label_79a174;
        }
    }
    ctx->pc = 0x79A148u;
    // 0x79a148: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x79a14c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79a154: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x79a158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a15c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x79a160: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x79a160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x79a164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79a168: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x79a16c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x79A16Cu;
    SET_GPR_U32(ctx, 31, 0x79A174u);
    ctx->pc = 0x79A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A16Cu;
    // 0x79a170: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x79A16Cu, 0x79A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A174u;
label_79a174:
    // 0x79a174: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x79a178: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a17c: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79a180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a184: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a188: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x79a18c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a190: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a194: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x79a194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a198: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a19c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x79a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x79a1a0: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x79A1A0u;
    SET_GPR_U32(ctx, 31, 0x79A1A8u);
    ctx->pc = 0x79A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A0u;
    // 0x79a1a4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x79A1A0u, 0x79A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A8u;
label_79a1a8:
    // 0x79a1a8: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x79a1ac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79a1b0: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x79a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79a1b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a1b8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x79a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x79a1bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a1c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a1c4: 0xae240068  sw          $a0, 0x68($s1)
    ctx->pc = 0x79a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 4));
    // 0x79a1c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x79a1cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x79a1ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a1d0: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A1D0u;
    {
        const bool branch_taken_0x79a1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x79A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D0u;
        // 0x79a1d4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1d0) {
            ctx->pc = 0x79A1E0u;
            goto label_79a1e0;
        }
    }
    ctx->pc = 0x79A1D8u;
    // 0x79a1d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a1dc: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x79a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_79a1e0:
    // 0x79a1e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1e4: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
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
    // 0x79a1f0: 0x1000ff75  b           . + 4 + (-0x8B << 2)
    ctx->pc = 0x79A1F0u;
    {
        const bool branch_taken_0x79a1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a1f0) {
            ctx->pc = 0x799FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799fc8;
        }
    }
    ctx->pc = 0x79A1F8u;
}
} // namespace gh_r501
