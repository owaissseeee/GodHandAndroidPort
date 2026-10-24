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

// Function: func_002EDF70
// Address: 0x2edf70 - 0x2efa60
void func_002EDF70_0x2edf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EDF70_0x2edf70");
#endif

    switch (ctx->pc) {
        case 0x2ee004u: goto label_2ee004;
        case 0x2ee110u: goto label_2ee110;
        case 0x2ee144u: goto label_2ee144;
        case 0x2ee154u: goto label_2ee154;
        case 0x2ee470u: goto label_2ee470;
        case 0x2ee500u: goto label_2ee500;
        case 0x2ee5d8u: goto label_2ee5d8;
        case 0x2ee678u: goto label_2ee678;
        case 0x2ee6c8u: goto label_2ee6c8;
        case 0x2ee6e0u: goto label_2ee6e0;
        case 0x2ee714u: goto label_2ee714;
        case 0x2ee728u: goto label_2ee728;
        case 0x2ee780u: goto label_2ee780;
        case 0x2ee794u: goto label_2ee794;
        case 0x2ee874u: goto label_2ee874;
        case 0x2ee880u: goto label_2ee880;
        case 0x2ee890u: goto label_2ee890;
        case 0x2ee8d0u: goto label_2ee8d0;
        case 0x2ee8e0u: goto label_2ee8e0;
        case 0x2ee8ecu: goto label_2ee8ec;
        case 0x2ee9e4u: goto label_2ee9e4;
        case 0x2eea00u: goto label_2eea00;
        case 0x2eea40u: goto label_2eea40;
        case 0x2eea50u: goto label_2eea50;
        case 0x2eea5cu: goto label_2eea5c;
        case 0x2eeb88u: goto label_2eeb88;
        case 0x2eec68u: goto label_2eec68;
        case 0x2eed40u: goto label_2eed40;
        case 0x2eee04u: goto label_2eee04;
        case 0x2eee38u: goto label_2eee38;
        case 0x2eee48u: goto label_2eee48;
        case 0x2ef15cu: goto label_2ef15c;
        case 0x2ef1ecu: goto label_2ef1ec;
        case 0x2ef2c4u: goto label_2ef2c4;
        case 0x2ef364u: goto label_2ef364;
        case 0x2ef3c0u: goto label_2ef3c0;
        case 0x2ef3d8u: goto label_2ef3d8;
        case 0x2ef40cu: goto label_2ef40c;
        case 0x2ef420u: goto label_2ef420;
        case 0x2ef478u: goto label_2ef478;
        case 0x2ef48cu: goto label_2ef48c;
        case 0x2ef56cu: goto label_2ef56c;
        case 0x2ef578u: goto label_2ef578;
        case 0x2ef588u: goto label_2ef588;
        case 0x2ef5c8u: goto label_2ef5c8;
        case 0x2ef5d8u: goto label_2ef5d8;
        case 0x2ef5e4u: goto label_2ef5e4;
        case 0x2ef6ccu: goto label_2ef6cc;
        case 0x2ef6e8u: goto label_2ef6e8;
        case 0x2ef728u: goto label_2ef728;
        case 0x2ef738u: goto label_2ef738;
        case 0x2ef744u: goto label_2ef744;
        case 0x2ef864u: goto label_2ef864;
        case 0x2ef948u: goto label_2ef948;
        case 0x2efa1cu: goto label_2efa1c;
        default: break;
    }

    ctx->pc = 0x2edf70u;

    // 0x2edf70: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2edf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2edf74: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x2edf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x2edf78: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x2edf78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2edf7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2edf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf80: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x2edf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x2edf84: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x2edf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x2edf88: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x2edf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x2edf8c: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x2edf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x2edf90: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x2edf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x2edf94: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x2edf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x2edf98: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x2edf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x2edf9c: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x2edf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x2edfa0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2edfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2edfa4: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x2edfa4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2edfa8: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x2edfa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2edfac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2edfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2edfb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2edfb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2edfb4: 0x9222024c  lbu         $v0, 0x24C($s1)
    ctx->pc = 0x2edfb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x2edfb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDFB8u;
    {
        const bool branch_taken_0x2edfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFB8u;
        // 0x2edfbc: 0x8e240120  lw          $a0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfb8) {
            ctx->pc = 0x2EDFE4u;
            goto label_2edfe4;
        }
    }
    ctx->pc = 0x2EDFC0u;
    // 0x2edfc0: 0x9223024d  lbu         $v1, 0x24D($s1)
    ctx->pc = 0x2edfc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 589)));
    // 0x2edfc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2edfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2edfc8: 0x0  nop
    ctx->pc = 0x2edfc8u;
    // NOP
    // 0x2edfcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2edfccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2edfd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2edfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2edfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2edfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2edfd8: 0x0  nop
    ctx->pc = 0x2edfd8u;
    // NOP
    // 0x2edfdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2edfdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2edfe0: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2edfe0u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2edfe4:
    // 0x2edfe4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EDFE4u;
    {
        const bool branch_taken_0x2edfe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFE4u;
        // 0x2edfe8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfe4) {
            ctx->pc = 0x2EE01Cu;
            goto label_2ee01c;
        }
    }
    ctx->pc = 0x2EDFECu;
    // 0x2edfec: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2edfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2edff0: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2edff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2edff4: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDFF4u;
    {
        const bool branch_taken_0x2edff4 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2edff4) {
            ctx->pc = 0x2EDFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDFF4u;
            // 0x2edff8: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE018u;
            goto label_2ee018;
        }
    }
    ctx->pc = 0x2EDFFCu;
    // 0x2edffc: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2EDFFCu;
    SET_GPR_U32(ctx, 31, 0x2EE004u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2EDFFCu, 0x2EE004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE004u;
label_2ee004:
    // 0x2ee004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee008: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE008u;
    {
        const bool branch_taken_0x2ee008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ee008) {
            ctx->pc = 0x2EE00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE008u;
            // 0x2ee00c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE01Cu;
            goto label_2ee01c;
        }
    }
    ctx->pc = 0x2EE010u;
    // 0x2ee010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE010u;
    {
        const bool branch_taken_0x2ee010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE010u;
        // 0x2ee014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee010) {
            ctx->pc = 0x2EE020u;
            goto label_2ee020;
        }
    }
    ctx->pc = 0x2EE018u;
label_2ee018:
    // 0x2ee018: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ee018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee01c:
    // 0x2ee01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee020:
    // 0x2ee020: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE020u;
    {
        const bool branch_taken_0x2ee020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee020) {
            ctx->pc = 0x2EE024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE020u;
            // 0x2ee024: 0x8e2202e0  lw          $v0, 0x2E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE048u;
            goto label_2ee048;
        }
    }
    ctx->pc = 0x2EE028u;
    // 0x2ee028: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x2ee028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2ee02c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ee02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ee030: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ee030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ee034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ee034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ee038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE038u;
    {
        const bool branch_taken_0x2ee038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE038u;
        // 0x2ee03c: 0x8e2202e0  lw          $v0, 0x2E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee038) {
            ctx->pc = 0x2EE048u;
            goto label_2ee048;
        }
    }
    ctx->pc = 0x2EE040u;
    // 0x2ee040: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ee040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee044: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2ee044u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2ee048:
    // 0x2ee048: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2ee048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2ee04c: 0x1040033e  beqz        $v0, . + 4 + (0x33E << 2)
    ctx->pc = 0x2EE04Cu;
    {
        const bool branch_taken_0x2ee04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE04Cu;
        // 0x2ee050: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee04c) {
            ctx->pc = 0x2EED48u;
            goto label_2eed48;
        }
    }
    ctx->pc = 0x2EE054u;
    // 0x2ee054: 0x82240249  lb          $a0, 0x249($s1)
    ctx->pc = 0x2ee054u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ee058: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x2ee058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x2ee05c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2ee05cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ee060: 0x24a274a0  addiu       $v0, $a1, 0x74A0
    ctx->pc = 0x2ee060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x2ee064: 0x8c430210  lw          $v1, 0x210($v0)
    ctx->pc = 0x2ee064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2ee068: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ee068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ee06c: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x2ee06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2ee070: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE070u;
    {
        const bool branch_taken_0x2ee070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE070u;
        // 0x2ee074: 0x24930030  addiu       $s3, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee070) {
            ctx->pc = 0x2EE080u;
            goto label_2ee080;
        }
    }
    ctx->pc = 0x2EE078u;
    // 0x2ee078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE078u;
    {
        const bool branch_taken_0x2ee078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE078u;
        // 0x2ee07c: 0x8e3602cc  lw          $s6, 0x2CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee078) {
            ctx->pc = 0x2EE084u;
            goto label_2ee084;
        }
    }
    ctx->pc = 0x2EE080u;
label_2ee080:
    // 0x2ee080: 0x8e3602d0  lw          $s6, 0x2D0($s1)
    ctx->pc = 0x2ee080u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
label_2ee084:
    // 0x2ee084: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x2ee084u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2ee088: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2ee088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2ee08c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ee08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ee090: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ee090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ee094: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ee094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ee098: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x2ee098u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x2ee09c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ee0a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ee0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ee0a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ee0a8: 0x34048172  ori         $a0, $zero, 0x8172
    ctx->pc = 0x2ee0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33138);
    // 0x2ee0ac: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2ee0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2ee0b0: 0x34848007  ori         $a0, $a0, 0x8007
    ctx->pc = 0x2ee0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32775);
    // 0x2ee0b4: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x2ee0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
    // 0x2ee0b8: 0x26d20010  addiu       $s2, $s6, 0x10
    ctx->pc = 0x2ee0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2ee0bc: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x2ee0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x2ee0c0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2ee0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ee0c4: 0xfec40010  sd          $a0, 0x10($s6)
    ctx->pc = 0x2ee0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 4));
    // 0x2ee0c8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2ee0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2ee0cc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2ee0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2ee0d0: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ee0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ee0d4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2ee0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2ee0d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE0D8u;
    {
        const bool branch_taken_0x2ee0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee0d8) {
            ctx->pc = 0x2EE0F0u;
            goto label_2ee0f0;
        }
    }
    ctx->pc = 0x2EE0E0u;
    // 0x2ee0e0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ee0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ee0e4: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2ee0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2ee0e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE0E8u;
    {
        const bool branch_taken_0x2ee0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0E8u;
        // 0x2ee0ec: 0xfe420010  sd          $v0, 0x10($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0e8) {
            ctx->pc = 0x2EE0FCu;
            goto label_2ee0fc;
        }
    }
    ctx->pc = 0x2EE0F0u;
label_2ee0f0:
    // 0x2ee0f0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2ee0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2ee0f4: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2ee0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2ee0f8: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x2ee0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
label_2ee0fc:
    // 0x2ee0fc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2ee0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2ee100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee104: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x2ee104u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x2ee108: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2EE108u;
    SET_GPR_U32(ctx, 31, 0x2EE110u);
    ctx->pc = 0x2EE10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE108u;
    // 0x2ee10c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2EE108u, 0x2EE110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE110u;
label_2ee110:
    // 0x2ee110: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ee110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee114: 0xfe400030  sd          $zero, 0x30($s2)
    ctx->pc = 0x2ee114u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 0));
    // 0x2ee118: 0xfe420038  sd          $v0, 0x38($s2)
    ctx->pc = 0x2ee118u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 2));
    // 0x2ee11c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2ee11cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2ee120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee124: 0x261064a0  addiu       $s0, $s0, 0x64A0
    ctx->pc = 0x2ee124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    // 0x2ee128: 0x82220101  lb          $v0, 0x101($s1)
    ctx->pc = 0x2ee128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 257)));
    // 0x2ee12c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ee12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee130: 0x8e250118  lw          $a1, 0x118($s1)
    ctx->pc = 0x2ee130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x2ee134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee138: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2ee138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ee13c: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2EE13Cu;
    SET_GPR_U32(ctx, 31, 0x2EE144u);
    ctx->pc = 0x2EE140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE13Cu;
    // 0x2ee140: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2EE13Cu, 0x2EE144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE144u;
label_2ee144:
    // 0x2ee144: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2ee144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2ee148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee14c: 0xc0544da  jal         func_151368
    ctx->pc = 0x2EE14Cu;
    SET_GPR_U32(ctx, 31, 0x2EE154u);
    ctx->pc = 0x2EE150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE14Cu;
    // 0x2ee150: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2EE14Cu, 0x2EE154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE154u;
label_2ee154:
    // 0x2ee154: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ee154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ee158: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x2ee158u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
    // 0x2ee15c: 0xfe430048  sd          $v1, 0x48($s2)
    ctx->pc = 0x2ee15cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 3));
    // 0x2ee160: 0x6a22018f  ldl         $v0, 0x18F($s1)
    ctx->pc = 0x2ee160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ee164: 0x6e220188  ldr         $v0, 0x188($s1)
    ctx->pc = 0x2ee164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ee168: 0x6a230197  ldl         $v1, 0x197($s1)
    ctx->pc = 0x2ee168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ee16c: 0x6e230190  ldr         $v1, 0x190($s1)
    ctx->pc = 0x2ee16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ee170: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2ee170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ee174: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2ee174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ee178: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2ee178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ee17c: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2ee17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ee180: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2ee180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee188: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2ee188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ee18c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2ee18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ee190: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2ee190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ee194: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ee194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ee198: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2ee198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee19c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ee19cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ee1a0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2ee1a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ee1a4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ee1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ee1a8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2ee1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2ee1ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ee1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ee1b0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2ee1b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ee1b4: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2ee1b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ee1b8: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2ee1b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ee1bc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2ee1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ee1c0: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x2ee1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ee1c4: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x2ee1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ee1c8: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x2ee1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ee1cc: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x2ee1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ee1d0: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2ee1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ee1d4: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2ee1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ee1d8: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x2ee1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ee1dc: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x2ee1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ee1e0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2ee1e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ee1e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ee1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee1e8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ee1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee1ec: 0x0  nop
    ctx->pc = 0x2ee1ecu;
    // NOP
    // 0x2ee1f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE1F0u;
    {
        const bool branch_taken_0x2ee1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee1f0) {
            ctx->pc = 0x2EE1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE1F0u;
            // 0x2ee1f4: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE1F8u;
            goto label_2ee1f8;
        }
    }
    ctx->pc = 0x2EE1F8u;
label_2ee1f8:
    // 0x2ee1f8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ee1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee1fc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ee1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee200: 0x0  nop
    ctx->pc = 0x2ee200u;
    // NOP
    // 0x2ee204: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE204u;
    {
        const bool branch_taken_0x2ee204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee204) {
            ctx->pc = 0x2EE208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE204u;
            // 0x2ee208: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE20Cu;
            goto label_2ee20c;
        }
    }
    ctx->pc = 0x2EE20Cu;
label_2ee20c:
    // 0x2ee20c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ee20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee210: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ee210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee214: 0x0  nop
    ctx->pc = 0x2ee214u;
    // NOP
    // 0x2ee218: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE218u;
    {
        const bool branch_taken_0x2ee218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee218) {
            ctx->pc = 0x2EE21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE218u;
            // 0x2ee21c: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE220u;
            goto label_2ee220;
        }
    }
    ctx->pc = 0x2EE220u;
label_2ee220:
    // 0x2ee220: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ee220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee224: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ee224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee228: 0x0  nop
    ctx->pc = 0x2ee228u;
    // NOP
    // 0x2ee22c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE22Cu;
    {
        const bool branch_taken_0x2ee22c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee22c) {
            ctx->pc = 0x2EE230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE22Cu;
            // 0x2ee230: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE234u;
            goto label_2ee234;
        }
    }
    ctx->pc = 0x2EE234u;
label_2ee234:
    // 0x2ee234: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ee234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee238: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2ee238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee23c: 0x0  nop
    ctx->pc = 0x2ee23cu;
    // NOP
    // 0x2ee240: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE240u;
    {
        const bool branch_taken_0x2ee240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee240) {
            ctx->pc = 0x2EE244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE240u;
            // 0x2ee244: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE248u;
            goto label_2ee248;
        }
    }
    ctx->pc = 0x2EE248u;
label_2ee248:
    // 0x2ee248: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ee248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee24c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2ee24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee250: 0x0  nop
    ctx->pc = 0x2ee250u;
    // NOP
    // 0x2ee254: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE254u;
    {
        const bool branch_taken_0x2ee254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee254) {
            ctx->pc = 0x2EE258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE254u;
            // 0x2ee258: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE25Cu;
            goto label_2ee25c;
        }
    }
    ctx->pc = 0x2EE25Cu;
label_2ee25c:
    // 0x2ee25c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ee25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee260: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2ee260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee264: 0x0  nop
    ctx->pc = 0x2ee264u;
    // NOP
    // 0x2ee268: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE268u;
    {
        const bool branch_taken_0x2ee268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee268) {
            ctx->pc = 0x2EE26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE268u;
            // 0x2ee26c: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE270u;
            goto label_2ee270;
        }
    }
    ctx->pc = 0x2EE270u;
label_2ee270:
    // 0x2ee270: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ee270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee274: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2ee274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee278: 0x0  nop
    ctx->pc = 0x2ee278u;
    // NOP
    // 0x2ee27c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE27Cu;
    {
        const bool branch_taken_0x2ee27c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee27c) {
            ctx->pc = 0x2EE280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE27Cu;
            // 0x2ee280: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE284u;
            goto label_2ee284;
        }
    }
    ctx->pc = 0x2EE284u;
label_2ee284:
    // 0x2ee284: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2ee284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2ee288: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ee288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ee28c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2ee28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2ee290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE290u;
    {
        const bool branch_taken_0x2ee290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE290u;
        // 0x2ee294: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee290) {
            ctx->pc = 0x2EE2A8u;
            goto label_2ee2a8;
        }
    }
    ctx->pc = 0x2EE298u;
    // 0x2ee298: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ee298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee29c: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ee29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2ee2a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE2A0u;
    {
        const bool branch_taken_0x2ee2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2A0u;
        // 0x2ee2a4: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2a0) {
            ctx->pc = 0x2EE2BCu;
            goto label_2ee2bc;
        }
    }
    ctx->pc = 0x2EE2A8u;
label_2ee2a8:
    // 0x2ee2a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ee2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee2ac: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ee2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2ee2b0: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x2ee2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2ee2b4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2ee2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ee2b8: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x2ee2b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
label_2ee2bc:
    // 0x2ee2bc: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2ee2bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ee2c0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2ee2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2ee2c4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2ee2c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ee2c8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ee2c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ee2cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ee2d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ee2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ee2d4: 0xfe420070  sd          $v0, 0x70($s2)
    ctx->pc = 0x2ee2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
    // 0x2ee2d8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2ee2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ee2dc: 0xfe420078  sd          $v0, 0x78($s2)
    ctx->pc = 0x2ee2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 2));
    // 0x2ee2e0: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2ee2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2ee2e4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EE2E4u;
    {
        const bool branch_taken_0x2ee2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2E4u;
        // 0x2ee2e8: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2e4) {
            ctx->pc = 0x2EE360u;
            goto label_2ee360;
        }
    }
    ctx->pc = 0x2EE2ECu;
    // 0x2ee2ec: 0x9222011c  lbu         $v0, 0x11C($s1)
    ctx->pc = 0x2ee2ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ee2f0: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2ee2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2ee2f4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EE2F4u;
    {
        const bool branch_taken_0x2ee2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2f4) {
            ctx->pc = 0x2EE2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE2F4u;
            // 0x2ee2f8: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE364u;
            goto label_2ee364;
        }
    }
    ctx->pc = 0x2EE2FCu;
    // 0x2ee2fc: 0x908202b6  lbu         $v0, 0x2B6($a0)
    ctx->pc = 0x2ee2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 694)));
    // 0x2ee300: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ee300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ee304: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ee304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ee308: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2ee308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ee30c: 0x0  nop
    ctx->pc = 0x2ee30cu;
    // NOP
    // 0x2ee310: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2ee310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2ee314: 0x908302b7  lbu         $v1, 0x2B7($a0)
    ctx->pc = 0x2ee314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 695)));
    // 0x2ee318: 0x908202bc  lbu         $v0, 0x2BC($a0)
    ctx->pc = 0x2ee318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 700)));
    // 0x2ee31c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ee31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ee320: 0x0  nop
    ctx->pc = 0x2ee320u;
    // NOP
    // 0x2ee324: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ee324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ee328: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x2ee328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee32c: 0x46042943  div.s       $f5, $f5, $f4
    ctx->pc = 0x2ee32cu;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[4]);
    // 0x2ee330: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2ee330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ee334: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ee334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee338: 0x0  nop
    ctx->pc = 0x2ee338u;
    // NOP
    // 0x2ee33c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ee33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ee340: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2ee340u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x2ee344: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2ee344u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2ee348: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ee348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ee34c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ee34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ee350: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ee350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ee354: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ee354u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ee358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE358u;
    {
        const bool branch_taken_0x2ee358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE358u;
        // 0x2ee35c: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee358) {
            ctx->pc = 0x2EE368u;
            goto label_2ee368;
        }
    }
    ctx->pc = 0x2EE360u;
label_2ee360:
    // 0x2ee360: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ee360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2ee364:
    // 0x2ee364: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2ee364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2ee368:
    // 0x2ee368: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2ee368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ee36c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ee36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee370: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2ee370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ee374: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2ee374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2ee378: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x2ee378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x2ee37c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ee37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee380: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ee380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ee384: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ee384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ee388: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2ee388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee38c: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ee38cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ee390: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ee390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ee394: 0xfe460058  sd          $a2, 0x58($s2)
    ctx->pc = 0x2ee394u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 6));
    // 0x2ee398: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ee398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ee39c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2ee39cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ee3a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ee3a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ee3a4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2ee3a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ee3a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ee3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ee3ac: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2ee3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2ee3b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ee3b4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ee3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ee3b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ee3bc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ee3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ee3c0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ee3c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ee3c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ee3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ee3c8: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2ee3c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2ee3cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ee3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ee3d0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ee3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2ee3d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ee3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ee3d8: 0x131902  srl         $v1, $s3, 4
    ctx->pc = 0x2ee3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x2ee3dc: 0xfe420050  sd          $v0, 0x50($s2)
    ctx->pc = 0x2ee3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 2));
    // 0x2ee3e0: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x2ee3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ee3e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ee3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ee3e8: 0x3c070a00  lui         $a3, 0xA00
    ctx->pc = 0x2ee3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2560 << 16));
    // 0x2ee3ec: 0x34e700f8  ori         $a3, $a3, 0xF8
    ctx->pc = 0x2ee3ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)248);
    // 0x2ee3f0: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ee3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ee3f4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2ee3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ee3f8: 0xfe440068  sd          $a0, 0x68($s2)
    ctx->pc = 0x2ee3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 4));
    // 0x2ee3fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ee3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ee400: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ee400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ee404: 0x26c40090  addiu       $a0, $s6, 0x90
    ctx->pc = 0x2ee404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x2ee408: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ee408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ee40c: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x2ee40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
    // 0x2ee410: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ee414: 0x34058172  ori         $a1, $zero, 0x8172
    ctx->pc = 0x2ee414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33138);
    // 0x2ee418: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2ee418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2ee41c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ee41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ee420: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ee424: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x2ee424u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x2ee428: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ee428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ee42c: 0xfec30090  sd          $v1, 0x90($s6)
    ctx->pc = 0x2ee42cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 144), GPR_U64(ctx, 3));
    // 0x2ee430: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2ee430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ee434: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2ee434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2ee438: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x2ee438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2ee43c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2ee43cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x2ee440: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2ee440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2ee444: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ee444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ee448: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ee448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ee44c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ee44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ee450: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE450u;
    {
        const bool branch_taken_0x2ee450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE450u;
        // 0x2ee454: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee450) {
            ctx->pc = 0x2EE478u;
            goto label_2ee478;
        }
    }
    ctx->pc = 0x2EE458u;
    // 0x2ee458: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2ee458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2ee45c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2ee45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ee460: 0x8c65aff0  lw          $a1, -0x5010($v1)
    ctx->pc = 0x2ee460u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2ee464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ee464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee468: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EE468u;
    SET_GPR_U32(ctx, 31, 0x2EE470u);
    ctx->pc = 0x2EE46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE468u;
    // 0x2ee46c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EE468u, 0x2EE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE470u;
label_2ee470:
    // 0x2ee470: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2EE470u;
    {
        const bool branch_taken_0x2ee470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE470u;
        // 0x2ee474: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee470) {
            ctx->pc = 0x2EE4F8u;
            goto label_2ee4f8;
        }
    }
    ctx->pc = 0x2EE478u;
label_2ee478:
    // 0x2ee478: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2ee478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ee47c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2ee47cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2ee480: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2ee480u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ee484: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2ee484u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ee488: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2ee488u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2ee48c: 0xf8e40030  sqc2        $vf4, 0x30($a3)
    ctx->pc = 0x2ee48cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee490: 0xf8e50020  sqc2        $vf5, 0x20($a3)
    ctx->pc = 0x2ee490u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ee494: 0xf8e60010  sqc2        $vf6, 0x10($a3)
    ctx->pc = 0x2ee494u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ee498: 0xf8e70000  sqc2        $vf7, 0x0($a3)
    ctx->pc = 0x2ee498u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2ee49c: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2ee49cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2ee4a0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ee4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2ee4a4: 0x8d421180  lw          $v0, 0x1180($t2)
    ctx->pc = 0x2ee4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ee4a8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2ee4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ee4ac: 0x8c83118c  lw          $v1, 0x118C($a0)
    ctx->pc = 0x2ee4acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2ee4b0: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x2ee4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x2ee4b4: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x2ee4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ee4b8: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2ee4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2ee4bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ee4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ee4c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ee4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee4c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ee4c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ee4c8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2ee4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ee4cc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2ee4ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2ee4d0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2ee4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ee4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee4d8: 0x0  nop
    ctx->pc = 0x2ee4d8u;
    // NOP
    // 0x2ee4dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ee4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ee4e0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ee4e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee4e4: 0x0  nop
    ctx->pc = 0x2ee4e4u;
    // NOP
    // 0x2ee4e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ee4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ee4ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ee4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ee4f0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2ee4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ee4f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ee4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ee4f8:
    // 0x2ee4f8: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2EE4F8u;
    SET_GPR_U32(ctx, 31, 0x2EE500u);
    ctx->pc = 0x2EE4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE4F8u;
    // 0x2ee4fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2EE4F8u, 0x2EE500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE500u;
label_2ee500:
    // 0x2ee500: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x2ee500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x2ee504: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2ee504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2ee508: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ee508u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee50c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2ee50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee510: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2ee510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee514: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2ee514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee518: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2ee518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee51c: 0xc7b40014  lwc1        $f20, 0x14($sp)
    ctx->pc = 0x2ee51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ee520: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2ee520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee524: 0x82230249  lb          $v1, 0x249($s1)
    ctx->pc = 0x2ee524u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ee528: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2ee528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ee52c: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ee52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ee530: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ee530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee534: 0x0  nop
    ctx->pc = 0x2ee534u;
    // NOP
    // 0x2ee538: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ee538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ee53c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ee53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ee540: 0x0  nop
    ctx->pc = 0x2ee540u;
    // NOP
    // 0x2ee544: 0x0  nop
    ctx->pc = 0x2ee544u;
    // NOP
    // 0x2ee548: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x2ee548u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ee54c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE54Cu;
    {
        const bool branch_taken_0x2ee54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee54c) {
            ctx->pc = 0x2EE550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE54Cu;
            // 0x2ee550: 0x4615ad40  add.s       $f21, $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE554u;
            goto label_2ee554;
        }
    }
    ctx->pc = 0x2EE554u;
label_2ee554:
    // 0x2ee554: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2ee554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2ee558: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE558u;
    {
        const bool branch_taken_0x2ee558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee558) {
            ctx->pc = 0x2EE55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE558u;
            // 0x2ee55c: 0x8e2202bc  lw          $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE578u;
            goto label_2ee578;
        }
    }
    ctx->pc = 0x2EE560u;
    // 0x2ee560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ee560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ee564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee568: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2ee568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2ee56c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2ee56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ee570: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2ee570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2ee574: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2ee574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_2ee578:
    // 0x2ee578: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ee578u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee57c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ee57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee580: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2ee580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2ee584: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x2ee584u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ee588: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x2ee588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee58c: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x2ee58cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee590: 0x0  nop
    ctx->pc = 0x2ee590u;
    // NOP
    // 0x2ee594: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x2EE594u;
    {
        const bool branch_taken_0x2ee594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE594u;
        // 0x2ee598: 0x27b300b0  addiu       $s3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee594) {
            ctx->pc = 0x2EE668u;
            goto label_2ee668;
        }
    }
    ctx->pc = 0x2EE59Cu;
    // 0x2ee59c: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x2ee59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x2ee5a0: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2ee5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ee5a4: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2ee5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2ee5a8: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ee5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee5ac: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ee5acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ee5b0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ee5b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee5b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ee5b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ee5b8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ee5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee5bc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ee5bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee5c0: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ee5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee5c4: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2ee5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ee5c8: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x2ee5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee5cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5d0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2EE5D0u;
    SET_GPR_U32(ctx, 31, 0x2EE5D8u);
    ctx->pc = 0x2EE5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5D0u;
    // 0x2ee5d4: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2EE5D0u, 0x2EE5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE5D8u;
label_2ee5d8:
    // 0x2ee5d8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2ee5d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee5dc: 0x0  nop
    ctx->pc = 0x2ee5dcu;
    // NOP
    // 0x2ee5e0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE5E0u;
    {
        const bool branch_taken_0x2ee5e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5E0u;
        // 0x2ee5e4: 0xc7a400b0  lwc1        $f4, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5e0) {
            ctx->pc = 0x2EE624u;
            goto label_2ee624;
        }
    }
    ctx->pc = 0x2EE5E8u;
    // 0x2ee5e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ee5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ee5ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ee5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee5f0: 0x0  nop
    ctx->pc = 0x2ee5f0u;
    // NOP
    // 0x2ee5f4: 0x0  nop
    ctx->pc = 0x2ee5f4u;
    // NOP
    // 0x2ee5f8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ee5f8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2ee5fc: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x2ee5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ee600: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2ee600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ee604: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ee604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee608: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2ee608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2ee60c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2ee60cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ee610: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2ee610u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2ee614: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2ee614u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ee618: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x2ee618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2ee61c: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x2ee61cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2ee620: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x2ee620u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2ee624:
    // 0x2ee624: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2ee624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2ee628: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ee628u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee62c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2ee62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee630: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x2ee630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee634: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2ee634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ee638: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ee638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee63c: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ee63cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ee640: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ee640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ee644: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ee644u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ee648: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ee648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ee64c: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ee64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee650: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ee650u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee654: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ee654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee658: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ee658u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ee65c: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2ee65cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ee660: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ee660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ee664: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ee664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_2ee668:
    // 0x2ee668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee66c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ee66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ee670: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EE670u;
    SET_GPR_U32(ctx, 31, 0x2EE678u);
    ctx->pc = 0x2EE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE670u;
    // 0x2ee674: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EE670u, 0x2EE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE678u;
label_2ee678:
    // 0x2ee678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ee678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ee67c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ee67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee680: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ee680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee684: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ee684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee688: 0x0  nop
    ctx->pc = 0x2ee688u;
    // NOP
    // 0x2ee68c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE68Cu;
    {
        const bool branch_taken_0x2ee68c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee68c) {
            ctx->pc = 0x2EE690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE68Cu;
            // 0x2ee690: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE694u;
            goto label_2ee694;
        }
    }
    ctx->pc = 0x2EE694u;
label_2ee694:
    // 0x2ee694: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ee694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ee698: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x2ee698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2ee69c: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x2ee69cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ee6a0: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x2ee6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2ee6a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ee6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6a8: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ee6a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ee6ac: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2ee6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2ee6b0: 0x18400124  blez        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x2EE6B0u;
    {
        const bool branch_taken_0x2ee6b0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2EE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6B0u;
        // 0x2ee6b4: 0xafa3010c  sw          $v1, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6b0) {
            ctx->pc = 0x2EEB44u;
            goto label_2eeb44;
        }
    }
    ctx->pc = 0x2EE6B8u;
    // 0x2ee6b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ee6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ee6bc: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x2ee6bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ee6c0: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2ee6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2ee6c4: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x2ee6c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2ee6c8:
    // 0x2ee6c8: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x2ee6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee6cc: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ee6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ee6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ee6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6d8: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EE6D8u;
    SET_GPR_U32(ctx, 31, 0x2EE6E0u);
    ctx->pc = 0x2EE6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE6D8u;
    // 0x2ee6dc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EE6D8u, 0x2EE6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE6E0u;
label_2ee6e0:
    // 0x2ee6e0: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ee6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ee6e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ee6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ee6e8: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2EE6E8u;
    {
        const bool branch_taken_0x2ee6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6E8u;
        // 0x2ee6ec: 0x27b500c0  addiu       $s5, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6e8) {
            ctx->pc = 0x2EE8C0u;
            goto label_2ee8c0;
        }
    }
    ctx->pc = 0x2EE6F0u;
    // 0x2ee6f0: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EE6F0u;
    {
        const bool branch_taken_0x2ee6f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee6f0) {
            ctx->pc = 0x2EE764u;
            goto label_2ee764;
        }
    }
    ctx->pc = 0x2EE6F8u;
    // 0x2ee6f8: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2ee6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee6fc: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ee6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee700: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ee700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ee704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee708: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ee708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee70c: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EE70Cu;
    SET_GPR_U32(ctx, 31, 0x2EE714u);
    ctx->pc = 0x2EE710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE70Cu;
    // 0x2ee710: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EE70Cu, 0x2EE714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE714u;
label_2ee714:
    // 0x2ee714: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ee714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ee718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee71c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2ee71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee720: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EE720u;
    SET_GPR_U32(ctx, 31, 0x2EE728u);
    ctx->pc = 0x2EE724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE720u;
    // 0x2ee724: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EE720u, 0x2EE728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE728u;
label_2ee728:
    // 0x2ee728: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x2ee728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee72c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2ee72cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ee730: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2ee730u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ee734: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ee734u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ee738: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ee738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee73c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2ee73cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ee740: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2ee740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee744: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2ee744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee748: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2ee748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee74c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2ee74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ee750: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2ee750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ee754: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2ee754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ee758: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2ee758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ee75c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2EE75Cu;
    {
        const bool branch_taken_0x2ee75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE75Cu;
        // 0x2ee760: 0xc7b40014  lwc1        $f20, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee75c) {
            ctx->pc = 0x2EE820u;
            goto label_2ee820;
        }
    }
    ctx->pc = 0x2EE764u;
label_2ee764:
    // 0x2ee764: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2ee764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee768: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ee768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee76c: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ee76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ee770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee774: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ee774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee778: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EE778u;
    SET_GPR_U32(ctx, 31, 0x2EE780u);
    ctx->pc = 0x2EE77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE778u;
    // 0x2ee77c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EE778u, 0x2EE780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE780u;
label_2ee780:
    // 0x2ee780: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ee780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ee784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee788: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2ee788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee78c: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EE78Cu;
    SET_GPR_U32(ctx, 31, 0x2EE794u);
    ctx->pc = 0x2EE790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE78Cu;
    // 0x2ee790: 0x2607ffff  addiu       $a3, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EE78Cu, 0x2EE794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE794u;
label_2ee794:
    // 0x2ee794: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x2ee794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee798: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2ee798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ee79c: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2ee79cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ee7a0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ee7a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ee7a4: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ee7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee7a8: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2ee7a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ee7ac: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2ee7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee7b0: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ee7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ee7b4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2ee7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee7b8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2ee7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee7bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ee7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ee7c0: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2ee7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ee7c4: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2ee7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ee7c8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2ee7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ee7cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EE7CCu;
    {
        const bool branch_taken_0x2ee7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7CCu;
        // 0x2ee7d0: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7cc) {
            ctx->pc = 0x2EE81Cu;
            goto label_2ee81c;
        }
    }
    ctx->pc = 0x2EE7D4u;
    // 0x2ee7d4: 0x92220249  lbu         $v0, 0x249($s1)
    ctx->pc = 0x2ee7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ee7d8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ee7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ee7dc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2ee7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ee7e0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ee7e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2ee7e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee7e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ee7e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ee7ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ee7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ee7f0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE7F0u;
    {
        const bool branch_taken_0x2ee7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7f0) {
            ctx->pc = 0x2EE7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE7F0u;
            // 0x2ee7f4: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE820u;
            goto label_2ee820;
        }
    }
    ctx->pc = 0x2EE7F8u;
    // 0x2ee7f8: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x2ee7f8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2ee7fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ee7fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee800: 0x0  nop
    ctx->pc = 0x2ee800u;
    // NOP
    // 0x2ee804: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ee804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee808: 0x0  nop
    ctx->pc = 0x2ee808u;
    // NOP
    // 0x2ee80c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE80Cu;
    {
        const bool branch_taken_0x2ee80c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee80c) {
            ctx->pc = 0x2EE810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE80Cu;
            // 0x2ee810: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE820u;
            goto label_2ee820;
        }
    }
    ctx->pc = 0x2EE814u;
    // 0x2ee814: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE814u;
    {
        const bool branch_taken_0x2ee814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE814u;
        // 0x2ee818: 0x8fa50108  lw          $a1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee814) {
            ctx->pc = 0x2EE824u;
            goto label_2ee824;
        }
    }
    ctx->pc = 0x2EE81Cu;
label_2ee81c:
    // 0x2ee81c: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2ee81cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_2ee820:
    // 0x2ee820: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2ee820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2ee824:
    // 0x2ee824: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE824u;
    {
        const bool branch_taken_0x2ee824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee824) {
            ctx->pc = 0x2EE828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE824u;
            // 0x2ee828: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE868u;
            goto label_2ee868;
        }
    }
    ctx->pc = 0x2EE82Cu;
    // 0x2ee82c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ee82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ee830: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x2ee830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2ee834: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ee834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ee838: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x2ee838u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ee83c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ee83cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ee840: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ee840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee844: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2ee844u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ee848: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ee848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ee84c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2ee84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee850: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2ee850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee854: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2ee854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ee858: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2ee858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ee85c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2ee85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ee860: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2ee860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ee864: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ee864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ee868:
    // 0x2ee868: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2ee868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ee86c: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x2EE86Cu;
    SET_GPR_U32(ctx, 31, 0x2EE874u);
    ctx->pc = 0x2EE870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE86Cu;
    // 0x2ee870: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x2EE86Cu, 0x2EE874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE874u;
label_2ee874:
    // 0x2ee874: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ee874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ee878: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x2EE878u;
    SET_GPR_U32(ctx, 31, 0x2EE880u);
    ctx->pc = 0x2EE87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE878u;
    // 0x2ee87c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x2EE878u, 0x2EE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE880u;
label_2ee880:
    // 0x2ee880: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ee880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ee884: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ee884u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ee888: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2EE888u;
    SET_GPR_U32(ctx, 31, 0x2EE890u);
    ctx->pc = 0x2EE88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE888u;
    // 0x2ee88c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2EE888u, 0x2EE890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE890u;
label_2ee890:
    // 0x2ee890: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ee890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee894: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ee894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee898: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ee898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ee89c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2ee89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ee8a0: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2ee8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ee8a4: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2ee8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ee8a8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2ee8a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ee8ac: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2ee8acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2ee8b0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2ee8b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2ee8b4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ee8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ee8b8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ee8b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ee8bc: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ee8bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2ee8c0:
    // 0x2ee8c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ee8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ee8c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ee8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8c8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EE8C8u;
    SET_GPR_U32(ctx, 31, 0x2EE8D0u);
    ctx->pc = 0x2EE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8C8u;
    // 0x2ee8cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EE8C8u, 0x2EE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8D0u;
label_2ee8d0:
    // 0x2ee8d0: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ee8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ee8d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8d8: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2EE8D8u;
    SET_GPR_U32(ctx, 31, 0x2EE8E0u);
    ctx->pc = 0x2EE8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8D8u;
    // 0x2ee8dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2EE8D8u, 0x2EE8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8E0u;
label_2ee8e0:
    // 0x2ee8e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ee8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8e4: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2EE8E4u;
    SET_GPR_U32(ctx, 31, 0x2EE8ECu);
    ctx->pc = 0x2EE8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8E4u;
    // 0x2ee8e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2EE8E4u, 0x2EE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8ECu;
label_2ee8ec:
    // 0x2ee8ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ee8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ee8f0: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EE8F0u;
    {
        const bool branch_taken_0x2ee8f0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2EE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8F0u;
        // 0x2ee8f4: 0x3c07003c  lui         $a3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8f0) {
            ctx->pc = 0x2EE970u;
            goto label_2ee970;
        }
    }
    ctx->pc = 0x2EE8F8u;
    // 0x2ee8f8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ee8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ee8fc: 0x8ce61180  lw          $a2, 0x1180($a3)
    ctx->pc = 0x2ee8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4480)));
    // 0x2ee900: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x2ee900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ee904: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ee904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2ee908: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2ee908u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2ee90c: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2ee90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2ee910: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ee910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ee914: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2ee914u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ee918: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x2ee918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2ee91c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2ee91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ee920: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EE920u;
    {
        const bool branch_taken_0x2ee920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE920u;
        // 0x2ee924: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee920) {
            ctx->pc = 0x2EE970u;
            goto label_2ee970;
        }
    }
    ctx->pc = 0x2EE928u;
    // 0x2ee928: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2ee928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ee92c: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2ee92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2ee930: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ee930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ee934: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EE934u;
    {
        const bool branch_taken_0x2ee934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee934) {
            ctx->pc = 0x2EE938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE934u;
            // 0x2ee938: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE974u;
            goto label_2ee974;
        }
    }
    ctx->pc = 0x2EE93Cu;
    // 0x2ee93c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2ee93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2ee940: 0x8c456b80  lw          $a1, 0x6B80($v0)
    ctx->pc = 0x2ee940u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x2ee944: 0x24a2fc00  addiu       $v0, $a1, -0x400
    ctx->pc = 0x2ee944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x2ee948: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ee948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ee94c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE94Cu;
    {
        const bool branch_taken_0x2ee94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee94c) {
            ctx->pc = 0x2EE950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE94Cu;
            // 0x2ee950: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE974u;
            goto label_2ee974;
        }
    }
    ctx->pc = 0x2EE954u;
    // 0x2ee954: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ee954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ee958: 0x8c62118c  lw          $v0, 0x118C($v1)
    ctx->pc = 0x2ee958u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2ee95c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2ee95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ee960: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2ee960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2ee964: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2ee964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ee968: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE968u;
    {
        const bool branch_taken_0x2ee968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee968) {
            ctx->pc = 0x2EE96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE968u;
            // 0x2ee96c: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE978u;
            goto label_2ee978;
        }
    }
    ctx->pc = 0x2EE970u;
label_2ee970:
    // 0x2ee970: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x2ee970u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
label_2ee974:
    // 0x2ee974: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2ee974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2ee978:
    // 0x2ee978: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ee978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ee97c: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x2ee97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2ee980: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2ee980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ee984: 0x400013  mtlo        $v0
    ctx->pc = 0x2ee984u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2ee988: 0x72043000  madd        $a2, $s0, $a0
    ctx->pc = 0x2ee988u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2ee98c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ee98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ee990: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2ee990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2ee994: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2ee994u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2ee998: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ee998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ee99c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ee99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ee9a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ee9a4: 0x32440007  andi        $a0, $s2, 0x7
    ctx->pc = 0x2ee9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x2ee9a8: 0xfcc20030  sd          $v0, 0x30($a2)
    ctx->pc = 0x2ee9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 2));
    // 0x2ee9ac: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE9ACu;
    {
        const bool branch_taken_0x2ee9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9ACu;
        // 0x2ee9b0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9ac) {
            ctx->pc = 0x2EE9B8u;
            goto label_2ee9b8;
        }
    }
    ctx->pc = 0x2EE9B4u;
    // 0x2ee9b4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ee9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ee9b8:
    // 0x2ee9b8: 0xfcc20038  sd          $v0, 0x38($a2)
    ctx->pc = 0x2ee9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 2));
    // 0x2ee9bc: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x2ee9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ee9c0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2ee9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2ee9c4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2ee9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2ee9c8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE9C8u;
    {
        const bool branch_taken_0x2ee9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9C8u;
        // 0x2ee9cc: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9c8) {
            ctx->pc = 0x2EE9ECu;
            goto label_2ee9ec;
        }
    }
    ctx->pc = 0x2EE9D0u;
    // 0x2ee9d0: 0x8e2502c0  lw          $a1, 0x2C0($s1)
    ctx->pc = 0x2ee9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2ee9d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ee9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9dc: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EE9DCu;
    SET_GPR_U32(ctx, 31, 0x2EE9E4u);
    ctx->pc = 0x2EE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9DCu;
    // 0x2ee9e0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EE9DCu, 0x2EE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE9E4u;
label_2ee9e4:
    // 0x2ee9e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EE9E4u;
    {
        const bool branch_taken_0x2ee9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9E4u;
        // 0x2ee9e8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9e4) {
            ctx->pc = 0x2EEA34u;
            goto label_2eea34;
        }
    }
    ctx->pc = 0x2EE9ECu;
label_2ee9ec:
    // 0x2ee9ec: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ee9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ee9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ee9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9f8: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EE9F8u;
    SET_GPR_U32(ctx, 31, 0x2EEA00u);
    ctx->pc = 0x2EE9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9F8u;
    // 0x2ee9fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EE9F8u, 0x2EEA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA00u;
label_2eea00:
    // 0x2eea00: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2eea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eea04: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2eea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eea08: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2eea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eea0c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2eea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eea10: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2eea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2eea14: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2eea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2eea18: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2eea18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2eea1c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2eea1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2eea20: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2eea20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2eea24: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2eea24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2eea28: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2eea28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2eea2c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2eea2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2eea30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2eea30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2eea34:
    // 0x2eea34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2eea34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea38: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EEA38u;
    SET_GPR_U32(ctx, 31, 0x2EEA40u);
    ctx->pc = 0x2EEA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA38u;
    // 0x2eea3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EEA38u, 0x2EEA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA40u;
label_2eea40:
    // 0x2eea40: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2eea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eea44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eea44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea48: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2EEA48u;
    SET_GPR_U32(ctx, 31, 0x2EEA50u);
    ctx->pc = 0x2EEA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA48u;
    // 0x2eea4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2EEA48u, 0x2EEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA50u;
label_2eea50:
    // 0x2eea50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea54: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2EEA54u;
    SET_GPR_U32(ctx, 31, 0x2EEA5Cu);
    ctx->pc = 0x2EEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA54u;
    // 0x2eea58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2EEA54u, 0x2EEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA5Cu;
label_2eea5c:
    // 0x2eea5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2eea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2eea60: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EEA60u;
    {
        const bool branch_taken_0x2eea60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2EEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA60u;
        // 0x2eea64: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea60) {
            ctx->pc = 0x2EEAE0u;
            goto label_2eeae0;
        }
    }
    ctx->pc = 0x2EEA68u;
    // 0x2eea68: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2eea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2eea6c: 0x8c661180  lw          $a2, 0x1180($v1)
    ctx->pc = 0x2eea6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4480)));
    // 0x2eea70: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2eea70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2eea74: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2eea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2eea78: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2eea78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eea7c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2eea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eea80: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2eea80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2eea84: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2eea84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2eea88: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2eea88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2eea8c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2eea8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eea90: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EEA90u;
    {
        const bool branch_taken_0x2eea90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA90u;
        // 0x2eea94: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea90) {
            ctx->pc = 0x2EEAE0u;
            goto label_2eeae0;
        }
    }
    ctx->pc = 0x2EEA98u;
    // 0x2eea98: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2eea98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2eea9c: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2eea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2eeaa0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2eeaa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eeaa4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EEAA4u;
    {
        const bool branch_taken_0x2eeaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeaa4) {
            ctx->pc = 0x2EEAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEAA4u;
            // 0x2eeaa8: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEAE4u;
            goto label_2eeae4;
        }
    }
    ctx->pc = 0x2EEAACu;
    // 0x2eeaac: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x2eeaacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
    // 0x2eeab0: 0x8d456b80  lw          $a1, 0x6B80($t2)
    ctx->pc = 0x2eeab0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x2eeab4: 0x24a2fc00  addiu       $v0, $a1, -0x400
    ctx->pc = 0x2eeab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x2eeab8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2eeab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eeabc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EEABCu;
    {
        const bool branch_taken_0x2eeabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeabc) {
            ctx->pc = 0x2EEAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEABCu;
            // 0x2eeac0: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEAE4u;
            goto label_2eeae4;
        }
    }
    ctx->pc = 0x2EEAC4u;
    // 0x2eeac4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2eeac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2eeac8: 0x8c62118c  lw          $v0, 0x118C($v1)
    ctx->pc = 0x2eeac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2eeacc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2eeaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2eead0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2eead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2eead4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2eead4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2eead8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEAD8u;
    {
        const bool branch_taken_0x2eead8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eead8) {
            ctx->pc = 0x2EEADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEAD8u;
            // 0x2eeadc: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEAE8u;
            goto label_2eeae8;
        }
    }
    ctx->pc = 0x2EEAE0u;
label_2eeae0:
    // 0x2eeae0: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x2eeae0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
label_2eeae4:
    // 0x2eeae4: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2eeae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2eeae8:
    // 0x2eeae8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2eeae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2eeaec: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x2eeaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2eeaf0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2eeaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2eeaf4: 0x400013  mtlo        $v0
    ctx->pc = 0x2eeaf4u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2eeaf8: 0x72043000  madd        $a2, $s0, $a0
    ctx->pc = 0x2eeaf8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2eeafc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2eeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2eeb00: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2eeb00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2eeb04: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2eeb04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2eeb08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2eeb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2eeb0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2eeb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2eeb10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eeb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eeb14: 0x32440007  andi        $a0, $s2, 0x7
    ctx->pc = 0x2eeb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x2eeb18: 0xfcc20060  sd          $v0, 0x60($a2)
    ctx->pc = 0x2eeb18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 2));
    // 0x2eeb1c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEB1Cu;
    {
        const bool branch_taken_0x2eeb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB1Cu;
        // 0x2eeb20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb1c) {
            ctx->pc = 0x2EEB28u;
            goto label_2eeb28;
        }
    }
    ctx->pc = 0x2EEB24u;
    // 0x2eeb24: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2eeb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2eeb28:
    // 0x2eeb28: 0xfcc20068  sd          $v0, 0x68($a2)
    ctx->pc = 0x2eeb28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 2));
    // 0x2eeb2c: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2eeb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2eeb30: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2eeb30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2eeb34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2eeb34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2eeb38: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2eeb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eeb3c: 0x1440fee2  bnez        $v0, . + 4 + (-0x11E << 2)
    ctx->pc = 0x2EEB3Cu;
    {
        const bool branch_taken_0x2eeb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB3Cu;
        // 0x2eeb40: 0x307200fe  andi        $s2, $v1, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb3c) {
            ctx->pc = 0x2EE6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee6c8;
        }
    }
    ctx->pc = 0x2EEB44u;
label_2eeb44:
    // 0x2eeb44: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2eeb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2eeb48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eeb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eeb4c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2EEB4Cu;
    {
        const bool branch_taken_0x2eeb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB4Cu;
        // 0x2eeb50: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb4c) {
            ctx->pc = 0x2EECD0u;
            goto label_2eecd0;
        }
    }
    ctx->pc = 0x2EEB54u;
    // 0x2eeb54: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2eeb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2eeb58: 0x246274a0  addiu       $v0, $v1, 0x74A0
    ctx->pc = 0x2eeb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2eeb5c: 0x27a600f4  addiu       $a2, $sp, 0xF4
    ctx->pc = 0x2eeb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x2eeb60: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x2eeb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2eeb64: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2eeb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2eeb68: 0x24634128  addiu       $v1, $v1, 0x4128
    ctx->pc = 0x2eeb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16680));
    // 0x2eeb6c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2eeb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2eeb70: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2eeb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2eeb74: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2eeb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2eeb78: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2eeb78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2eeb7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2eeb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eeb80: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2EEB80u;
    SET_GPR_U32(ctx, 31, 0x2EEB88u);
    ctx->pc = 0x2EEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB80u;
    // 0x2eeb84: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2EEB80u, 0x2EEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB88u;
label_2eeb88:
    // 0x2eeb88: 0x92240245  lbu         $a0, 0x245($s1)
    ctx->pc = 0x2eeb88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x2eeb8c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2eeb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2eeb90: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2eeb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2eeb94: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEB94u;
    {
        const bool branch_taken_0x2eeb94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb94) {
            ctx->pc = 0x2EEB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEB94u;
            // 0x2eeb98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEB9Cu;
            goto label_2eeb9c;
        }
    }
    ctx->pc = 0x2EEB9Cu;
label_2eeb9c:
    // 0x2eeb9c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2eeb9cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2eeba0: 0x92250246  lbu         $a1, 0x246($s1)
    ctx->pc = 0x2eeba0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x2eeba4: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x2eeba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2eeba8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2eeba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2eebac: 0x0  nop
    ctx->pc = 0x2eebacu;
    // NOP
    // 0x2eebb0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2eebb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2eebb4: 0x82220244  lb          $v0, 0x244($s1)
    ctx->pc = 0x2eebb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x2eebb8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2eebb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2eebbc: 0x0  nop
    ctx->pc = 0x2eebbcu;
    // NOP
    // 0x2eebc0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2eebc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2eebc4: 0x8e28011c  lw          $t0, 0x11C($s1)
    ctx->pc = 0x2eebc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2eebc8: 0xc62202d8  lwc1        $f2, 0x2D8($s1)
    ctx->pc = 0x2eebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eebcc: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2eebccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2eebd0: 0x3812  mflo        $a3
    ctx->pc = 0x2eebd0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2eebd4: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2eebd4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2eebd8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2eebd8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eebdc: 0x0  nop
    ctx->pc = 0x2eebdcu;
    // NOP
    // 0x2eebe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eebe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eebe4: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x2eebe4u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2eebe8: 0x2812  mflo        $a1
    ctx->pc = 0x2eebe8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2eebec: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2eebecu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2eebf0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2eebf0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eebf4: 0x0  nop
    ctx->pc = 0x2eebf4u;
    // NOP
    // 0x2eebf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eebf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eebfc: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x2eebfcu;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2eec00: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2eec00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2eec04: 0x1810  mfhi        $v1
    ctx->pc = 0x2eec04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2eec08: 0x1012  mflo        $v0
    ctx->pc = 0x2eec08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2eec0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eec0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eec10: 0x0  nop
    ctx->pc = 0x2eec10u;
    // NOP
    // 0x2eec14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eec14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eec18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eec18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eec1c: 0x0  nop
    ctx->pc = 0x2eec1cu;
    // NOP
    // 0x2eec20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eec20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eec24: 0x46040142  mul.s       $f5, $f0, $f4
    ctx->pc = 0x2eec24u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2eec28: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEC28u;
    {
        const bool branch_taken_0x2eec28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC28u;
        // 0x2eec2c: 0x46030802  mul.s       $f0, $f1, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec28) {
            ctx->pc = 0x2EEC38u;
            goto label_2eec38;
        }
    }
    ctx->pc = 0x2EEC30u;
    // 0x2eec30: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x2eec30u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2eec34: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2eec34u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_2eec38:
    // 0x2eec38: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2eec38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2eec3c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2eec3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2eec40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEC40u;
    {
        const bool branch_taken_0x2eec40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC40u;
        // 0x2eec44: 0x82220249  lb          $v0, 0x249($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec40) {
            ctx->pc = 0x2EEC50u;
            goto label_2eec50;
        }
    }
    ctx->pc = 0x2EEC48u;
    // 0x2eec48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2eec48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2eec4c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2eec4cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2eec50:
    // 0x2eec50: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EEC50u;
    {
        const bool branch_taken_0x2eec50 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2EEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC50u;
        // 0x2eec54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec50) {
            ctx->pc = 0x2EECD0u;
            goto label_2eecd0;
        }
    }
    ctx->pc = 0x2EEC58u;
    // 0x2eec58: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x2eec58u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2eec5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2eec5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eec60: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2eec60u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2eec64: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x2eec64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2eec68:
    // 0x2eec68: 0xe46500a0  swc1        $f5, 0xA0($v1)
    ctx->pc = 0x2eec68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2eec6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2eec6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eec70: 0x0  nop
    ctx->pc = 0x2eec70u;
    // NOP
    // 0x2eec74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eec74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eec78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2eec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2eec7c: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2eec7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2eec80: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2eec80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2eec84: 0xc62202d4  lwc1        $f2, 0x2D4($s1)
    ctx->pc = 0x2eec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eec88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2eec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2eec8c: 0xfc6500a8  sd          $a1, 0xA8($v1)
    ctx->pc = 0x2eec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 5));
    // 0x2eec90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eec90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eec94: 0x0  nop
    ctx->pc = 0x2eec94u;
    // NOP
    // 0x2eec98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eec98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eec9c: 0xe46400d0  swc1        $f4, 0xD0($v1)
    ctx->pc = 0x2eec9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2eeca0: 0xfc6500d8  sd          $a1, 0xD8($v1)
    ctx->pc = 0x2eeca0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 216), GPR_U64(ctx, 5));
    // 0x2eeca4: 0x0  nop
    ctx->pc = 0x2eeca4u;
    // NOP
    // 0x2eeca8: 0x0  nop
    ctx->pc = 0x2eeca8u;
    // NOP
    // 0x2eecac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2eecacu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2eecb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2eecb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2eecb4: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2eecb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2eecb8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2eecb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2eecbc: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2eecbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2eecc0: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2eecc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2eecc4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2eecc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eecc8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2EECC8u;
    {
        const bool branch_taken_0x2eecc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECC8u;
        // 0x2eeccc: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecc8) {
            ctx->pc = 0x2EEC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eec68;
        }
    }
    ctx->pc = 0x2EECD0u;
label_2eecd0:
    // 0x2eecd0: 0x82280249  lb          $t0, 0x249($s1)
    ctx->pc = 0x2eecd0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2eecd4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2eecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2eecd8: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x2eecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2eecdc: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x2eecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x2eece0: 0x346300f8  ori         $v1, $v1, 0xF8
    ctx->pc = 0x2eece0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)248);
    // 0x2eece4: 0x1024018  mult        $t0, $t0, $v0
    ctx->pc = 0x2eece4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2eece8: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x2eece8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2eecec: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2eececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2eecf0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2eecf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eecf4: 0x240b0070  addiu       $t3, $zero, 0x70
    ctx->pc = 0x2eecf4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2eecf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eecf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecfc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2eecfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eed00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed04: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x2eed04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x2eed08: 0x2c84021  addu        $t0, $s6, $t0
    ctx->pc = 0x2eed08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x2eed0c: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x2eed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x2eed10: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x2eed10u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x2eed14: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2eed14u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2eed18: 0x8d431180  lw          $v1, 0x1180($t2)
    ctx->pc = 0x2eed18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2eed1c: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x2eed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x2eed20: 0x123482a  slt         $t1, $t1, $v1
    ctx->pc = 0x2eed20u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eed24: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2eed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2eed28: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x2eed28u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2eed2c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2eed2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2eed30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eed30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eed34: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x2eed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x2eed38: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2EED38u;
    SET_GPR_U32(ctx, 31, 0x2EED40u);
    ctx->pc = 0x2EED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED38u;
    // 0x2eed3c: 0xfd020010  sd          $v0, 0x10($t0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2EED38u, 0x2EED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED40u;
label_2eed40:
    // 0x2eed40: 0x10000337  b           . + 4 + (0x337 << 2)
    ctx->pc = 0x2EED40u;
    {
        const bool branch_taken_0x2eed40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED40u;
        // 0x2eed44: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed40) {
            ctx->pc = 0x2EFA20u;
            goto label_2efa20;
        }
    }
    ctx->pc = 0x2EED48u;
label_2eed48:
    // 0x2eed48: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2eed48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2eed4c: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2eed4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2eed50: 0x248574a0  addiu       $a1, $a0, 0x74A0
    ctx->pc = 0x2eed50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
    // 0x2eed54: 0x8ca30210  lw          $v1, 0x210($a1)
    ctx->pc = 0x2eed54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x2eed58: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2eed58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2eed5c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2eed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2eed60: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2eed60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2eed64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EED64u;
    {
        const bool branch_taken_0x2eed64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED64u;
        // 0x2eed68: 0x24530030  addiu       $s3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed64) {
            ctx->pc = 0x2EED74u;
            goto label_2eed74;
        }
    }
    ctx->pc = 0x2EED6Cu;
    // 0x2eed6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EED6Cu;
    {
        const bool branch_taken_0x2eed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED6Cu;
        // 0x2eed70: 0x8e3e02c4  lw          $fp, 0x2C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed6c) {
            ctx->pc = 0x2EED78u;
            goto label_2eed78;
        }
    }
    ctx->pc = 0x2EED74u;
label_2eed74:
    // 0x2eed74: 0x8e3e02c8  lw          $fp, 0x2C8($s1)
    ctx->pc = 0x2eed74u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_2eed78:
    // 0x2eed78: 0x41902  srl         $v1, $a0, 4
    ctx->pc = 0x2eed78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x2eed7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2eed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2eed80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2eed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2eed84: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2eed84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2eed88: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2eed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eed8c: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x2eed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x2eed90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eed94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2eed94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2eed98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2eed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2eed9c: 0x34048152  ori         $a0, $zero, 0x8152
    ctx->pc = 0x2eed9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33106);
    // 0x2eeda0: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2eeda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2eeda4: 0x34848007  ori         $a0, $a0, 0x8007
    ctx->pc = 0x2eeda4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32775);
    // 0x2eeda8: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x2eeda8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x2eedac: 0x27d20010  addiu       $s2, $fp, 0x10
    ctx->pc = 0x2eedacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2eedb0: 0xafc3000c  sw          $v1, 0xC($fp)
    ctx->pc = 0x2eedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x2eedb4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2eedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2eedb8: 0xffc40010  sd          $a0, 0x10($fp)
    ctx->pc = 0x2eedb8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 4));
    // 0x2eedbc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2eedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2eedc0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2eedc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2eedc4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2eedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2eedc8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2eedc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2eedcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEDCCu;
    {
        const bool branch_taken_0x2eedcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eedcc) {
            ctx->pc = 0x2EEDE4u;
            goto label_2eede4;
        }
    }
    ctx->pc = 0x2EEDD4u;
    // 0x2eedd4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2eedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2eedd8: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2eedd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2eeddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEDDCu;
    {
        const bool branch_taken_0x2eeddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDDCu;
        // 0x2eede0: 0xfe420010  sd          $v0, 0x10($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeddc) {
            ctx->pc = 0x2EEDF0u;
            goto label_2eedf0;
        }
    }
    ctx->pc = 0x2EEDE4u;
label_2eede4:
    // 0x2eede4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2eede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2eede8: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2eede8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2eedec: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x2eedecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
label_2eedf0:
    // 0x2eedf0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2eedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2eedf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eedf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eedf8: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x2eedf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x2eedfc: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2EEDFCu;
    SET_GPR_U32(ctx, 31, 0x2EEE04u);
    ctx->pc = 0x2EEE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEDFCu;
    // 0x2eee00: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2EEDFCu, 0x2EEE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE04u;
label_2eee04:
    // 0x2eee04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2eee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2eee08: 0xfe400030  sd          $zero, 0x30($s2)
    ctx->pc = 0x2eee08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 0));
    // 0x2eee0c: 0xfe420038  sd          $v0, 0x38($s2)
    ctx->pc = 0x2eee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 2));
    // 0x2eee10: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2eee10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2eee14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eee18: 0x261064a0  addiu       $s0, $s0, 0x64A0
    ctx->pc = 0x2eee18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    // 0x2eee1c: 0x82220101  lb          $v0, 0x101($s1)
    ctx->pc = 0x2eee1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 257)));
    // 0x2eee20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2eee20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eee24: 0x8e250118  lw          $a1, 0x118($s1)
    ctx->pc = 0x2eee24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x2eee28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee2c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2eee2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2eee30: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2EEE30u;
    SET_GPR_U32(ctx, 31, 0x2EEE38u);
    ctx->pc = 0x2EEE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE30u;
    // 0x2eee34: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2EEE30u, 0x2EEE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE38u;
label_2eee38:
    // 0x2eee38: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2eee38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x2eee3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee40: 0xc0544da  jal         func_151368
    ctx->pc = 0x2EEE40u;
    SET_GPR_U32(ctx, 31, 0x2EEE48u);
    ctx->pc = 0x2EEE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE40u;
    // 0x2eee44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2EEE40u, 0x2EEE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE48u;
label_2eee48:
    // 0x2eee48: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2eee48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eee4c: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x2eee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
    // 0x2eee50: 0xfe430048  sd          $v1, 0x48($s2)
    ctx->pc = 0x2eee50u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 3));
    // 0x2eee54: 0x6a22018f  ldl         $v0, 0x18F($s1)
    ctx->pc = 0x2eee54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2eee58: 0x6e220188  ldr         $v0, 0x188($s1)
    ctx->pc = 0x2eee58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2eee5c: 0x6a230197  ldl         $v1, 0x197($s1)
    ctx->pc = 0x2eee5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2eee60: 0x6e230190  ldr         $v1, 0x190($s1)
    ctx->pc = 0x2eee60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2eee64: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2eee64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eee68: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2eee68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eee6c: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2eee6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eee70: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2eee70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eee74: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2eee74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2eee78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eee78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eee7c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2eee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eee80: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2eee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eee84: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2eee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2eee88: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2eee88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2eee8c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2eee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eee90: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2eee90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2eee94: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2eee94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2eee98: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2eee98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2eee9c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2eee9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2eeea0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eeea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eeea4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2eeea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2eeea8: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2eeea8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2eeeac: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2eeeacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2eeeb0: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2eeeb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2eeeb4: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x2eeeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2eeeb8: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x2eeeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2eeebc: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x2eeebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2eeec0: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x2eeec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2eeec4: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2eeec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eeec8: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2eeec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eeecc: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x2eeeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eeed0: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x2eeed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eeed4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2eeed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2eeed8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2eeed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eeedc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2eeedcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eeee0: 0x0  nop
    ctx->pc = 0x2eeee0u;
    // NOP
    // 0x2eeee4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEEE4u;
    {
        const bool branch_taken_0x2eeee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eeee4) {
            ctx->pc = 0x2EEEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEEE4u;
            // 0x2eeee8: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEEECu;
            goto label_2eeeec;
        }
    }
    ctx->pc = 0x2EEEECu;
label_2eeeec:
    // 0x2eeeec: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2eeeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eeef0: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2eeef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eeef4: 0x0  nop
    ctx->pc = 0x2eeef4u;
    // NOP
    // 0x2eeef8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEEF8u;
    {
        const bool branch_taken_0x2eeef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eeef8) {
            ctx->pc = 0x2EEEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEEF8u;
            // 0x2eeefc: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF00u;
            goto label_2eef00;
        }
    }
    ctx->pc = 0x2EEF00u;
label_2eef00:
    // 0x2eef00: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2eef00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eef04: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2eef04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eef08: 0x0  nop
    ctx->pc = 0x2eef08u;
    // NOP
    // 0x2eef0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEF0Cu;
    {
        const bool branch_taken_0x2eef0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eef0c) {
            ctx->pc = 0x2EEF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF0Cu;
            // 0x2eef10: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF14u;
            goto label_2eef14;
        }
    }
    ctx->pc = 0x2EEF14u;
label_2eef14:
    // 0x2eef14: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2eef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eef18: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2eef18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eef1c: 0x0  nop
    ctx->pc = 0x2eef1cu;
    // NOP
    // 0x2eef20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEF20u;
    {
        const bool branch_taken_0x2eef20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eef20) {
            ctx->pc = 0x2EEF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF20u;
            // 0x2eef24: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF28u;
            goto label_2eef28;
        }
    }
    ctx->pc = 0x2EEF28u;
label_2eef28:
    // 0x2eef28: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2eef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eef2c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2eef2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eef30: 0x0  nop
    ctx->pc = 0x2eef30u;
    // NOP
    // 0x2eef34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEF34u;
    {
        const bool branch_taken_0x2eef34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eef34) {
            ctx->pc = 0x2EEF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF34u;
            // 0x2eef38: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF3Cu;
            goto label_2eef3c;
        }
    }
    ctx->pc = 0x2EEF3Cu;
label_2eef3c:
    // 0x2eef3c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2eef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eef40: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2eef40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eef44: 0x0  nop
    ctx->pc = 0x2eef44u;
    // NOP
    // 0x2eef48: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEF48u;
    {
        const bool branch_taken_0x2eef48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eef48) {
            ctx->pc = 0x2EEF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF48u;
            // 0x2eef4c: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF50u;
            goto label_2eef50;
        }
    }
    ctx->pc = 0x2EEF50u;
label_2eef50:
    // 0x2eef50: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2eef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eef54: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2eef54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eef58: 0x0  nop
    ctx->pc = 0x2eef58u;
    // NOP
    // 0x2eef5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEF5Cu;
    {
        const bool branch_taken_0x2eef5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eef5c) {
            ctx->pc = 0x2EEF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF5Cu;
            // 0x2eef60: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF64u;
            goto label_2eef64;
        }
    }
    ctx->pc = 0x2EEF64u;
label_2eef64:
    // 0x2eef64: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2eef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eef68: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2eef68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eef6c: 0x0  nop
    ctx->pc = 0x2eef6cu;
    // NOP
    // 0x2eef70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEF70u;
    {
        const bool branch_taken_0x2eef70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eef70) {
            ctx->pc = 0x2EEF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF70u;
            // 0x2eef74: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF78u;
            goto label_2eef78;
        }
    }
    ctx->pc = 0x2EEF78u;
label_2eef78:
    // 0x2eef78: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2eef78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2eef7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2eef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2eef80: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2eef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2eef84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEF84u;
    {
        const bool branch_taken_0x2eef84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF84u;
        // 0x2eef88: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef84) {
            ctx->pc = 0x2EEF9Cu;
            goto label_2eef9c;
        }
    }
    ctx->pc = 0x2EEF8Cu;
    // 0x2eef8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2eef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eef90: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2eef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2eef94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEF94u;
    {
        const bool branch_taken_0x2eef94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF94u;
        // 0x2eef98: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef94) {
            ctx->pc = 0x2EEFB0u;
            goto label_2eefb0;
        }
    }
    ctx->pc = 0x2EEF9Cu;
label_2eef9c:
    // 0x2eef9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2eef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eefa0: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2eefa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2eefa4: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x2eefa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2eefa8: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2eefa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2eefac: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x2eefacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
label_2eefb0:
    // 0x2eefb0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2eefb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eefb4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2eefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2eefb8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2eefb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2eefbc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2eefbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2eefc0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eefc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eefc4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2eefc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2eefc8: 0xfe420070  sd          $v0, 0x70($s2)
    ctx->pc = 0x2eefc8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
    // 0x2eefcc: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2eefccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2eefd0: 0xfe420078  sd          $v0, 0x78($s2)
    ctx->pc = 0x2eefd0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 2));
    // 0x2eefd4: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2eefd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2eefd8: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EEFD8u;
    {
        const bool branch_taken_0x2eefd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFD8u;
        // 0x2eefdc: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefd8) {
            ctx->pc = 0x2EF054u;
            goto label_2ef054;
        }
    }
    ctx->pc = 0x2EEFE0u;
    // 0x2eefe0: 0x9222011c  lbu         $v0, 0x11C($s1)
    ctx->pc = 0x2eefe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2eefe4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2eefe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2eefe8: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EEFE8u;
    {
        const bool branch_taken_0x2eefe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eefe8) {
            ctx->pc = 0x2EEFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEFE8u;
            // 0x2eefec: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF058u;
            goto label_2ef058;
        }
    }
    ctx->pc = 0x2EEFF0u;
    // 0x2eeff0: 0x908202b6  lbu         $v0, 0x2B6($a0)
    ctx->pc = 0x2eeff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 694)));
    // 0x2eeff4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2eeff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2eeff8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2eeff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2eeffc: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2eeffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ef000: 0x0  nop
    ctx->pc = 0x2ef000u;
    // NOP
    // 0x2ef004: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2ef004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2ef008: 0x908302b7  lbu         $v1, 0x2B7($a0)
    ctx->pc = 0x2ef008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 695)));
    // 0x2ef00c: 0x908202bc  lbu         $v0, 0x2BC($a0)
    ctx->pc = 0x2ef00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 700)));
    // 0x2ef010: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ef010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ef014: 0x0  nop
    ctx->pc = 0x2ef014u;
    // NOP
    // 0x2ef018: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ef018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ef01c: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x2ef01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef020: 0x46042943  div.s       $f5, $f5, $f4
    ctx->pc = 0x2ef020u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[4]);
    // 0x2ef024: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2ef024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ef028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef02c: 0x0  nop
    ctx->pc = 0x2ef02cu;
    // NOP
    // 0x2ef030: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ef034: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2ef034u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x2ef038: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2ef038u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2ef03c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ef03cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ef040: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ef040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ef044: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ef044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ef048: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ef048u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ef04c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF04Cu;
    {
        const bool branch_taken_0x2ef04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF04Cu;
        // 0x2ef050: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef04c) {
            ctx->pc = 0x2EF05Cu;
            goto label_2ef05c;
        }
    }
    ctx->pc = 0x2EF054u;
label_2ef054:
    // 0x2ef054: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ef054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2ef058:
    // 0x2ef058: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2ef058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2ef05c:
    // 0x2ef05c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2ef05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef060: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ef060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef064: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2ef064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ef068: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2ef068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2ef06c: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x2ef06cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x2ef070: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ef070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef074: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ef078: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ef078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ef07c: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2ef07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef080: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ef084: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ef084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ef088: 0xfe460058  sd          $a2, 0x58($s2)
    ctx->pc = 0x2ef088u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 6));
    // 0x2ef08c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef08cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ef090: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2ef090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ef094: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ef098: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2ef098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ef09c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ef09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ef0a0: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2ef0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2ef0a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ef0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ef0a8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ef0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ef0ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ef0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ef0b0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ef0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ef0b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ef0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ef0b8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ef0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ef0bc: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2ef0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2ef0c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ef0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ef0c4: 0x131902  srl         $v1, $s3, 4
    ctx->pc = 0x2ef0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x2ef0c8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ef0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ef0cc: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ef0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2ef0d0: 0xfe420050  sd          $v0, 0x50($s2)
    ctx->pc = 0x2ef0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 2));
    // 0x2ef0d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ef0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ef0d8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2ef0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ef0dc: 0x3c070a00  lui         $a3, 0xA00
    ctx->pc = 0x2ef0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2560 << 16));
    // 0x2ef0e0: 0x34e700f8  ori         $a3, $a3, 0xF8
    ctx->pc = 0x2ef0e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)248);
    // 0x2ef0e4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ef0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ef0e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ef0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ef0ec: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x2ef0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ef0f0: 0x34058152  ori         $a1, $zero, 0x8152
    ctx->pc = 0x2ef0f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33106);
    // 0x2ef0f4: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2ef0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2ef0f8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ef0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ef0fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ef0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ef100: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ef100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ef104: 0xfe440068  sd          $a0, 0x68($s2)
    ctx->pc = 0x2ef104u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 4));
    // 0x2ef108: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ef108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef10c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ef10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ef110: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ef110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ef114: 0x27d70090  addiu       $s7, $fp, 0x90
    ctx->pc = 0x2ef114u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x2ef118: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x2ef118u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x2ef11c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2ef11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ef120: 0xffc30090  sd          $v1, 0x90($fp)
    ctx->pc = 0x2ef120u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 144), GPR_U64(ctx, 3));
    // 0x2ef124: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2ef124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2ef128: 0xaee40008  sw          $a0, 0x8($s7)
    ctx->pc = 0x2ef128u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 4));
    // 0x2ef12c: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x2ef12cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
    // 0x2ef130: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ef130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ef134: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ef134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ef138: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ef138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ef13c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF13Cu;
    {
        const bool branch_taken_0x2ef13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF13Cu;
        // 0x2ef140: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef13c) {
            ctx->pc = 0x2EF164u;
            goto label_2ef164;
        }
    }
    ctx->pc = 0x2EF144u;
    // 0x2ef144: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ef144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ef148: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2ef148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ef14c: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2ef14cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2ef150: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ef150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef154: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EF154u;
    SET_GPR_U32(ctx, 31, 0x2EF15Cu);
    ctx->pc = 0x2EF158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF154u;
    // 0x2ef158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EF154u, 0x2EF15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF15Cu;
label_2ef15c:
    // 0x2ef15c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2EF15Cu;
    {
        const bool branch_taken_0x2ef15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF15Cu;
        // 0x2ef160: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef15c) {
            ctx->pc = 0x2EF1E4u;
            goto label_2ef1e4;
        }
    }
    ctx->pc = 0x2EF164u;
label_2ef164:
    // 0x2ef164: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2ef164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ef168: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2ef168u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2ef16c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2ef16cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ef170: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2ef170u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ef174: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2ef174u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2ef178: 0xf8e40030  sqc2        $vf4, 0x30($a3)
    ctx->pc = 0x2ef178u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef17c: 0xf8e50020  sqc2        $vf5, 0x20($a3)
    ctx->pc = 0x2ef17cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ef180: 0xf8e60010  sqc2        $vf6, 0x10($a3)
    ctx->pc = 0x2ef180u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ef184: 0xf8e70000  sqc2        $vf7, 0x0($a3)
    ctx->pc = 0x2ef184u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2ef188: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ef188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ef18c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ef18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2ef190: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x2ef190u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ef194: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2ef194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ef198: 0x8c83118c  lw          $v1, 0x118C($a0)
    ctx->pc = 0x2ef198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2ef19c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x2ef19cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x2ef1a0: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x2ef1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ef1a4: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2ef1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2ef1a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ef1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ef1ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ef1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ef1b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ef1b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ef1b4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2ef1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ef1b8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2ef1b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2ef1bc: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2ef1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ef1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef1c4: 0x0  nop
    ctx->pc = 0x2ef1c4u;
    // NOP
    // 0x2ef1c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ef1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ef1cc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ef1ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef1d0: 0x0  nop
    ctx->pc = 0x2ef1d0u;
    // NOP
    // 0x2ef1d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ef1d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2ef1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ef1dc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2ef1dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ef1e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2ef1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ef1e4:
    // 0x2ef1e4: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2EF1E4u;
    SET_GPR_U32(ctx, 31, 0x2EF1ECu);
    ctx->pc = 0x2EF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF1E4u;
    // 0x2ef1e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2EF1E4u, 0x2EF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1ECu;
label_2ef1ec:
    // 0x2ef1ec: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x2ef1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x2ef1f0: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2ef1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2ef1f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ef1f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef1f8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2ef1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef1fc: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2ef1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef200: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2ef200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef204: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2ef204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef208: 0xc7b40054  lwc1        $f20, 0x54($sp)
    ctx->pc = 0x2ef208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ef20c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2ef20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef210: 0x82230249  lb          $v1, 0x249($s1)
    ctx->pc = 0x2ef210u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ef214: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2ef214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ef218: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ef218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ef21c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef21cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef220: 0x0  nop
    ctx->pc = 0x2ef220u;
    // NOP
    // 0x2ef224: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ef228: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ef228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ef22c: 0x0  nop
    ctx->pc = 0x2ef22cu;
    // NOP
    // 0x2ef230: 0x0  nop
    ctx->pc = 0x2ef230u;
    // NOP
    // 0x2ef234: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x2ef234u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ef238: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EF238u;
    {
        const bool branch_taken_0x2ef238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef238) {
            ctx->pc = 0x2EF23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF238u;
            // 0x2ef23c: 0x4615ad40  add.s       $f21, $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF240u;
            goto label_2ef240;
        }
    }
    ctx->pc = 0x2EF240u;
label_2ef240:
    // 0x2ef240: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2ef240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2ef244: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF244u;
    {
        const bool branch_taken_0x2ef244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef244) {
            ctx->pc = 0x2EF248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF244u;
            // 0x2ef248: 0x8e2202bc  lw          $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF264u;
            goto label_2ef264;
        }
    }
    ctx->pc = 0x2EF24Cu;
    // 0x2ef24c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ef24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ef250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ef250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef254: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2ef254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2ef258: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2ef258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ef25c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2ef25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2ef260: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2ef260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_2ef264:
    // 0x2ef264: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ef264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef268: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ef268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef26c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2ef26cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2ef270: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x2ef270u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ef274: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x2ef274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef278: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x2ef278u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef27c: 0x0  nop
    ctx->pc = 0x2ef27cu;
    // NOP
    // 0x2ef280: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x2EF280u;
    {
        const bool branch_taken_0x2ef280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF280u;
        // 0x2ef284: 0x27b300b0  addiu       $s3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef280) {
            ctx->pc = 0x2EF354u;
            goto label_2ef354;
        }
    }
    ctx->pc = 0x2EF288u;
    // 0x2ef288: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x2ef288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x2ef28c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2ef28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ef290: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2ef290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2ef294: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ef294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef298: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ef298u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef29c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ef29cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef2a0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ef2a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ef2a4: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ef2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef2a8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ef2a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ef2ac: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ef2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef2b0: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2ef2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ef2b4: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x2ef2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef2b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef2bc: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2EF2BCu;
    SET_GPR_U32(ctx, 31, 0x2EF2C4u);
    ctx->pc = 0x2EF2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF2BCu;
    // 0x2ef2c0: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2EF2BCu, 0x2EF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF2C4u;
label_2ef2c4:
    // 0x2ef2c4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2ef2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef2c8: 0x0  nop
    ctx->pc = 0x2ef2c8u;
    // NOP
    // 0x2ef2cc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF2CCu;
    {
        const bool branch_taken_0x2ef2cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2CCu;
        // 0x2ef2d0: 0xc7a400b0  lwc1        $f4, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2cc) {
            ctx->pc = 0x2EF310u;
            goto label_2ef310;
        }
    }
    ctx->pc = 0x2EF2D4u;
    // 0x2ef2d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ef2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ef2d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ef2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef2dc: 0x0  nop
    ctx->pc = 0x2ef2dcu;
    // NOP
    // 0x2ef2e0: 0x0  nop
    ctx->pc = 0x2ef2e0u;
    // NOP
    // 0x2ef2e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ef2e4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2ef2e8: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x2ef2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ef2ec: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2ef2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef2f0: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ef2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef2f4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2ef2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2ef2f8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2ef2f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ef2fc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2ef2fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2ef300: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2ef300u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ef304: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x2ef304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2ef308: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x2ef308u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2ef30c: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x2ef30cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2ef310:
    // 0x2ef310: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2ef310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2ef314: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ef314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef318: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2ef318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef31c: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x2ef31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef320: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2ef320u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ef324: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ef324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef328: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ef328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ef32c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ef32cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ef330: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ef330u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ef334: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ef334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ef338: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ef338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef33c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ef33cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef340: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ef340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef344: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ef344u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ef348: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2ef348u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ef34c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ef34cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ef350: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ef350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_2ef354:
    // 0x2ef354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef358: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ef358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ef35c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EF35Cu;
    SET_GPR_U32(ctx, 31, 0x2EF364u);
    ctx->pc = 0x2EF360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF35Cu;
    // 0x2ef360: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EF35Cu, 0x2EF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF364u;
label_2ef364:
    // 0x2ef364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ef364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ef368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ef368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef36c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ef36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef370: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ef370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef374: 0x0  nop
    ctx->pc = 0x2ef374u;
    // NOP
    // 0x2ef378: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EF378u;
    {
        const bool branch_taken_0x2ef378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef378) {
            ctx->pc = 0x2EF37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF378u;
            // 0x2ef37c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF380u;
            goto label_2ef380;
        }
    }
    ctx->pc = 0x2EF380u;
label_2ef380:
    // 0x2ef380: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ef384: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x2ef384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2ef388: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x2ef388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ef38c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ef38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef390: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2ef390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2ef394: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ef394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ef398: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2ef398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2ef39c: 0x18400120  blez        $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x2EF39Cu;
    {
        const bool branch_taken_0x2ef39c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2EF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF39Cu;
        // 0x2ef3a0: 0xafa3011c  sw          $v1, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef39c) {
            ctx->pc = 0x2EF820u;
            goto label_2ef820;
        }
    }
    ctx->pc = 0x2EF3A4u;
    // 0x2ef3a4: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x2ef3a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ef3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ef3ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ef3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ef3b0: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x2ef3b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3b4: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x2ef3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x2ef3b8: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x2ef3b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2ef3bc: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x2ef3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
label_2ef3c0:
    // 0x2ef3c0: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x2ef3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef3c4: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ef3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ef3c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ef3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3d0: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EF3D0u;
    SET_GPR_U32(ctx, 31, 0x2EF3D8u);
    ctx->pc = 0x2EF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF3D0u;
    // 0x2ef3d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EF3D0u, 0x2EF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3D8u;
label_2ef3d8:
    // 0x2ef3d8: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ef3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ef3dc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ef3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ef3e0: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2EF3E0u;
    {
        const bool branch_taken_0x2ef3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3E0u;
        // 0x2ef3e4: 0x27b500c0  addiu       $s5, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3e0) {
            ctx->pc = 0x2EF5B8u;
            goto label_2ef5b8;
        }
    }
    ctx->pc = 0x2EF3E8u;
    // 0x2ef3e8: 0x1640001c  bnez        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EF3E8u;
    {
        const bool branch_taken_0x2ef3e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef3e8) {
            ctx->pc = 0x2EF45Cu;
            goto label_2ef45c;
        }
    }
    ctx->pc = 0x2EF3F0u;
    // 0x2ef3f0: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2ef3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef3f4: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ef3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef3f8: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ef3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ef3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef400: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ef400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef404: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EF404u;
    SET_GPR_U32(ctx, 31, 0x2EF40Cu);
    ctx->pc = 0x2EF408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF404u;
    // 0x2ef408: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EF404u, 0x2EF40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF40Cu;
label_2ef40c:
    // 0x2ef40c: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ef40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ef410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef414: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x2ef414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ef418: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EF418u;
    SET_GPR_U32(ctx, 31, 0x2EF420u);
    ctx->pc = 0x2EF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF418u;
    // 0x2ef41c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EF418u, 0x2EF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF420u;
label_2ef420:
    // 0x2ef420: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x2ef420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef424: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2ef424u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ef428: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2ef428u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ef42c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ef42cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ef430: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ef430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef434: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2ef434u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ef438: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2ef438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef43c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2ef43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef440: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2ef440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef444: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2ef444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef448: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2ef448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ef44c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2ef44cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ef450: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2ef450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ef454: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2EF454u;
    {
        const bool branch_taken_0x2ef454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF454u;
        // 0x2ef458: 0xc7b40054  lwc1        $f20, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef454) {
            ctx->pc = 0x2EF518u;
            goto label_2ef518;
        }
    }
    ctx->pc = 0x2EF45Cu;
label_2ef45c:
    // 0x2ef45c: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2ef45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef460: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ef460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef464: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ef464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ef468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef46c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ef46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef470: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EF470u;
    SET_GPR_U32(ctx, 31, 0x2EF478u);
    ctx->pc = 0x2EF474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF470u;
    // 0x2ef474: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EF470u, 0x2EF478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF478u;
label_2ef478:
    // 0x2ef478: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ef478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ef47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef480: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x2ef480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ef484: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EF484u;
    SET_GPR_U32(ctx, 31, 0x2EF48Cu);
    ctx->pc = 0x2EF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF484u;
    // 0x2ef488: 0x2647ffff  addiu       $a3, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EF484u, 0x2EF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF48Cu;
label_2ef48c:
    // 0x2ef48c: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x2ef48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef490: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2ef490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ef494: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2ef494u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ef498: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ef498u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ef49c: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ef49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef4a0: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2ef4a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ef4a4: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2ef4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef4a8: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ef4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ef4ac: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2ef4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef4b0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2ef4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef4b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ef4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ef4b8: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2ef4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef4bc: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2ef4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ef4c0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2ef4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ef4c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EF4C4u;
    {
        const bool branch_taken_0x2ef4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4C4u;
        // 0x2ef4c8: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4c4) {
            ctx->pc = 0x2EF514u;
            goto label_2ef514;
        }
    }
    ctx->pc = 0x2EF4CCu;
    // 0x2ef4cc: 0x92220249  lbu         $v0, 0x249($s1)
    ctx->pc = 0x2ef4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ef4d0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ef4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ef4d4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2ef4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ef4d8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ef4d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2ef4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef4e0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ef4e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ef4e4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ef4e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef4e8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EF4E8u;
    {
        const bool branch_taken_0x2ef4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef4e8) {
            ctx->pc = 0x2EF4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF4E8u;
            // 0x2ef4ec: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF518u;
            goto label_2ef518;
        }
    }
    ctx->pc = 0x2EF4F0u;
    // 0x2ef4f0: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x2ef4f0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2ef4f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef4f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef4f8: 0x0  nop
    ctx->pc = 0x2ef4f8u;
    // NOP
    // 0x2ef4fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ef4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef500: 0x0  nop
    ctx->pc = 0x2ef500u;
    // NOP
    // 0x2ef504: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF504u;
    {
        const bool branch_taken_0x2ef504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef504) {
            ctx->pc = 0x2EF508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF504u;
            // 0x2ef508: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF518u;
            goto label_2ef518;
        }
    }
    ctx->pc = 0x2EF50Cu;
    // 0x2ef50c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF50Cu;
    {
        const bool branch_taken_0x2ef50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF50Cu;
        // 0x2ef510: 0x8fa60118  lw          $a2, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef50c) {
            ctx->pc = 0x2EF51Cu;
            goto label_2ef51c;
        }
    }
    ctx->pc = 0x2EF514u;
label_2ef514:
    // 0x2ef514: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2ef514u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_2ef518:
    // 0x2ef518: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2ef518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ef51c:
    // 0x2ef51c: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF51Cu;
    {
        const bool branch_taken_0x2ef51c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef51c) {
            ctx->pc = 0x2EF520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF51Cu;
            // 0x2ef520: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF560u;
            goto label_2ef560;
        }
    }
    ctx->pc = 0x2EF524u;
    // 0x2ef524: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ef524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ef528: 0x8fa70124  lw          $a3, 0x124($sp)
    ctx->pc = 0x2ef528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2ef52c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ef52cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef530: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x2ef530u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ef534: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ef534u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ef538: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ef538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef53c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2ef53cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ef540: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ef540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ef544: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2ef544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef548: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2ef548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef54c: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2ef54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef550: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2ef550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ef554: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2ef554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ef558: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2ef558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ef55c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ef55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ef560:
    // 0x2ef560: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2ef560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ef564: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x2EF564u;
    SET_GPR_U32(ctx, 31, 0x2EF56Cu);
    ctx->pc = 0x2EF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF564u;
    // 0x2ef568: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x2EF564u, 0x2EF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF56Cu;
label_2ef56c:
    // 0x2ef56c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ef56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ef570: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x2EF570u;
    SET_GPR_U32(ctx, 31, 0x2EF578u);
    ctx->pc = 0x2EF574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF570u;
    // 0x2ef574: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x2EF570u, 0x2EF578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF578u;
label_2ef578:
    // 0x2ef578: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ef578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ef57c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ef57cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ef580: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2EF580u;
    SET_GPR_U32(ctx, 31, 0x2EF588u);
    ctx->pc = 0x2EF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF580u;
    // 0x2ef584: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2EF580u, 0x2EF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF588u;
label_2ef588:
    // 0x2ef588: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ef588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef58c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ef58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef590: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ef590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef594: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2ef594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ef598: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2ef598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ef59c: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2ef59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ef5a0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2ef5a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ef5a4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2ef5a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2ef5a8: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2ef5a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2ef5ac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ef5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ef5b0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ef5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ef5b4: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ef5b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2ef5b8:
    // 0x2ef5b8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ef5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ef5bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ef5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef5c0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EF5C0u;
    SET_GPR_U32(ctx, 31, 0x2EF5C8u);
    ctx->pc = 0x2EF5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF5C0u;
    // 0x2ef5c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EF5C0u, 0x2EF5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF5C8u;
label_2ef5c8:
    // 0x2ef5c8: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ef5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ef5cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ef5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef5d0: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2EF5D0u;
    SET_GPR_U32(ctx, 31, 0x2EF5D8u);
    ctx->pc = 0x2EF5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF5D0u;
    // 0x2ef5d4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2EF5D0u, 0x2EF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF5D8u;
label_2ef5d8:
    // 0x2ef5d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef5dc: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2EF5DCu;
    SET_GPR_U32(ctx, 31, 0x2EF5E4u);
    ctx->pc = 0x2EF5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF5DCu;
    // 0x2ef5e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2EF5DCu, 0x2EF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF5E4u;
label_2ef5e4:
    // 0x2ef5e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ef5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ef5e8: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EF5E8u;
    {
        const bool branch_taken_0x2ef5e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2EF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5E8u;
        // 0x2ef5ec: 0x3c0a003c  lui         $t2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5e8) {
            ctx->pc = 0x2EF668u;
            goto label_2ef668;
        }
    }
    ctx->pc = 0x2EF5F0u;
    // 0x2ef5f0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ef5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef5f4: 0x8d461180  lw          $a2, 0x1180($t2)
    ctx->pc = 0x2ef5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4480)));
    // 0x2ef5f8: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2ef5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ef5fc: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ef5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2ef600: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2ef600u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2ef604: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2ef604u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2ef608: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ef608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ef60c: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2ef60cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ef610: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2ef610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ef614: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2ef614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef618: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EF618u;
    {
        const bool branch_taken_0x2ef618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF618u;
        // 0x2ef61c: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef618) {
            ctx->pc = 0x2EF668u;
            goto label_2ef668;
        }
    }
    ctx->pc = 0x2EF620u;
    // 0x2ef620: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2ef620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ef624: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2ef624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2ef628: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ef628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ef62c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EF62Cu;
    {
        const bool branch_taken_0x2ef62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef62c) {
            ctx->pc = 0x2EF630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF62Cu;
            // 0x2ef630: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF66Cu;
            goto label_2ef66c;
        }
    }
    ctx->pc = 0x2EF634u;
    // 0x2ef634: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x2ef634u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
    // 0x2ef638: 0x8d456b80  lw          $a1, 0x6B80($t2)
    ctx->pc = 0x2ef638u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x2ef63c: 0x24a2fc00  addiu       $v0, $a1, -0x400
    ctx->pc = 0x2ef63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x2ef640: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ef640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef644: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF644u;
    {
        const bool branch_taken_0x2ef644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef644) {
            ctx->pc = 0x2EF648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF644u;
            // 0x2ef648: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF66Cu;
            goto label_2ef66c;
        }
    }
    ctx->pc = 0x2EF64Cu;
    // 0x2ef64c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ef64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ef650: 0x8c62118c  lw          $v0, 0x118C($v1)
    ctx->pc = 0x2ef650u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2ef654: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2ef654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ef658: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2ef658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2ef65c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2ef65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ef660: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF660u;
    {
        const bool branch_taken_0x2ef660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF660u;
        // 0x2ef664: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef660) {
            ctx->pc = 0x2EF670u;
            goto label_2ef670;
        }
    }
    ctx->pc = 0x2EF668u;
label_2ef668:
    // 0x2ef668: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x2ef668u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_2ef66c:
    // 0x2ef66c: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ef66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2ef670:
    // 0x2ef670: 0x32050007  andi        $a1, $s0, 0x7
    ctx->pc = 0x2ef670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2ef674: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ef674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ef678: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ef678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef67c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ef67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ef680: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2ef680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2ef684: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ef684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ef688: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ef688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef68c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ef68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ef690: 0xfe630020  sd          $v1, 0x20($s3)
    ctx->pc = 0x2ef690u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 3));
    // 0x2ef694: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF694u;
    {
        const bool branch_taken_0x2ef694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF694u;
        // 0x2ef698: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef694) {
            ctx->pc = 0x2EF6A0u;
            goto label_2ef6a0;
        }
    }
    ctx->pc = 0x2EF69Cu;
    // 0x2ef69c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ef69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ef6a0:
    // 0x2ef6a0: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x2ef6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
    // 0x2ef6a4: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x2ef6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ef6a8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2ef6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2ef6ac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2ef6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2ef6b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF6B0u;
    {
        const bool branch_taken_0x2ef6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6B0u;
        // 0x2ef6b4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6b0) {
            ctx->pc = 0x2EF6D4u;
            goto label_2ef6d4;
        }
    }
    ctx->pc = 0x2EF6B8u;
    // 0x2ef6b8: 0x8e2502c0  lw          $a1, 0x2C0($s1)
    ctx->pc = 0x2ef6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2ef6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ef6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6c4: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EF6C4u;
    SET_GPR_U32(ctx, 31, 0x2EF6CCu);
    ctx->pc = 0x2EF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6C4u;
    // 0x2ef6c8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EF6C4u, 0x2EF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6CCu;
label_2ef6cc:
    // 0x2ef6cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EF6CCu;
    {
        const bool branch_taken_0x2ef6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6CCu;
        // 0x2ef6d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6cc) {
            ctx->pc = 0x2EF71Cu;
            goto label_2ef71c;
        }
    }
    ctx->pc = 0x2EF6D4u;
label_2ef6d4:
    // 0x2ef6d4: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x2ef6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ef6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ef6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6e0: 0xc0bb7a8  jal         func_2EDEA0
    ctx->pc = 0x2EF6E0u;
    SET_GPR_U32(ctx, 31, 0x2EF6E8u);
    ctx->pc = 0x2EF6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6E0u;
    // 0x2ef6e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA0u, 0x2EF6E0u, 0x2EF6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6E8u;
label_2ef6e8:
    // 0x2ef6e8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ef6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef6ec: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ef6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef6f0: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ef6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef6f4: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2ef6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ef6f8: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2ef6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ef6fc: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2ef6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ef700: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ef700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ef704: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2ef704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2ef708: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2ef708u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2ef70c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ef70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ef710: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ef710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ef714: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ef714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ef718: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ef718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ef71c:
    // 0x2ef71c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ef71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef720: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EF720u;
    SET_GPR_U32(ctx, 31, 0x2EF728u);
    ctx->pc = 0x2EF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF720u;
    // 0x2ef724: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EF720u, 0x2EF728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF728u;
label_2ef728:
    // 0x2ef728: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ef728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ef72c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ef72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef730: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2EF730u;
    SET_GPR_U32(ctx, 31, 0x2EF738u);
    ctx->pc = 0x2EF734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF730u;
    // 0x2ef734: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2EF730u, 0x2EF738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF738u;
label_2ef738:
    // 0x2ef738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef73c: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2EF73Cu;
    SET_GPR_U32(ctx, 31, 0x2EF744u);
    ctx->pc = 0x2EF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF73Cu;
    // 0x2ef740: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2EF73Cu, 0x2EF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF744u;
label_2ef744:
    // 0x2ef744: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ef744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ef748: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EF748u;
    {
        const bool branch_taken_0x2ef748 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2EF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF748u;
        // 0x2ef74c: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef748) {
            ctx->pc = 0x2EF7C8u;
            goto label_2ef7c8;
        }
    }
    ctx->pc = 0x2EF750u;
    // 0x2ef750: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ef750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ef754: 0x8c461180  lw          $a2, 0x1180($v0)
    ctx->pc = 0x2ef754u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ef758: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2ef758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ef75c: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ef75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2ef760: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2ef760u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2ef764: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2ef764u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2ef768: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ef768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ef76c: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2ef76cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ef770: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2ef770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ef774: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2ef774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef778: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EF778u;
    {
        const bool branch_taken_0x2ef778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF778u;
        // 0x2ef77c: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef778) {
            ctx->pc = 0x2EF7C8u;
            goto label_2ef7c8;
        }
    }
    ctx->pc = 0x2EF780u;
    // 0x2ef780: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2ef780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ef784: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2ef784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2ef788: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ef788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ef78c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EF78Cu;
    {
        const bool branch_taken_0x2ef78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef78c) {
            ctx->pc = 0x2EF790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF78Cu;
            // 0x2ef790: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF7CCu;
            goto label_2ef7cc;
        }
    }
    ctx->pc = 0x2EF794u;
    // 0x2ef794: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x2ef794u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
    // 0x2ef798: 0x8d456b80  lw          $a1, 0x6B80($t2)
    ctx->pc = 0x2ef798u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x2ef79c: 0x24a2fc00  addiu       $v0, $a1, -0x400
    ctx->pc = 0x2ef79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x2ef7a0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ef7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef7a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF7A4u;
    {
        const bool branch_taken_0x2ef7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef7a4) {
            ctx->pc = 0x2EF7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF7A4u;
            // 0x2ef7a8: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF7CCu;
            goto label_2ef7cc;
        }
    }
    ctx->pc = 0x2EF7ACu;
    // 0x2ef7ac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ef7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ef7b0: 0x8c62118c  lw          $v0, 0x118C($v1)
    ctx->pc = 0x2ef7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2ef7b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2ef7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ef7b8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2ef7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2ef7bc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2ef7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ef7c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF7C0u;
    {
        const bool branch_taken_0x2ef7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7C0u;
        // 0x2ef7c4: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7c0) {
            ctx->pc = 0x2EF7D0u;
            goto label_2ef7d0;
        }
    }
    ctx->pc = 0x2EF7C8u;
label_2ef7c8:
    // 0x2ef7c8: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x2ef7c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_2ef7cc:
    // 0x2ef7cc: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ef7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2ef7d0:
    // 0x2ef7d0: 0x32050007  andi        $a1, $s0, 0x7
    ctx->pc = 0x2ef7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2ef7d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ef7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ef7d8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ef7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef7dc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ef7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ef7e0: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2ef7e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2ef7e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ef7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ef7e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ef7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef7ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ef7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ef7f0: 0xfe630040  sd          $v1, 0x40($s3)
    ctx->pc = 0x2ef7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 3));
    // 0x2ef7f4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF7F4u;
    {
        const bool branch_taken_0x2ef7f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7F4u;
        // 0x2ef7f8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7f4) {
            ctx->pc = 0x2EF800u;
            goto label_2ef800;
        }
    }
    ctx->pc = 0x2EF7FCu;
    // 0x2ef7fc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ef7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ef800:
    // 0x2ef800: 0xfe620048  sd          $v0, 0x48($s3)
    ctx->pc = 0x2ef800u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 72), GPR_U64(ctx, 2));
    // 0x2ef804: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ef804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ef808: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ef808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2ef80c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ef80cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ef810: 0x307000fe  andi        $s0, $v1, 0xFE
    ctx->pc = 0x2ef810u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x2ef814: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ef814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef818: 0x1440fee9  bnez        $v0, . + 4 + (-0x117 << 2)
    ctx->pc = 0x2EF818u;
    {
        const bool branch_taken_0x2ef818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF818u;
        // 0x2ef81c: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef818) {
            ctx->pc = 0x2EF3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef3c0;
        }
    }
    ctx->pc = 0x2EF820u;
label_2ef820:
    // 0x2ef820: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ef820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ef824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ef824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ef828: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2EF828u;
    {
        const bool branch_taken_0x2ef828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF828u;
        // 0x2ef82c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef828) {
            ctx->pc = 0x2EF9B0u;
            goto label_2ef9b0;
        }
    }
    ctx->pc = 0x2EF830u;
    // 0x2ef830: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x2ef830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2ef834: 0x246274a0  addiu       $v0, $v1, 0x74A0
    ctx->pc = 0x2ef834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2ef838: 0x27a600fc  addiu       $a2, $sp, 0xFC
    ctx->pc = 0x2ef838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2ef83c: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x2ef83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2ef840: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2ef840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2ef844: 0x24634128  addiu       $v1, $v1, 0x4128
    ctx->pc = 0x2ef844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16680));
    // 0x2ef848: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2ef848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2ef84c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2ef84cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ef850: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x2ef850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2ef854: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2ef854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2ef858: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2ef858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ef85c: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2EF85Cu;
    SET_GPR_U32(ctx, 31, 0x2EF864u);
    ctx->pc = 0x2EF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF85Cu;
    // 0x2ef860: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2EF85Cu, 0x2EF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF864u;
label_2ef864:
    // 0x2ef864: 0x92240245  lbu         $a0, 0x245($s1)
    ctx->pc = 0x2ef864u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x2ef868: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2ef868u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2ef86c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ef86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ef870: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EF870u;
    {
        const bool branch_taken_0x2ef870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef870) {
            ctx->pc = 0x2EF874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF870u;
            // 0x2ef874: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF878u;
            goto label_2ef878;
        }
    }
    ctx->pc = 0x2EF878u;
label_2ef878:
    // 0x2ef878: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2ef878u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ef87c: 0x92250246  lbu         $a1, 0x246($s1)
    ctx->pc = 0x2ef87cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x2ef880: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x2ef880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2ef884: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2ef884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ef888: 0x0  nop
    ctx->pc = 0x2ef888u;
    // NOP
    // 0x2ef88c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2ef88cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2ef890: 0x82220244  lb          $v0, 0x244($s1)
    ctx->pc = 0x2ef890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x2ef894: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2ef894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ef898: 0x0  nop
    ctx->pc = 0x2ef898u;
    // NOP
    // 0x2ef89c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2ef89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2ef8a0: 0x8e28011c  lw          $t0, 0x11C($s1)
    ctx->pc = 0x2ef8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ef8a4: 0xc62202d8  lwc1        $f2, 0x2D8($s1)
    ctx->pc = 0x2ef8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef8a8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2ef8a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2ef8ac: 0x3812  mflo        $a3
    ctx->pc = 0x2ef8acu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2ef8b0: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2ef8b0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ef8b4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ef8b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef8b8: 0x0  nop
    ctx->pc = 0x2ef8b8u;
    // NOP
    // 0x2ef8bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ef8bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ef8c0: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x2ef8c0u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2ef8c4: 0x2812  mflo        $a1
    ctx->pc = 0x2ef8c4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2ef8c8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2ef8c8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ef8cc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ef8ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef8d0: 0x0  nop
    ctx->pc = 0x2ef8d0u;
    // NOP
    // 0x2ef8d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef8d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ef8d8: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x2ef8d8u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2ef8dc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ef8dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ef8e0: 0x1810  mfhi        $v1
    ctx->pc = 0x2ef8e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ef8e4: 0x1012  mflo        $v0
    ctx->pc = 0x2ef8e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2ef8e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef8ec: 0x0  nop
    ctx->pc = 0x2ef8ecu;
    // NOP
    // 0x2ef8f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ef8f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ef8f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef8f8: 0x0  nop
    ctx->pc = 0x2ef8f8u;
    // NOP
    // 0x2ef8fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef8fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ef900: 0x46040142  mul.s       $f5, $f0, $f4
    ctx->pc = 0x2ef900u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2ef904: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF904u;
    {
        const bool branch_taken_0x2ef904 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF904u;
        // 0x2ef908: 0x46030802  mul.s       $f0, $f1, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef904) {
            ctx->pc = 0x2EF914u;
            goto label_2ef914;
        }
    }
    ctx->pc = 0x2EF90Cu;
    // 0x2ef90c: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x2ef90cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2ef910: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2ef910u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_2ef914:
    // 0x2ef914: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ef914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ef918: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2ef918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2ef91c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF91Cu;
    {
        const bool branch_taken_0x2ef91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF91Cu;
        // 0x2ef920: 0x82220249  lb          $v0, 0x249($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef91c) {
            ctx->pc = 0x2EF92Cu;
            goto label_2ef92c;
        }
    }
    ctx->pc = 0x2EF924u;
    // 0x2ef924: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ef924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ef928: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2ef928u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2ef92c:
    // 0x2ef92c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EF92Cu;
    {
        const bool branch_taken_0x2ef92c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2EF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF92Cu;
        // 0x2ef930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef92c) {
            ctx->pc = 0x2EF9B0u;
            goto label_2ef9b0;
        }
    }
    ctx->pc = 0x2EF934u;
    // 0x2ef934: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x2ef934u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ef938: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ef938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef93c: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2ef93cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2ef940: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x2ef940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef944: 0x0  nop
    ctx->pc = 0x2ef944u;
    // NOP
label_2ef948:
    // 0x2ef948: 0xe46500a0  swc1        $f5, 0xA0($v1)
    ctx->pc = 0x2ef948u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2ef94c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ef94cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef950: 0x0  nop
    ctx->pc = 0x2ef950u;
    // NOP
    // 0x2ef954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ef954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ef958: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ef958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ef95c: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ef95cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ef960: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2ef960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ef964: 0xc62202d4  lwc1        $f2, 0x2D4($s1)
    ctx->pc = 0x2ef964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef968: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ef968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ef96c: 0xfc6500a8  sd          $a1, 0xA8($v1)
    ctx->pc = 0x2ef96cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 5));
    // 0x2ef970: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef974: 0x0  nop
    ctx->pc = 0x2ef974u;
    // NOP
    // 0x2ef978: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ef97c: 0xe46400c0  swc1        $f4, 0xC0($v1)
    ctx->pc = 0x2ef97cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2ef980: 0xfc6500c8  sd          $a1, 0xC8($v1)
    ctx->pc = 0x2ef980u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 5));
    // 0x2ef984: 0x0  nop
    ctx->pc = 0x2ef984u;
    // NOP
    // 0x2ef988: 0x0  nop
    ctx->pc = 0x2ef988u;
    // NOP
    // 0x2ef98c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ef98cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ef990: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ef990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ef994: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2ef994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2ef998: 0xe46000c4  swc1        $f0, 0xC4($v1)
    ctx->pc = 0x2ef998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x2ef99c: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2ef99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2ef9a0: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ef9a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ef9a4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ef9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef9a8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2EF9A8u;
    {
        const bool branch_taken_0x2ef9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9A8u;
        // 0x2ef9ac: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef9a8) {
            ctx->pc = 0x2EF948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef948;
        }
    }
    ctx->pc = 0x2EF9B0u;
label_2ef9b0:
    // 0x2ef9b0: 0x82280249  lb          $t0, 0x249($s1)
    ctx->pc = 0x2ef9b0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ef9b4: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x2ef9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x2ef9b8: 0x344200f8  ori         $v0, $v0, 0xF8
    ctx->pc = 0x2ef9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)248);
    // 0x2ef9bc: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2ef9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ef9c0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ef9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ef9c4: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x2ef9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2ef9c8: 0x240b0070  addiu       $t3, $zero, 0x70
    ctx->pc = 0x2ef9c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2ef9cc: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x2ef9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x2ef9d0: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x2ef9d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ef9d4: 0x3c84021  addu        $t0, $fp, $t0
    ctx->pc = 0x2ef9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x2ef9d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9dc: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x2ef9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x2ef9e0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2ef9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ef9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ef9e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ef9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9ec: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x2ef9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2ef9f0: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x2ef9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x2ef9f4: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ef9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ef9f8: 0xfd0a0018  sd          $t2, 0x18($t0)
    ctx->pc = 0x2ef9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 10));
    // 0x2ef9fc: 0x123482a  slt         $t1, $t1, $v1
    ctx->pc = 0x2ef9fcu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2efa00: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2efa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2efa04: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x2efa04u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2efa08: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2efa08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2efa0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efa10: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x2efa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x2efa14: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2EFA14u;
    SET_GPR_U32(ctx, 31, 0x2EFA1Cu);
    ctx->pc = 0x2EFA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA14u;
    // 0x2efa18: 0xfd020010  sd          $v0, 0x10($t0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2EFA14u, 0x2EFA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA1Cu;
label_2efa1c:
    // 0x2efa1c: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x2efa1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2efa20:
    // 0x2efa20: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x2efa20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2efa24: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x2efa24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2efa28: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x2efa28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2efa2c: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x2efa2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2efa30: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x2efa30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2efa34: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x2efa34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2efa38: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x2efa38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2efa3c: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x2efa3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2efa40: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2efa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2efa44: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x2efa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2efa48: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x2efa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2efa4c: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x2efa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2efa50: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA50u;
        // 0x2efa54: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFA58u;
    // 0x2efa58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2efa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2efa5c: 0x0  nop
    ctx->pc = 0x2efa5cu;
    // NOP
    ctx->pc = 0x2efa60u;
}
