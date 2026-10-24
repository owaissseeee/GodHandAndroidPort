#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlayInter__C14cEventScrLightPC17cEventSeqScrLightT1
// Address: 0x7b11a0 - 0x7b17a8
void movePlayInter__C14cEventScrLightPC17cEventSeqScrLightT1_0x7b11a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayInter__C14cEventScrLightPC17cEventSeqScrLightT1_0x7b11a0");
#endif

    switch (ctx->pc) {
        case 0x7b1204u: goto label_7b1204;
        case 0x7b1224u: goto label_7b1224;
        case 0x7b1238u: goto label_7b1238;
        case 0x7b1258u: goto label_7b1258;
        case 0x7b126cu: goto label_7b126c;
        case 0x7b1280u: goto label_7b1280;
        case 0x7b1298u: goto label_7b1298;
        case 0x7b12acu: goto label_7b12ac;
        case 0x7b12c0u: goto label_7b12c0;
        case 0x7b12f0u: goto label_7b12f0;
        case 0x7b1324u: goto label_7b1324;
        case 0x7b1358u: goto label_7b1358;
        case 0x7b138cu: goto label_7b138c;
        case 0x7b13c0u: goto label_7b13c0;
        case 0x7b13f4u: goto label_7b13f4;
        case 0x7b1428u: goto label_7b1428;
        case 0x7b145cu: goto label_7b145c;
        case 0x7b1490u: goto label_7b1490;
        case 0x7b14c4u: goto label_7b14c4;
        case 0x7b14f8u: goto label_7b14f8;
        case 0x7b152cu: goto label_7b152c;
        case 0x7b1560u: goto label_7b1560;
        case 0x7b1594u: goto label_7b1594;
        case 0x7b15c8u: goto label_7b15c8;
        case 0x7b15fcu: goto label_7b15fc;
        case 0x7b1630u: goto label_7b1630;
        case 0x7b1664u: goto label_7b1664;
        case 0x7b1698u: goto label_7b1698;
        case 0x7b16ccu: goto label_7b16cc;
        case 0x7b16e8u: goto label_7b16e8;
        case 0x7b16fcu: goto label_7b16fc;
        case 0x7b1710u: goto label_7b1710;
        case 0x7b1724u: goto label_7b1724;
        case 0x7b1738u: goto label_7b1738;
        case 0x7b174cu: goto label_7b174c;
        case 0x7b1760u: goto label_7b1760;
        case 0x7b1774u: goto label_7b1774;
        default: break;
    }

    ctx->pc = 0x7b11a0u;

    // 0x7b11a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7b11a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7b11a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b11a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b11a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b11a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b11ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x7b11acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b11b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b11b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b11b4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b11b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b11b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x7b11b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b11bc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b11bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b11c0: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b11c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b11c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b11c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b11c8: 0x26735248  addiu       $s3, $s3, 0x5248
    ctx->pc = 0x7b11c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 21064));
    // 0x7b11cc: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x7b11ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x7b11d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7b11d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b11d4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x7b11d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x7b11d8: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x7b11d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x7b11dc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x7b11dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x7b11e0: 0x26914700  addiu       $s1, $s4, 0x4700
    ctx->pc = 0x7b11e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 18176));
    // 0x7b11e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7b11e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7b11e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x7b11e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x7b11ec: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x7b11ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x7b11f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7b11f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b11f4: 0x0  nop
    ctx->pc = 0x7b11f4u;
    // NOP
    // 0x7b11f8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b11f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b11fc: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7B11FCu;
    SET_GPR_U32(ctx, 31, 0x7B1204u);
    ctx->pc = 0x7B1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B11FCu;
    // 0x7b1200: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7B11FCu, 0x7B1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1204u;
label_7b1204:
    // 0x7b1204: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x7b1204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x7b1208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7b1208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b120c: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x7b120cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x7b1210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7b1210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1214: 0x0  nop
    ctx->pc = 0x7b1214u;
    // NOP
    // 0x7b1218: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b121c: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7B121Cu;
    SET_GPR_U32(ctx, 31, 0x7B1224u);
    ctx->pc = 0x7B1220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B121Cu;
    // 0x7b1220: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7B121Cu, 0x7B1224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1224u;
label_7b1224:
    // 0x7b1224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7b1224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1228: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x7b1228u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x7b122c: 0xc48c000c  lwc1        $f12, 0xC($a0)
    ctx->pc = 0x7b122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b1230: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7B1230u;
    SET_GPR_U32(ctx, 31, 0x7B1238u);
    ctx->pc = 0x7B1234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1230u;
    // 0x7b1234: 0x84850006  lh          $a1, 0x6($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7B1230u, 0x7B1238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1238u;
label_7b1238:
    // 0x7b1238: 0x4615a541  sub.s       $f21, $f20, $f21
    ctx->pc = 0x7b1238u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x7b123c: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x7b123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b1240: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x7b1240u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x7b1244: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x7b1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x7b1248: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x7b1248u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x7b124c: 0x4614b501  sub.s       $f20, $f22, $f20
    ctx->pc = 0x7b124cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x7b1250: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1250u;
    SET_GPR_U32(ctx, 31, 0x7B1258u);
    ctx->pc = 0x7B1254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1250u;
    // 0x7b1254: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1250u, 0x7B1258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1258u;
label_7b1258:
    // 0x7b1258: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x7b1258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x7b125c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b125cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b1260: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x7b1260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b1264: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1264u;
    SET_GPR_U32(ctx, 31, 0x7B126Cu);
    ctx->pc = 0x7B1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1264u;
    // 0x7b1268: 0xc60d0010  lwc1        $f13, 0x10($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1264u, 0x7B126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B126Cu;
label_7b126c:
    // 0x7b126c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x7b126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x7b1270: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b1270u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b1274: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x7b1274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b1278: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1278u;
    SET_GPR_U32(ctx, 31, 0x7B1280u);
    ctx->pc = 0x7B127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1278u;
    // 0x7b127c: 0xc60d0014  lwc1        $f13, 0x14($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1278u, 0x7B1280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1280u;
label_7b1280:
    // 0x7b1280: 0xe636003c  swc1        $f22, 0x3C($s1)
    ctx->pc = 0x7b1280u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x7b1284: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b1284u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b1288: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x7b1288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x7b128c: 0xc64c001c  lwc1        $f12, 0x1C($s2)
    ctx->pc = 0x7b128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b1290: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1290u;
    SET_GPR_U32(ctx, 31, 0x7B1298u);
    ctx->pc = 0x7B1294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1290u;
    // 0x7b1294: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1290u, 0x7B1298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1298u;
label_7b1298:
    // 0x7b1298: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x7b1298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x7b129c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b129cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b12a0: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x7b12a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b12a4: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B12A4u;
    SET_GPR_U32(ctx, 31, 0x7B12ACu);
    ctx->pc = 0x7B12A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B12A4u;
    // 0x7b12a8: 0xc60d0020  lwc1        $f13, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B12A4u, 0x7B12ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B12ACu;
label_7b12ac:
    // 0x7b12ac: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x7b12acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x7b12b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b12b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b12b4: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x7b12b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b12b8: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B12B8u;
    SET_GPR_U32(ctx, 31, 0x7B12C0u);
    ctx->pc = 0x7B12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B12B8u;
    // 0x7b12bc: 0xc60d0024  lwc1        $f13, 0x24($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B12B8u, 0x7B12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B12C0u;
label_7b12c0:
    // 0x7b12c0: 0xe636005c  swc1        $f22, 0x5C($s1)
    ctx->pc = 0x7b12c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x7b12c4: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x7b12c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x7b12c8: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x7b12c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x7b12cc: 0x9242002c  lbu         $v0, 0x2C($s2)
    ctx->pc = 0x7b12ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x7b12d0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x7b12d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b12d4: 0x0  nop
    ctx->pc = 0x7b12d4u;
    // NOP
    // 0x7b12d8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b12d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b12dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7b12dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b12e0: 0x0  nop
    ctx->pc = 0x7b12e0u;
    // NOP
    // 0x7b12e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b12e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b12e8: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B12E8u;
    SET_GPR_U32(ctx, 31, 0x7B12F0u);
    ctx->pc = 0x7B12ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B12E8u;
    // 0x7b12ec: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B12E8u, 0x7B12F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B12F0u;
label_7b12f0:
    // 0x7b12f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b12f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b12f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b12f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b12f8: 0xa2824700  sb          $v0, 0x4700($s4)
    ctx->pc = 0x7b12f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18176), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b12fc: 0x9243002d  lbu         $v1, 0x2D($s2)
    ctx->pc = 0x7b12fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
    // 0x7b1300: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x7b1300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x7b1304: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b1304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1308: 0x0  nop
    ctx->pc = 0x7b1308u;
    // NOP
    // 0x7b130c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b130cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b1310: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b1310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b1314: 0x0  nop
    ctx->pc = 0x7b1314u;
    // NOP
    // 0x7b1318: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b1318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b131c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B131Cu;
    SET_GPR_U32(ctx, 31, 0x7B1324u);
    ctx->pc = 0x7B1320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B131Cu;
    // 0x7b1320: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B131Cu, 0x7B1324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1324u;
label_7b1324:
    // 0x7b1324: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b1324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1328: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b132c: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x7b132cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1330: 0x9243002e  lbu         $v1, 0x2E($s2)
    ctx->pc = 0x7b1330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
    // 0x7b1334: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x7b1334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x7b1338: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b1338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b133c: 0x0  nop
    ctx->pc = 0x7b133cu;
    // NOP
    // 0x7b1340: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b1344: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b1344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b1348: 0x0  nop
    ctx->pc = 0x7b1348u;
    // NOP
    // 0x7b134c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b134cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b1350: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1350u;
    SET_GPR_U32(ctx, 31, 0x7B1358u);
    ctx->pc = 0x7B1354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1350u;
    // 0x7b1354: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1350u, 0x7B1358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1358u;
label_7b1358:
    // 0x7b1358: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b1358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b135c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b135cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1360: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x7b1360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1364: 0x9243002f  lbu         $v1, 0x2F($s2)
    ctx->pc = 0x7b1364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
    // 0x7b1368: 0x9202002f  lbu         $v0, 0x2F($s0)
    ctx->pc = 0x7b1368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x7b136c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b136cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1370: 0x0  nop
    ctx->pc = 0x7b1370u;
    // NOP
    // 0x7b1374: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b1378: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b1378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b137c: 0x0  nop
    ctx->pc = 0x7b137cu;
    // NOP
    // 0x7b1380: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b1380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b1384: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1384u;
    SET_GPR_U32(ctx, 31, 0x7B138Cu);
    ctx->pc = 0x7B1388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1384u;
    // 0x7b1388: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1384u, 0x7B138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B138Cu;
label_7b138c:
    // 0x7b138c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b138cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1390: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1394: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x7b1394u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1398: 0x92430030  lbu         $v1, 0x30($s2)
    ctx->pc = 0x7b1398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x7b139c: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x7b139cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x7b13a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b13a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b13a4: 0x0  nop
    ctx->pc = 0x7b13a4u;
    // NOP
    // 0x7b13a8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b13a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b13ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b13acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b13b0: 0x0  nop
    ctx->pc = 0x7b13b0u;
    // NOP
    // 0x7b13b4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b13b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b13b8: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B13B8u;
    SET_GPR_U32(ctx, 31, 0x7B13C0u);
    ctx->pc = 0x7B13BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B13B8u;
    // 0x7b13bc: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B13B8u, 0x7B13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B13C0u;
label_7b13c0:
    // 0x7b13c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b13c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b13c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b13c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b13c8: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x7b13c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b13cc: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x7b13ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x7b13d0: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x7b13d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x7b13d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b13d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b13d8: 0x0  nop
    ctx->pc = 0x7b13d8u;
    // NOP
    // 0x7b13dc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b13dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b13e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b13e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b13e4: 0x0  nop
    ctx->pc = 0x7b13e4u;
    // NOP
    // 0x7b13e8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b13e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b13ec: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B13ECu;
    SET_GPR_U32(ctx, 31, 0x7B13F4u);
    ctx->pc = 0x7B13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B13ECu;
    // 0x7b13f0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B13ECu, 0x7B13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B13F4u;
label_7b13f4:
    // 0x7b13f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b13f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b13f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b13f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b13fc: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x7b13fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1400: 0x92430032  lbu         $v1, 0x32($s2)
    ctx->pc = 0x7b1400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x7b1404: 0x92020032  lbu         $v0, 0x32($s0)
    ctx->pc = 0x7b1404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x7b1408: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b1408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b140c: 0x0  nop
    ctx->pc = 0x7b140cu;
    // NOP
    // 0x7b1410: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b1414: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b1414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b1418: 0x0  nop
    ctx->pc = 0x7b1418u;
    // NOP
    // 0x7b141c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b141cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b1420: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1420u;
    SET_GPR_U32(ctx, 31, 0x7B1428u);
    ctx->pc = 0x7B1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1420u;
    // 0x7b1424: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1420u, 0x7B1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1428u;
label_7b1428:
    // 0x7b1428: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b1428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b142c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b142cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1430: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x7b1430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1434: 0x92430033  lbu         $v1, 0x33($s2)
    ctx->pc = 0x7b1434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x7b1438: 0x92020033  lbu         $v0, 0x33($s0)
    ctx->pc = 0x7b1438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
    // 0x7b143c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b143cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1440: 0x0  nop
    ctx->pc = 0x7b1440u;
    // NOP
    // 0x7b1444: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b1448: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b1448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b144c: 0x0  nop
    ctx->pc = 0x7b144cu;
    // NOP
    // 0x7b1450: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b1450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b1454: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1454u;
    SET_GPR_U32(ctx, 31, 0x7B145Cu);
    ctx->pc = 0x7B1458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1454u;
    // 0x7b1458: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1454u, 0x7B145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B145Cu;
label_7b145c:
    // 0x7b145c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b145cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1460: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1464: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x7b1464u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1468: 0x92430034  lbu         $v1, 0x34($s2)
    ctx->pc = 0x7b1468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x7b146c: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x7b146cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x7b1470: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b1470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1474: 0x0  nop
    ctx->pc = 0x7b1474u;
    // NOP
    // 0x7b1478: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b147c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b147cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b1480: 0x0  nop
    ctx->pc = 0x7b1480u;
    // NOP
    // 0x7b1484: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b1484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b1488: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1488u;
    SET_GPR_U32(ctx, 31, 0x7B1490u);
    ctx->pc = 0x7B148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1488u;
    // 0x7b148c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1488u, 0x7B1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1490u;
label_7b1490:
    // 0x7b1490: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b1490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1494: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1498: 0xa2220060  sb          $v0, 0x60($s1)
    ctx->pc = 0x7b1498u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b149c: 0x92430035  lbu         $v1, 0x35($s2)
    ctx->pc = 0x7b149cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x7b14a0: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x7b14a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x7b14a4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b14a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b14a8: 0x0  nop
    ctx->pc = 0x7b14a8u;
    // NOP
    // 0x7b14ac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b14acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b14b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b14b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b14b4: 0x0  nop
    ctx->pc = 0x7b14b4u;
    // NOP
    // 0x7b14b8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b14b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b14bc: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B14BCu;
    SET_GPR_U32(ctx, 31, 0x7B14C4u);
    ctx->pc = 0x7B14C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B14BCu;
    // 0x7b14c0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B14BCu, 0x7B14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B14C4u;
label_7b14c4:
    // 0x7b14c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b14c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b14c8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b14c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b14cc: 0xa2220061  sb          $v0, 0x61($s1)
    ctx->pc = 0x7b14ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b14d0: 0x92430036  lbu         $v1, 0x36($s2)
    ctx->pc = 0x7b14d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x7b14d4: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x7b14d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x7b14d8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b14d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b14dc: 0x0  nop
    ctx->pc = 0x7b14dcu;
    // NOP
    // 0x7b14e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b14e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b14e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b14e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b14e8: 0x0  nop
    ctx->pc = 0x7b14e8u;
    // NOP
    // 0x7b14ec: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b14ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b14f0: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B14F0u;
    SET_GPR_U32(ctx, 31, 0x7B14F8u);
    ctx->pc = 0x7B14F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B14F0u;
    // 0x7b14f4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B14F0u, 0x7B14F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B14F8u;
label_7b14f8:
    // 0x7b14f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b14f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b14fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b14fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1500: 0xa2220062  sb          $v0, 0x62($s1)
    ctx->pc = 0x7b1500u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 98), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1504: 0x92430037  lbu         $v1, 0x37($s2)
    ctx->pc = 0x7b1504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x7b1508: 0x92020037  lbu         $v0, 0x37($s0)
    ctx->pc = 0x7b1508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
    // 0x7b150c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b150cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1510: 0x0  nop
    ctx->pc = 0x7b1510u;
    // NOP
    // 0x7b1514: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b1518: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b1518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b151c: 0x0  nop
    ctx->pc = 0x7b151cu;
    // NOP
    // 0x7b1520: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b1520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b1524: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1524u;
    SET_GPR_U32(ctx, 31, 0x7B152Cu);
    ctx->pc = 0x7B1528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1524u;
    // 0x7b1528: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1524u, 0x7B152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B152Cu;
label_7b152c:
    // 0x7b152c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b152cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1530: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1534: 0xa2220063  sb          $v0, 0x63($s1)
    ctx->pc = 0x7b1534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1538: 0x92430038  lbu         $v1, 0x38($s2)
    ctx->pc = 0x7b1538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x7b153c: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x7b153cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x7b1540: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b1540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1544: 0x0  nop
    ctx->pc = 0x7b1544u;
    // NOP
    // 0x7b1548: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b154c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b154cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b1550: 0x0  nop
    ctx->pc = 0x7b1550u;
    // NOP
    // 0x7b1554: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b1554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b1558: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1558u;
    SET_GPR_U32(ctx, 31, 0x7B1560u);
    ctx->pc = 0x7B155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1558u;
    // 0x7b155c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1558u, 0x7B1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1560u;
label_7b1560:
    // 0x7b1560: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b1560u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1564: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1568: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x7b1568u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b156c: 0x92430039  lbu         $v1, 0x39($s2)
    ctx->pc = 0x7b156cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x7b1570: 0x92020039  lbu         $v0, 0x39($s0)
    ctx->pc = 0x7b1570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x7b1574: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b1574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1578: 0x0  nop
    ctx->pc = 0x7b1578u;
    // NOP
    // 0x7b157c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b157cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b1580: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b1580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b1584: 0x0  nop
    ctx->pc = 0x7b1584u;
    // NOP
    // 0x7b1588: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b1588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b158c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B158Cu;
    SET_GPR_U32(ctx, 31, 0x7B1594u);
    ctx->pc = 0x7B1590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B158Cu;
    // 0x7b1590: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B158Cu, 0x7B1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1594u;
label_7b1594:
    // 0x7b1594: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b1594u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1598: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b159c: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x7b159cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b15a0: 0x9243003a  lbu         $v1, 0x3A($s2)
    ctx->pc = 0x7b15a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
    // 0x7b15a4: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x7b15a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x7b15a8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b15a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b15ac: 0x0  nop
    ctx->pc = 0x7b15acu;
    // NOP
    // 0x7b15b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b15b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b15b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b15b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b15b8: 0x0  nop
    ctx->pc = 0x7b15b8u;
    // NOP
    // 0x7b15bc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b15bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b15c0: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B15C0u;
    SET_GPR_U32(ctx, 31, 0x7B15C8u);
    ctx->pc = 0x7B15C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B15C0u;
    // 0x7b15c4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B15C0u, 0x7B15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B15C8u;
label_7b15c8:
    // 0x7b15c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b15c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b15cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b15ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b15d0: 0xa222000a  sb          $v0, 0xA($s1)
    ctx->pc = 0x7b15d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b15d4: 0x9243003b  lbu         $v1, 0x3B($s2)
    ctx->pc = 0x7b15d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 59)));
    // 0x7b15d8: 0x9202003b  lbu         $v0, 0x3B($s0)
    ctx->pc = 0x7b15d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x7b15dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b15dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b15e0: 0x0  nop
    ctx->pc = 0x7b15e0u;
    // NOP
    // 0x7b15e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b15e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b15e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b15e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b15ec: 0x0  nop
    ctx->pc = 0x7b15ecu;
    // NOP
    // 0x7b15f0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b15f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b15f4: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B15F4u;
    SET_GPR_U32(ctx, 31, 0x7B15FCu);
    ctx->pc = 0x7B15F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B15F4u;
    // 0x7b15f8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B15F4u, 0x7B15FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B15FCu;
label_7b15fc:
    // 0x7b15fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b15fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1600: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1604: 0xa222000b  sb          $v0, 0xB($s1)
    ctx->pc = 0x7b1604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1608: 0x9243003c  lbu         $v1, 0x3C($s2)
    ctx->pc = 0x7b1608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x7b160c: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x7b160cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x7b1610: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b1610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1614: 0x0  nop
    ctx->pc = 0x7b1614u;
    // NOP
    // 0x7b1618: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b161c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b161cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b1620: 0x0  nop
    ctx->pc = 0x7b1620u;
    // NOP
    // 0x7b1624: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b1624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b1628: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1628u;
    SET_GPR_U32(ctx, 31, 0x7B1630u);
    ctx->pc = 0x7B162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1628u;
    // 0x7b162c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1628u, 0x7B1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1630u;
label_7b1630:
    // 0x7b1630: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b1630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1634: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b1638: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x7b1638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b163c: 0x9243003d  lbu         $v1, 0x3D($s2)
    ctx->pc = 0x7b163cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
    // 0x7b1640: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x7b1640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
    // 0x7b1644: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b1644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b1648: 0x0  nop
    ctx->pc = 0x7b1648u;
    // NOP
    // 0x7b164c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b164cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b1650: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b1650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b1654: 0x0  nop
    ctx->pc = 0x7b1654u;
    // NOP
    // 0x7b1658: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b1658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b165c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B165Cu;
    SET_GPR_U32(ctx, 31, 0x7B1664u);
    ctx->pc = 0x7B1660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B165Cu;
    // 0x7b1660: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B165Cu, 0x7B1664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1664u;
label_7b1664:
    // 0x7b1664: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b1664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b1668: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b1668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b166c: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x7b166cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1670: 0x9243003e  lbu         $v1, 0x3E($s2)
    ctx->pc = 0x7b1670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x7b1674: 0x9202003e  lbu         $v0, 0x3E($s0)
    ctx->pc = 0x7b1674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x7b1678: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b1678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b167c: 0x0  nop
    ctx->pc = 0x7b167cu;
    // NOP
    // 0x7b1680: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b1680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b1684: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b1684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b1688: 0x0  nop
    ctx->pc = 0x7b1688u;
    // NOP
    // 0x7b168c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b168cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b1690: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1690u;
    SET_GPR_U32(ctx, 31, 0x7B1698u);
    ctx->pc = 0x7B1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1690u;
    // 0x7b1694: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1690u, 0x7B1698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1698u;
label_7b1698:
    // 0x7b1698: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b1698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b169c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b169cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b16a0: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x7b16a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b16a4: 0x9243003f  lbu         $v1, 0x3F($s2)
    ctx->pc = 0x7b16a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
    // 0x7b16a8: 0x9202003f  lbu         $v0, 0x3F($s0)
    ctx->pc = 0x7b16a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
    // 0x7b16ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b16acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b16b0: 0x0  nop
    ctx->pc = 0x7b16b0u;
    // NOP
    // 0x7b16b4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b16b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b16b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b16b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b16bc: 0x0  nop
    ctx->pc = 0x7b16bcu;
    // NOP
    // 0x7b16c0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b16c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b16c4: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B16C4u;
    SET_GPR_U32(ctx, 31, 0x7B16CCu);
    ctx->pc = 0x7B16C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B16C4u;
    // 0x7b16c8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B16C4u, 0x7B16CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B16CCu;
label_7b16cc:
    // 0x7b16cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b16ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b16d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b16d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b16d4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b16d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b16d8: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x7b16d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b16dc: 0xc64c0040  lwc1        $f12, 0x40($s2)
    ctx->pc = 0x7b16dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b16e0: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B16E0u;
    SET_GPR_U32(ctx, 31, 0x7B16E8u);
    ctx->pc = 0x7B16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B16E0u;
    // 0x7b16e4: 0xc60d0040  lwc1        $f13, 0x40($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B16E0u, 0x7B16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B16E8u;
label_7b16e8:
    // 0x7b16e8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x7b16e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x7b16ec: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b16ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b16f0: 0xc64c0044  lwc1        $f12, 0x44($s2)
    ctx->pc = 0x7b16f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b16f4: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B16F4u;
    SET_GPR_U32(ctx, 31, 0x7B16FCu);
    ctx->pc = 0x7B16F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B16F4u;
    // 0x7b16f8: 0xc60d0044  lwc1        $f13, 0x44($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B16F4u, 0x7B16FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B16FCu;
label_7b16fc:
    // 0x7b16fc: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x7b16fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x7b1700: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b1700u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b1704: 0xc64c0048  lwc1        $f12, 0x48($s2)
    ctx->pc = 0x7b1704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b1708: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1708u;
    SET_GPR_U32(ctx, 31, 0x7B1710u);
    ctx->pc = 0x7B170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1708u;
    // 0x7b170c: 0xc60d0048  lwc1        $f13, 0x48($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1708u, 0x7B1710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1710u;
label_7b1710:
    // 0x7b1710: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x7b1710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x7b1714: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b1714u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b1718: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x7b1718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b171c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B171Cu;
    SET_GPR_U32(ctx, 31, 0x7B1724u);
    ctx->pc = 0x7B1720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B171Cu;
    // 0x7b1720: 0xc60d004c  lwc1        $f13, 0x4C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B171Cu, 0x7B1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1724u;
label_7b1724:
    // 0x7b1724: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x7b1724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x7b1728: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b1728u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b172c: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x7b172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b1730: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1730u;
    SET_GPR_U32(ctx, 31, 0x7B1738u);
    ctx->pc = 0x7B1734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1730u;
    // 0x7b1734: 0xc60d0050  lwc1        $f13, 0x50($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1730u, 0x7B1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1738u;
label_7b1738:
    // 0x7b1738: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x7b1738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x7b173c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b173cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b1740: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x7b1740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b1744: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1744u;
    SET_GPR_U32(ctx, 31, 0x7B174Cu);
    ctx->pc = 0x7B1748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1744u;
    // 0x7b1748: 0xc60d0054  lwc1        $f13, 0x54($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1744u, 0x7B174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B174Cu;
label_7b174c:
    // 0x7b174c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x7b174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x7b1750: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b1750u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b1754: 0xc64c0058  lwc1        $f12, 0x58($s2)
    ctx->pc = 0x7b1754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b1758: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B1758u;
    SET_GPR_U32(ctx, 31, 0x7B1760u);
    ctx->pc = 0x7B175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1758u;
    // 0x7b175c: 0xc60d0058  lwc1        $f13, 0x58($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B1758u, 0x7B1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1760u;
label_7b1760:
    // 0x7b1760: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x7b1760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x7b1764: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b1764u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b1768: 0xc64c005c  lwc1        $f12, 0x5C($s2)
    ctx->pc = 0x7b1768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b176c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B176Cu;
    SET_GPR_U32(ctx, 31, 0x7B1774u);
    ctx->pc = 0x7B1770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B176Cu;
    // 0x7b1770: 0xc60d005c  lwc1        $f13, 0x5C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B176Cu, 0x7B1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1774u;
label_7b1774:
    // 0x7b1774: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x7b1774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x7b1778: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b1778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b177c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b177cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b1780: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b1780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b1784: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b1784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b1788: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b1788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b178c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b1790: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x7b1790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7b1794: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x7b1794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7b1798: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x7b1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7b179c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B179Cu;
        // 0x7b17a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B179Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B17A4u;
    // 0x7b17a4: 0x0  nop
    ctx->pc = 0x7b17a4u;
    // NOP
    ctx->pc = 0x7b17a8u;
}
} // namespace gh_event
