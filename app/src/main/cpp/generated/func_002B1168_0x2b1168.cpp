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

// Function: func_002B1168
// Address: 0x2b1168 - 0x2b1270
void func_002B1168_0x2b1168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B1168_0x2b1168");
#endif

    switch (ctx->pc) {
        case 0x2b1198u: goto label_2b1198;
        case 0x2b11a8u: goto label_2b11a8;
        case 0x2b11b4u: goto label_2b11b4;
        case 0x2b11e8u: goto label_2b11e8;
        case 0x2b11f0u: goto label_2b11f0;
        default: break;
    }

    ctx->pc = 0x2b1168u;

    // 0x2b1168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b1168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b116c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b1170: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b1170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b1174: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2b1174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b1178: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b1178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b117c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b117cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b1180: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x2b1180u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2b1184: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b1184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b1188: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2b1188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b118c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1190: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2B1190u;
    SET_GPR_U32(ctx, 31, 0x2B1198u);
    ctx->pc = 0x2B1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1190u;
    // 0x2b1194: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2B1190u, 0x2B1198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1198u;
label_2b1198:
    // 0x2b1198: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b1198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b119c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B119Cu;
    {
        const bool branch_taken_0x2b119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B119Cu;
        // 0x2b11a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b119c) {
            ctx->pc = 0x2B11F8u;
            goto label_2b11f8;
        }
    }
    ctx->pc = 0x2B11A4u;
    // 0x2b11a4: 0x0  nop
    ctx->pc = 0x2b11a4u;
    // NOP
label_2b11a8:
    // 0x2b11a8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x2b11a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b11ac: 0xc0a92e2  jal         func_2A4B88
    ctx->pc = 0x2B11ACu;
    SET_GPR_U32(ctx, 31, 0x2B11B4u);
    ctx->pc = 0x2B11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11ACu;
    // 0x2b11b0: 0x8c442380  lw          $a0, 0x2380($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B88u, 0x2B11ACu, 0x2B11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11B4u;
label_2b11b4:
    // 0x2b11b4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2b11b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b11b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b11b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b11bc: 0x0  nop
    ctx->pc = 0x2b11bcu;
    // NOP
    // 0x2b11c0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b11c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b11c4: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x2b11c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b11c8: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x2b11c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b11cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b11ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b11d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b11d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b11d4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b11d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b11d8: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x2b11d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b11dc: 0x0  nop
    ctx->pc = 0x2b11dcu;
    // NOP
    // 0x2b11e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B11E0u;
    {
        const bool branch_taken_0x2b11e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b11e0) {
            ctx->pc = 0x2B11E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B11E0u;
            // 0x2b11e4: 0x46001d06  mov.s       $f20, $f3 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B11E8u;
            goto label_2b11e8;
        }
    }
    ctx->pc = 0x2B11E8u;
label_2b11e8:
    // 0x2b11e8: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2B11E8u;
    SET_GPR_U32(ctx, 31, 0x2B11F0u);
    ctx->pc = 0x2B11ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11E8u;
    // 0x2b11ec: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2B11E8u, 0x2B11F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11F0u;
label_2b11f0:
    // 0x2b11f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b11f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b11f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b11f8:
    // 0x2b11f8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2b11f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b11fc: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2b11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2b1200: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2B1200u;
    {
        const bool branch_taken_0x2b1200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1200u;
        // 0x2b1204: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1200) {
            ctx->pc = 0x2B11A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b11a8;
        }
    }
    ctx->pc = 0x2B1208u;
    // 0x2b1208: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b1208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b120c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b1210: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B1210u;
    {
        const bool branch_taken_0x2b1210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1210) {
            ctx->pc = 0x2B11E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b11e8;
        }
    }
    ctx->pc = 0x2B1218u;
    // 0x2b1218: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b121c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b1220: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1220u;
    {
        const bool branch_taken_0x2b1220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1220u;
        // 0x2b1224: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1220) {
            ctx->pc = 0x2B1248u;
            goto label_2b1248;
        }
    }
    ctx->pc = 0x2B1228u;
    // 0x2b1228: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2b1228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b122c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2b122cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2b1230: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1234: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x2b1234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b1238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b1238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b123c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b123cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b1240: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2b1240u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b1244: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2b1244u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2b1248:
    // 0x2b1248: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b1248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b124c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b124cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1250: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b1250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1258: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2b1258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b125c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B125Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B125Cu;
        // 0x2b1260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B125Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1264u;
    // 0x2b1264: 0x0  nop
    ctx->pc = 0x2b1264u;
    // NOP
    // 0x2b1268: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b1268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b126c: 0x0  nop
    ctx->pc = 0x2b126cu;
    // NOP
    ctx->pc = 0x2b1270u;
}
