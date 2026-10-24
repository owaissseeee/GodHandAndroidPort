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

// Function: func_001F1148
// Address: 0x1f1148 - 0x1f1388
void func_001F1148_0x1f1148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F1148_0x1f1148");
#endif

    switch (ctx->pc) {
        case 0x1f11a4u: goto label_1f11a4;
        case 0x1f11c4u: goto label_1f11c4;
        case 0x1f11d0u: goto label_1f11d0;
        case 0x1f11f0u: goto label_1f11f0;
        case 0x1f11fcu: goto label_1f11fc;
        case 0x1f121cu: goto label_1f121c;
        case 0x1f1224u: goto label_1f1224;
        case 0x1f1230u: goto label_1f1230;
        case 0x1f1238u: goto label_1f1238;
        case 0x1f1244u: goto label_1f1244;
        case 0x1f124cu: goto label_1f124c;
        case 0x1f1258u: goto label_1f1258;
        case 0x1f126cu: goto label_1f126c;
        case 0x1f1274u: goto label_1f1274;
        case 0x1f1280u: goto label_1f1280;
        case 0x1f1288u: goto label_1f1288;
        case 0x1f1294u: goto label_1f1294;
        case 0x1f129cu: goto label_1f129c;
        case 0x1f12a4u: goto label_1f12a4;
        case 0x1f12d0u: goto label_1f12d0;
        case 0x1f130cu: goto label_1f130c;
        case 0x1f1348u: goto label_1f1348;
        default: break;
    }

    ctx->pc = 0x1f1148u;

    // 0x1f1148: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f1148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f114c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1150: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f1150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f1154: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f1154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f1158: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f1158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f115c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f1160: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f1164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f1168: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f1168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f116c: 0x8e430b94  lw          $v1, 0xB94($s2)
    ctx->pc = 0x1f116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2964)));
    // 0x1f1170: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x1f1170u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1174: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1f1174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1178: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1178u;
    {
        const bool branch_taken_0x1f1178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1178u;
        // 0x1f117c: 0xa3a40010  sb          $a0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1178) {
            ctx->pc = 0x1F1190u;
            goto label_1f1190;
        }
    }
    ctx->pc = 0x1F1180u;
    // 0x1f1180: 0x1064004d  beq         $v1, $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1F1180u;
    {
        const bool branch_taken_0x1f1180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1180u;
        // 0x1f1184: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1180) {
            ctx->pc = 0x1F12B8u;
            goto label_1f12b8;
        }
    }
    ctx->pc = 0x1F1188u;
    // 0x1f1188: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1F1188u;
    {
        const bool branch_taken_0x1f1188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1188u;
        // 0x1f118c: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1188) {
            ctx->pc = 0x1F1370u;
            goto label_1f1370;
        }
    }
    ctx->pc = 0x1F1190u;
label_1f1190:
    // 0x1f1190: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1f1190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1f1194: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f1194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1f1198: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f1198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f119c: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F119Cu;
    SET_GPR_U32(ctx, 31, 0x1F11A4u);
    ctx->pc = 0x1F11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F119Cu;
    // 0x1f11a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F119Cu, 0x1F11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11A4u;
label_1f11a4:
    // 0x1f11a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f11a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f11a8: 0x0  nop
    ctx->pc = 0x1f11a8u;
    // NOP
    // 0x1f11ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f11acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f11b0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f11b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f11b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f11b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f11b8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f11b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f11bc: 0xc0a5762  jal         func_295D88
    ctx->pc = 0x1F11BCu;
    SET_GPR_U32(ctx, 31, 0x1F11C4u);
    ctx->pc = 0x1F11C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11BCu;
    // 0x1f11c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D88u, 0x1F11BCu, 0x1F11C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11C4u;
label_1f11c4:
    // 0x1f11c4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f11c8: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F11C8u;
    SET_GPR_U32(ctx, 31, 0x1F11D0u);
    ctx->pc = 0x1F11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11C8u;
    // 0x1f11cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F11C8u, 0x1F11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11D0u;
label_1f11d0:
    // 0x1f11d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f11d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f11d4: 0x0  nop
    ctx->pc = 0x1f11d4u;
    // NOP
    // 0x1f11d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f11d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f11dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f11dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f11e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f11e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f11e4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f11e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f11e8: 0xc0a5762  jal         func_295D88
    ctx->pc = 0x1F11E8u;
    SET_GPR_U32(ctx, 31, 0x1F11F0u);
    ctx->pc = 0x1F11ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11E8u;
    // 0x1f11ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D88u, 0x1F11E8u, 0x1F11F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11F0u;
label_1f11f0:
    // 0x1f11f0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f11f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f11f4: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F11F4u;
    SET_GPR_U32(ctx, 31, 0x1F11FCu);
    ctx->pc = 0x1F11F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11F4u;
    // 0x1f11f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F11F4u, 0x1F11FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11FCu;
label_1f11fc:
    // 0x1f11fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f11fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1200: 0x0  nop
    ctx->pc = 0x1f1200u;
    // NOP
    // 0x1f1204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f1208: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f1208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f120c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f120cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f1210: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f1210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f1214: 0xc0a5762  jal         func_295D88
    ctx->pc = 0x1F1214u;
    SET_GPR_U32(ctx, 31, 0x1F121Cu);
    ctx->pc = 0x1F1218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1214u;
    // 0x1f1218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D88u, 0x1F1214u, 0x1F121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F121Cu;
label_1f121c:
    // 0x1f121c: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F121Cu;
    SET_GPR_U32(ctx, 31, 0x1F1224u);
    ctx->pc = 0x1F1220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F121Cu;
    // 0x1f1220: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F121Cu, 0x1F1224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1224u;
label_1f1224:
    // 0x1f1224: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f1224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1228: 0xc0a574c  jal         func_295D30
    ctx->pc = 0x1F1228u;
    SET_GPR_U32(ctx, 31, 0x1F1230u);
    ctx->pc = 0x1F122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1228u;
    // 0x1f122c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D30u, 0x1F1228u, 0x1F1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1230u;
label_1f1230:
    // 0x1f1230: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F1230u;
    SET_GPR_U32(ctx, 31, 0x1F1238u);
    ctx->pc = 0x1F1234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1230u;
    // 0x1f1234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F1230u, 0x1F1238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1238u;
label_1f1238:
    // 0x1f1238: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f123c: 0xc0a574c  jal         func_295D30
    ctx->pc = 0x1F123Cu;
    SET_GPR_U32(ctx, 31, 0x1F1244u);
    ctx->pc = 0x1F1240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F123Cu;
    // 0x1f1240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D30u, 0x1F123Cu, 0x1F1244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1244u;
label_1f1244:
    // 0x1f1244: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F1244u;
    SET_GPR_U32(ctx, 31, 0x1F124Cu);
    ctx->pc = 0x1F1248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1244u;
    // 0x1f1248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F1244u, 0x1F124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F124Cu;
label_1f124c:
    // 0x1f124c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f124cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1250: 0xc0a574c  jal         func_295D30
    ctx->pc = 0x1F1250u;
    SET_GPR_U32(ctx, 31, 0x1F1258u);
    ctx->pc = 0x1F1254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1250u;
    // 0x1f1254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D30u, 0x1F1250u, 0x1F1258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1258u;
label_1f1258:
    // 0x1f1258: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1f1258u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1f125c: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x1f125cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1260: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1f1260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1f1264: 0xc0a421a  jal         func_290868
    ctx->pc = 0x1F1264u;
    SET_GPR_U32(ctx, 31, 0x1F126Cu);
    ctx->pc = 0x1F1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1264u;
    // 0x1f1268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x1F1264u, 0x1F126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F126Cu;
label_1f126c:
    // 0x1f126c: 0xc09d578  jal         func_2755E0
    ctx->pc = 0x1F126Cu;
    SET_GPR_U32(ctx, 31, 0x1F1274u);
    ctx->pc = 0x1F1270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F126Cu;
    // 0x1f1270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755E0u, 0x1F126Cu, 0x1F1274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1274u;
label_1f1274:
    // 0x1f1274: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x1f1274u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1278: 0xc0a421a  jal         func_290868
    ctx->pc = 0x1F1278u;
    SET_GPR_U32(ctx, 31, 0x1F1280u);
    ctx->pc = 0x1F127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1278u;
    // 0x1f127c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x1F1278u, 0x1F1280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1280u;
label_1f1280:
    // 0x1f1280: 0xc09d578  jal         func_2755E0
    ctx->pc = 0x1F1280u;
    SET_GPR_U32(ctx, 31, 0x1F1288u);
    ctx->pc = 0x1F1284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1280u;
    // 0x1f1284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755E0u, 0x1F1280u, 0x1F1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1288u;
label_1f1288:
    // 0x1f1288: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1f1288u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f128c: 0xc0a421a  jal         func_290868
    ctx->pc = 0x1F128Cu;
    SET_GPR_U32(ctx, 31, 0x1F1294u);
    ctx->pc = 0x1F1290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F128Cu;
    // 0x1f1290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x1F128Cu, 0x1F1294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1294u;
label_1f1294:
    // 0x1f1294: 0xc09d578  jal         func_2755E0
    ctx->pc = 0x1F1294u;
    SET_GPR_U32(ctx, 31, 0x1F129Cu);
    ctx->pc = 0x1F1298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1294u;
    // 0x1f1298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755E0u, 0x1F1294u, 0x1F129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F129Cu;
label_1f129c:
    // 0x1f129c: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F129Cu;
    SET_GPR_U32(ctx, 31, 0x1F12A4u);
    ctx->pc = 0x1F12A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F129Cu;
    // 0x1f12a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F129Cu, 0x1F12A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12A4u;
label_1f12a4:
    // 0x1f12a4: 0x8e420b94  lw          $v0, 0xB94($s2)
    ctx->pc = 0x1f12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2964)));
    // 0x1f12a8: 0xae400bac  sw          $zero, 0xBAC($s2)
    ctx->pc = 0x1f12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2988), GPR_U32(ctx, 0));
    // 0x1f12ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f12acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f12b0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F12B0u;
    {
        const bool branch_taken_0x1f12b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12B0u;
        // 0x1f12b4: 0xae420b94  sw          $v0, 0xB94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12b0) {
            ctx->pc = 0x1F1368u;
            goto label_1f1368;
        }
    }
    ctx->pc = 0x1F12B8u;
label_1f12b8:
    // 0x1f12b8: 0x9e420bac  lwu         $v0, 0xBAC($s2)
    ctx->pc = 0x1f12b8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2988)));
    // 0x1f12bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f12bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f12c0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F12C0u;
    {
        const bool branch_taken_0x1f12c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f12c0) {
            ctx->pc = 0x1F12C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F12C0u;
            // 0x1f12c4: 0x9e420bac  lwu         $v0, 0xBAC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2988)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F12F4u;
            goto label_1f12f4;
        }
    }
    ctx->pc = 0x1F12C8u;
    // 0x1f12c8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x1F12C8u;
    SET_GPR_U32(ctx, 31, 0x1F12D0u);
    ctx->pc = 0x1F12CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12C8u;
    // 0x1f12cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x1F12C8u, 0x1F12D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12D0u;
label_1f12d0:
    // 0x1f12d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F12D0u;
    {
        const bool branch_taken_0x1f12d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f12d0) {
            ctx->pc = 0x1F12D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F12D0u;
            // 0x1f12d4: 0x9e420bac  lwu         $v0, 0xBAC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2988)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F12F4u;
            goto label_1f12f4;
        }
    }
    ctx->pc = 0x1F12D8u;
    // 0x1f12d8: 0x8e420b8c  lw          $v0, 0xB8C($s2)
    ctx->pc = 0x1f12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2956)));
    // 0x1f12dc: 0x8e430bac  lw          $v1, 0xBAC($s2)
    ctx->pc = 0x1f12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2988)));
    // 0x1f12e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f12e4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1f12e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1f12e8: 0xae420b8c  sw          $v0, 0xB8C($s2)
    ctx->pc = 0x1f12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2956), GPR_U32(ctx, 2));
    // 0x1f12ec: 0xae430bac  sw          $v1, 0xBAC($s2)
    ctx->pc = 0x1f12ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2988), GPR_U32(ctx, 3));
    // 0x1f12f0: 0x9e420bac  lwu         $v0, 0xBAC($s2)
    ctx->pc = 0x1f12f0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2988)));
label_1f12f4:
    // 0x1f12f4: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1f12f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1f12f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f12f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f12fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F12FCu;
    {
        const bool branch_taken_0x1f12fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f12fc) {
            ctx->pc = 0x1F1300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F12FCu;
            // 0x1f1300: 0x9e420bac  lwu         $v0, 0xBAC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2988)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1330u;
            goto label_1f1330;
        }
    }
    ctx->pc = 0x1F1304u;
    // 0x1f1304: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x1F1304u;
    SET_GPR_U32(ctx, 31, 0x1F130Cu);
    ctx->pc = 0x1F1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1304u;
    // 0x1f1308: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x1F1304u, 0x1F130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F130Cu;
label_1f130c:
    // 0x1f130c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F130Cu;
    {
        const bool branch_taken_0x1f130c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f130c) {
            ctx->pc = 0x1F1310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F130Cu;
            // 0x1f1310: 0x9e420bac  lwu         $v0, 0xBAC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2988)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1330u;
            goto label_1f1330;
        }
    }
    ctx->pc = 0x1F1314u;
    // 0x1f1314: 0x8e420b8c  lw          $v0, 0xB8C($s2)
    ctx->pc = 0x1f1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2956)));
    // 0x1f1318: 0x8e430bac  lw          $v1, 0xBAC($s2)
    ctx->pc = 0x1f1318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2988)));
    // 0x1f131c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1320: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f1320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f1324: 0xae420b8c  sw          $v0, 0xB8C($s2)
    ctx->pc = 0x1f1324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2956), GPR_U32(ctx, 2));
    // 0x1f1328: 0xae430bac  sw          $v1, 0xBAC($s2)
    ctx->pc = 0x1f1328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2988), GPR_U32(ctx, 3));
    // 0x1f132c: 0x9e420bac  lwu         $v0, 0xBAC($s2)
    ctx->pc = 0x1f132cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2988)));
label_1f1330:
    // 0x1f1330: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1f1330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1f1334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f1334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f1338: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1338u;
    {
        const bool branch_taken_0x1f1338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1338u;
        // 0x1f133c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1338) {
            ctx->pc = 0x1F136Cu;
            goto label_1f136c;
        }
    }
    ctx->pc = 0x1F1340u;
    // 0x1f1340: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x1F1340u;
    SET_GPR_U32(ctx, 31, 0x1F1348u);
    ctx->pc = 0x1F1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1340u;
    // 0x1f1344: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x1F1340u, 0x1F1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1348u;
label_1f1348:
    // 0x1f1348: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1348u;
    {
        const bool branch_taken_0x1f1348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1348u;
        // 0x1f134c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1348) {
            ctx->pc = 0x1F136Cu;
            goto label_1f136c;
        }
    }
    ctx->pc = 0x1F1350u;
    // 0x1f1350: 0x8e420b8c  lw          $v0, 0xB8C($s2)
    ctx->pc = 0x1f1350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2956)));
    // 0x1f1354: 0x8e430bac  lw          $v1, 0xBAC($s2)
    ctx->pc = 0x1f1354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2988)));
    // 0x1f1358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f135c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1f135cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1f1360: 0xae420b8c  sw          $v0, 0xB8C($s2)
    ctx->pc = 0x1f1360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2956), GPR_U32(ctx, 2));
    // 0x1f1364: 0xae430bac  sw          $v1, 0xBAC($s2)
    ctx->pc = 0x1f1364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2988), GPR_U32(ctx, 3));
label_1f1368:
    // 0x1f1368: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f1368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f136c:
    // 0x1f136c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f136cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f1370:
    // 0x1f1370: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f1370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1374: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f1374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1378: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f1378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f137c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F137Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F137Cu;
        // 0x1f1380: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F137Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1384u;
    // 0x1f1384: 0x0  nop
    ctx->pc = 0x1f1384u;
    // NOP
    ctx->pc = 0x1f1388u;
}
