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

// Function: Trans_Clipmatrix_set
// Address: 0x1538f0 - 0x153b00
void Trans_Clipmatrix_set_0x1538f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trans_Clipmatrix_set_0x1538f0");
#endif

    switch (ctx->pc) {
        case 0x153994u: goto label_153994;
        case 0x153a4cu: goto label_153a4c;
        case 0x153a5cu: goto label_153a5c;
        case 0x153a64u: goto label_153a64;
        default: break;
    }

    ctx->pc = 0x1538f0u;

    // 0x1538f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1538f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1538f4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1538f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1538f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1538f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1538fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1538fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153904: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x153904u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x153908: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x153908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15390c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x153910: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x153910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x153914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153918: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x153918u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
    // 0x15391c: 0xe7be00a0  swc1        $f30, 0xA0($sp)
    ctx->pc = 0x15391cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x153920: 0xe7bd0098  swc1        $f29, 0x98($sp)
    ctx->pc = 0x153920u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x153924: 0xe7bc0090  swc1        $f28, 0x90($sp)
    ctx->pc = 0x153924u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x153928: 0xe7bb0088  swc1        $f27, 0x88($sp)
    ctx->pc = 0x153928u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x15392c: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x15392cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x153930: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x153930u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x153934: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x153934u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x153938: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x153938u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15393c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x15393cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x153940: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x153940u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x153944: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x153944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x153948: 0x8e42aff0  lw          $v0, -0x5010($s2)
    ctx->pc = 0x153948u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x15394c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x15394cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x153950: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153954: 0xc44c0250  lwc1        $f12, 0x250($v0)
    ctx->pc = 0x153954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x153958: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x153958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15395c: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x15395cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x153960: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x153960u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x153964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x153968: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x153968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x15396c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x15396cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x153970: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x153970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x153974: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x153974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x153978: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x153978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x15397c: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x15397cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x153980: 0x0  nop
    ctx->pc = 0x153980u;
    // NOP
    // 0x153984: 0x0  nop
    ctx->pc = 0x153984u;
    // NOP
    // 0x153988: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x153988u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x15398c: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x15398Cu;
    SET_GPR_U32(ctx, 31, 0x153994u);
    ctx->pc = 0x153990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15398Cu;
    // 0x153990: 0x26716940  addiu       $s1, $s3, 0x6940 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 26944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x15398Cu, 0x153994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153994u;
label_153994:
    // 0x153994: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x153994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x153998: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x153998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x15399c: 0xc4566b88  lwc1        $f22, 0x6B88($v0)
    ctx->pc = 0x15399cu;
    { uint32_t bits = FAST_READ32(0x586B88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1539a0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1539a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1539a4: 0xc4941190  lwc1        $f20, 0x1190($a0)
    ctx->pc = 0x1539a4u;
    { uint32_t bits = FAST_READ32(0x3C1190u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1539a8: 0xc47a1180  lwc1        $f26, 0x1180($v1)
    ctx->pc = 0x1539a8u;
    { uint32_t bits = FAST_READ32(0x3C1180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1539ac: 0x4680d6a0  cvt.s.w     $f26, $f26
    ctx->pc = 0x1539acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[26], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x1539b0: 0x8e45aff0  lw          $a1, -0x5010($s2)
    ctx->pc = 0x1539b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946800)));
    // 0x1539b4: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x1539b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x1539b8: 0x0  nop
    ctx->pc = 0x1539b8u;
    // NOP
    // 0x1539bc: 0x0  nop
    ctx->pc = 0x1539bcu;
    // NOP
    // 0x1539c0: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x1539c0u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[22]);
    // 0x1539c4: 0x3c0149f7  lui         $at, 0x49F7
    ctx->pc = 0x1539c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18935 << 16));
    // 0x1539c8: 0x3421ff08  ori         $at, $at, 0xFF08
    ctx->pc = 0x1539c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65288);
    // 0x1539cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1539ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1539d0: 0xc4a10250  lwc1        $f1, 0x250($a1)
    ctx->pc = 0x1539d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1539d4: 0x26106900  addiu       $s0, $s0, 0x6900
    ctx->pc = 0x1539d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26880));
    // 0x1539d8: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x1539d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x1539dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1539dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1539e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1539e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1539e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1539e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1539e8: 0x3c01424c  lui         $at, 0x424C
    ctx->pc = 0x1539e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16972 << 16));
    // 0x1539ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1539ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1539f0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1539f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1539f4: 0x3c014233  lui         $at, 0x4233
    ctx->pc = 0x1539f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16947 << 16));
    // 0x1539f8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1539f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1539fc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1539fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x153a00: 0x0  nop
    ctx->pc = 0x153a00u;
    // NOP
    // 0x153a04: 0x0  nop
    ctx->pc = 0x153a04u;
    // NOP
    // 0x153a08: 0x4602d683  div.s       $f26, $f26, $f2
    ctx->pc = 0x153a08u;
    ctx->f[26] = ps2FpuDivide(ctx->fcr31, ctx->f[26], ctx->f[2]);
    // 0x153a0c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x153a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x153a10: 0x461ca502  mul.s       $f20, $f20, $f28
    ctx->pc = 0x153a10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
    // 0x153a14: 0x0  nop
    ctx->pc = 0x153a14u;
    // NOP
    // 0x153a18: 0x0  nop
    ctx->pc = 0x153a18u;
    // NOP
    // 0x153a1c: 0x4601ad43  div.s       $f21, $f21, $f1
    ctx->pc = 0x153a1cu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[1]);
    // 0x153a20: 0x0  nop
    ctx->pc = 0x153a20u;
    // NOP
    // 0x153a24: 0x0  nop
    ctx->pc = 0x153a24u;
    // NOP
    // 0x153a28: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x153a28u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x153a2c: 0x0  nop
    ctx->pc = 0x153a2cu;
    // NOP
    // 0x153a30: 0x0  nop
    ctx->pc = 0x153a30u;
    // NOP
    // 0x153a34: 0x4614ce43  div.s       $f25, $f25, $f20
    ctx->pc = 0x153a34u;
    ctx->f[25] = ps2FpuDivide(ctx->fcr31, ctx->f[25], ctx->f[20]);
    // 0x153a38: 0x0  nop
    ctx->pc = 0x153a38u;
    // NOP
    // 0x153a3c: 0x0  nop
    ctx->pc = 0x153a3cu;
    // NOP
    // 0x153a40: 0x4614c603  div.s       $f24, $f24, $f20
    ctx->pc = 0x153a40u;
    ctx->f[24] = ps2FpuDivide(ctx->fcr31, ctx->f[24], ctx->f[20]);
    // 0x153a44: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x153A44u;
    SET_GPR_U32(ctx, 31, 0x153A4Cu);
    ctx->pc = 0x153A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A44u;
    // 0x153a48: 0x4615ad40  add.s       $f21, $f21, $f21 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x153A44u, 0x153A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A4Cu;
label_153a4c:
    // 0x153a4c: 0x4600adc7  neg.s       $f23, $f21
    ctx->pc = 0x153a4cu;
    ctx->f[23] = FPU_NEG_S(ctx->f[21]);
    // 0x153a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x153a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a54: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x153A54u;
    SET_GPR_U32(ctx, 31, 0x153A5Cu);
    ctx->pc = 0x153A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A54u;
    // 0x153a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x153A54u, 0x153A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A5Cu;
label_153a5c:
    // 0x153a5c: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x153A5Cu;
    SET_GPR_U32(ctx, 31, 0x153A64u);
    ctx->pc = 0x153A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A5Cu;
    // 0x153a60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x153A5Cu, 0x153A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A64u;
label_153a64:
    // 0x153a64: 0x4616a582  mul.s       $f22, $f20, $f22
    ctx->pc = 0x153a64u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x153a68: 0xe63b003c  swc1        $f27, 0x3C($s1)
    ctx->pc = 0x153a68u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x153a6c: 0x461aa502  mul.s       $f20, $f20, $f26
    ctx->pc = 0x153a6cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
    // 0x153a70: 0xe63d0034  swc1        $f29, 0x34($s1)
    ctx->pc = 0x153a70u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x153a74: 0x461bad40  add.s       $f21, $f21, $f27
    ctx->pc = 0x153a74u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[27]);
    // 0x153a78: 0xe63d0030  swc1        $f29, 0x30($s1)
    ctx->pc = 0x153a78u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x153a7c: 0x4618b582  mul.s       $f22, $f22, $f24
    ctx->pc = 0x153a7cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x153a80: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x153a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153a84: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x153a84u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x153a88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153a8c: 0x461bbdc0  add.s       $f23, $f23, $f27
    ctx->pc = 0x153a8cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[27]);
    // 0x153a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153a94: 0x0  nop
    ctx->pc = 0x153a94u;
    // NOP
    // 0x153a98: 0x0  nop
    ctx->pc = 0x153a98u;
    // NOP
    // 0x153a9c: 0x461eb583  div.s       $f22, $f22, $f30
    ctx->pc = 0x153a9cu;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[30]);
    // 0x153aa0: 0xc7bd0098  lwc1        $f29, 0x98($sp)
    ctx->pc = 0x153aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x153aa4: 0x0  nop
    ctx->pc = 0x153aa4u;
    // NOP
    // 0x153aa8: 0x0  nop
    ctx->pc = 0x153aa8u;
    // NOP
    // 0x153aac: 0x461ea503  div.s       $f20, $f20, $f30
    ctx->pc = 0x153aacu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[30]);
    // 0x153ab0: 0xc7bb0088  lwc1        $f27, 0x88($sp)
    ctx->pc = 0x153ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x153ab4: 0x461cad42  mul.s       $f21, $f21, $f28
    ctx->pc = 0x153ab4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[28]);
    // 0x153ab8: 0xc7be00a0  lwc1        $f30, 0xA0($sp)
    ctx->pc = 0x153ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x153abc: 0x461cbdc2  mul.s       $f23, $f23, $f28
    ctx->pc = 0x153abcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[28]);
    // 0x153ac0: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x153ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x153ac4: 0xc7bc0090  lwc1        $f28, 0x90($sp)
    ctx->pc = 0x153ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x153ac8: 0xe6350038  swc1        $f21, 0x38($s1)
    ctx->pc = 0x153ac8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x153acc: 0xe6360014  swc1        $f22, 0x14($s1)
    ctx->pc = 0x153accu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x153ad0: 0xe6746940  swc1        $f20, 0x6940($s3)
    ctx->pc = 0x153ad0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 26944), bits); }
    // 0x153ad4: 0xe6370028  swc1        $f23, 0x28($s1)
    ctx->pc = 0x153ad4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x153ad8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x153ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153adc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x153adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153ae0: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x153ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x153ae4: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x153ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x153ae8: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x153ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x153aec: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x153aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x153af0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x153af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x153af4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x153af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153af8: 0x3e00008  jr          $ra
    ctx->pc = 0x153AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AF8u;
        // 0x153afc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153B00u;
}
