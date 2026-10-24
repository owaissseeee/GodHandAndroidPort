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

// Function: func_0032A1B0
// Address: 0x32a1b0 - 0x32a4a8
void func_0032A1B0_0x32a1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A1B0_0x32a1b0");
#endif

    switch (ctx->pc) {
        case 0x32a200u: goto label_32a200;
        case 0x32a21cu: goto label_32a21c;
        case 0x32a290u: goto label_32a290;
        case 0x32a33cu: goto label_32a33c;
        case 0x32a344u: goto label_32a344;
        case 0x32a3dcu: goto label_32a3dc;
        case 0x32a3e8u: goto label_32a3e8;
        case 0x32a3f4u: goto label_32a3f4;
        default: break;
    }

    ctx->pc = 0x32a1b0u;

label_32a1b0:
    // 0x32a1b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32a1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32a1b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x32a1b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32a1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32a1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x32a1c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32a1c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1c4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x32a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x32a1c8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x32a1c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32a1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x32a1d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x32a1d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x32a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x32a1d8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x32a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x32a1dc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A1DCu;
    {
        const bool branch_taken_0x32a1dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1DCu;
        // 0x32a1e0: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a1dc) {
            ctx->pc = 0x32A1F4u;
            goto label_32a1f4;
        }
    }
    ctx->pc = 0x32A1E4u;
    // 0x32a1e4: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A1E4u;
    {
        const bool branch_taken_0x32a1e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1e4) {
            ctx->pc = 0x32A1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A1E4u;
            // 0x32a1e8: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A1F8u;
            goto label_32a1f8;
        }
    }
    ctx->pc = 0x32A1ECu;
    // 0x32a1ec: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A1ECu;
    {
        const bool branch_taken_0x32a1ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1ECu;
        // 0x32a1f0: 0x3c10003d  lui         $s0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a1ec) {
            ctx->pc = 0x32A208u;
            goto label_32a208;
        }
    }
    ctx->pc = 0x32A1F4u;
label_32a1f4:
    // 0x32a1f4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32a1f8:
    // 0x32a1f8: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32A1F8u;
    SET_GPR_U32(ctx, 31, 0x32A200u);
    ctx->pc = 0x32A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1F8u;
    // 0x32a1fc: 0x248420b0  addiu       $a0, $a0, 0x20B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A1F8u, 0x32A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A200u;
label_32a200:
    // 0x32a200: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x32A200u;
    {
        const bool branch_taken_0x32a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A200u;
        // 0x32a204: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a200) {
            ctx->pc = 0x32A480u;
            goto label_32a480;
        }
    }
    ctx->pc = 0x32A208u;
label_32a208:
    // 0x32a208: 0x8e021408  lw          $v0, 0x1408($s0)
    ctx->pc = 0x32a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x32a20c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A20Cu;
    {
        const bool branch_taken_0x32a20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A20Cu;
        // 0x32a210: 0x3c11003d  lui         $s1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a20c) {
            ctx->pc = 0x32A228u;
            goto label_32a228;
        }
    }
    ctx->pc = 0x32A214u;
    // 0x32a214: 0xc0ca806  jal         func_32A018
    ctx->pc = 0x32A214u;
    SET_GPR_U32(ctx, 31, 0x32A21Cu);
    ctx->pc = 0x32A018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A018u, 0x32A214u, 0x32A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A21Cu;
label_32a21c:
    // 0x32a21c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x32A21Cu;
    {
        const bool branch_taken_0x32a21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A21Cu;
        // 0x32a220: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a21c) {
            ctx->pc = 0x32A480u;
            goto label_32a480;
        }
    }
    ctx->pc = 0x32A224u;
    // 0x32a224: 0x0  nop
    ctx->pc = 0x32a224u;
    // NOP
label_32a228:
    // 0x32a228: 0xae201458  sw          $zero, 0x1458($s1)
    ctx->pc = 0x32a228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5208), GPR_U32(ctx, 0));
    // 0x32a22c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x32a22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x32a230: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x32a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x32a234: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x32a234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32a238: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x32A238u;
    {
        const bool branch_taken_0x32a238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A238u;
        // 0x32a23c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a238) {
            ctx->pc = 0x32A3C0u;
            goto label_32a3c0;
        }
    }
    ctx->pc = 0x32A240u;
    // 0x32a240: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x32a240u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x32a244: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x32A244u;
    {
        const bool branch_taken_0x32a244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a244) {
            ctx->pc = 0x32A248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A244u;
            // 0x32a248: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A278u;
            goto label_32a278;
        }
    }
    ctx->pc = 0x32A24Cu;
    // 0x32a24c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x32a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x32a250: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x32a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x32a254: 0x8c437418  lw          $v1, 0x7418($v0)
    ctx->pc = 0x32a254u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C7418u));
    // 0x32a258: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x32a258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x32a25c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x32a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32a260: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x32a260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32a264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a268: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32a268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32a26c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32a270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32a274: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_32a278:
    // 0x32a278: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x32a278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x32a27c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32a27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a280: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x32a280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x32a284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32a284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a288: 0xc0ca806  jal         func_32A018
    ctx->pc = 0x32A288u;
    SET_GPR_U32(ctx, 31, 0x32A290u);
    ctx->pc = 0x32A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A288u;
    // 0x32a28c: 0x3c16003d  lui         $s6, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A018u, 0x32A288u, 0x32A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A290u;
label_32a290:
    // 0x32a290: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x32a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32a294: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32a294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a298: 0x26d41454  addiu       $s4, $s6, 0x1454
    ctx->pc = 0x32a298u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 5204));
    // 0x32a29c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32a29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a2a0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x32a2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x32a2a4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x32a2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32a2a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32a2a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a2ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a2acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a2b0: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x32a2b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32a2b4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x32a2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32a2b8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x32a2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x32a2bc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x32a2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x32a2c0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x32a2c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32a2c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32a2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32a2c8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x32a2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x32a2cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x32a2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x32a2d0: 0x0  nop
    ctx->pc = 0x32a2d0u;
    // NOP
    // 0x32a2d4: 0x0  nop
    ctx->pc = 0x32a2d4u;
    // NOP
    // 0x32a2d8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x32a2d8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x32a2dc: 0x0  nop
    ctx->pc = 0x32a2dcu;
    // NOP
    // 0x32a2e0: 0x0  nop
    ctx->pc = 0x32a2e0u;
    // NOP
    // 0x32a2e4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x32a2e4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x32a2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32a2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32a2ec: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x32a2ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x32a2f0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x32a2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32a2f4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x32A2F4u;
    {
        const bool branch_taken_0x32a2f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2F4u;
        // 0x32a2f8: 0xe6211458  swc1        $f1, 0x1458($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2f4) {
            ctx->pc = 0x32A310u;
            goto label_32a310;
        }
    }
    ctx->pc = 0x32A2FCu;
    // 0x32a2fc: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x32a2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x32a300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32a300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32a304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32a308: 0x45020057  bc1fl       . + 4 + (0x57 << 2)
    ctx->pc = 0x32A308u;
    {
        const bool branch_taken_0x32a308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32a308) {
            ctx->pc = 0x32A30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A308u;
            // 0x32a30c: 0x8e420088  lw          $v0, 0x88($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A468u;
            goto label_32a468;
        }
    }
    ctx->pc = 0x32A310u;
label_32a310:
    // 0x32a310: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32a310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32a314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32a314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a318: 0x8c43142c  lw          $v1, 0x142C($v0)
    ctx->pc = 0x32a318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D142Cu));
    // 0x32a31c: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x32A31Cu;
    {
        const bool branch_taken_0x32a31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x32A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A31Cu;
        // 0x32a320: 0x26101408  addiu       $s0, $s0, 0x1408 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a31c) {
            ctx->pc = 0x32A350u;
            goto label_32a350;
        }
    }
    ctx->pc = 0x32A324u;
    // 0x32a324: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32a324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a328: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x32a328u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32a32c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x32a32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x32a330: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32a330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x32a334: 0xc0ca86c  jal         func_32A1B0
    ctx->pc = 0x32A334u;
    SET_GPR_U32(ctx, 31, 0x32A33Cu);
    ctx->pc = 0x32A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A334u;
    // 0x32a338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A1B0u;
    goto label_32a1b0;
    ctx->pc = 0x32A33Cu;
label_32a33c:
    // 0x32a33c: 0xc0ca852  jal         func_32A148
    ctx->pc = 0x32A33Cu;
    SET_GPR_U32(ctx, 31, 0x32A344u);
    ctx->pc = 0x32A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A33Cu;
    // 0x32a340: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A148u, 0x32A33Cu, 0x32A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A344u;
label_32a344:
    // 0x32a344: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x32a344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32a348: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32a348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a34c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x32a34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32a350:
    // 0x32a350: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x32a350u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32a354: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32a354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a358: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x32a358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x32a35c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32a35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32a360: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32a360u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a368: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x32a368u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32a36c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32a36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32a370: 0x0  nop
    ctx->pc = 0x32a370u;
    // NOP
    // 0x32a374: 0x0  nop
    ctx->pc = 0x32a374u;
    // NOP
    // 0x32a378: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32a378u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x32a37c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x32a37cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x32a380: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x32a380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32a384: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32a384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32a388: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32a388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32a38c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x32A38Cu;
    {
        const bool branch_taken_0x32a38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32a38c) {
            ctx->pc = 0x32A390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A38Cu;
            // 0x32a390: 0xae43009c  sw          $v1, 0x9C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A3ACu;
            goto label_32a3ac;
        }
    }
    ctx->pc = 0x32A394u;
    // 0x32a394: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x32a394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x32a398: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32a398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32a39c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32a39cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32a3a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32a3a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32a3a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32a3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32a3a8: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x32a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_32a3ac:
    // 0x32a3ac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x32a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x32a3b0: 0x8c627418  lw          $v0, 0x7418($v1)
    ctx->pc = 0x32a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C7418u));
    // 0x32a3b4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x32A3B4u;
    {
        const bool branch_taken_0x32a3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3B4u;
        // 0x32a3b8: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3b4) {
            ctx->pc = 0x32A464u;
            goto label_32a464;
        }
    }
    ctx->pc = 0x32A3BCu;
    // 0x32a3bc: 0x0  nop
    ctx->pc = 0x32a3bcu;
    // NOP
label_32a3c0:
    // 0x32a3c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x32a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32a3c4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x32a3c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x32a3c8: 0x54430025  bnel        $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x32A3C8u;
    {
        const bool branch_taken_0x32a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a3c8) {
            ctx->pc = 0x32A3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A3C8u;
            // 0x32a3cc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A460u;
            goto label_32a460;
        }
    }
    ctx->pc = 0x32A3D0u;
    // 0x32a3d0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32a3d4: 0xc0c9dfa  jal         func_3277E8
    ctx->pc = 0x32A3D4u;
    SET_GPR_U32(ctx, 31, 0x32A3DCu);
    ctx->pc = 0x32A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3D4u;
    // 0x32a3d8: 0x3c16003d  lui         $s6, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277E8u, 0x32A3D4u, 0x32A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3DCu;
label_32a3dc:
    // 0x32a3dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32a3e0: 0xc0c9de2  jal         func_327788
    ctx->pc = 0x32A3E0u;
    SET_GPR_U32(ctx, 31, 0x32A3E8u);
    ctx->pc = 0x32A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3E0u;
    // 0x32a3e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327788u, 0x32A3E0u, 0x32A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3E8u;
label_32a3e8:
    // 0x32a3e8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32a3ec: 0xc0c9dee  jal         func_3277B8
    ctx->pc = 0x32A3ECu;
    SET_GPR_U32(ctx, 31, 0x32A3F4u);
    ctx->pc = 0x32A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3ECu;
    // 0x32a3f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277B8u, 0x32A3ECu, 0x32A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3F4u;
label_32a3f4:
    // 0x32a3f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32a3f8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x32a3f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32a3fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32A3FCu;
    {
        const bool branch_taken_0x32a3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3fc) {
            ctx->pc = 0x32A400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A3FCu;
            // 0x32a400: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A404u;
            goto label_32a404;
        }
    }
    ctx->pc = 0x32A404u;
label_32a404:
    // 0x32a404: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a408: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x32a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32a40c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32a40cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32a410: 0xc6c11454  lwc1        $f1, 0x1454($s6)
    ctx->pc = 0x32a410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 5204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32a414: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32a414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a418: 0x1812  mflo        $v1
    ctx->pc = 0x32a418u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x32a41c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x32a41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x32a420: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32a420u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a424: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a428: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x32a428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x32a42c: 0x0  nop
    ctx->pc = 0x32a42cu;
    // NOP
    // 0x32a430: 0x0  nop
    ctx->pc = 0x32a430u;
    // NOP
    // 0x32a434: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x32a434u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x32a438: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32a438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a43c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32a43cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32a440: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32a440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32a444: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x32a444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x32a448: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x32a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x32a44c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32a450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32A454u;
    {
        const bool branch_taken_0x32a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A454u;
        // 0x32a458: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a454) {
            ctx->pc = 0x32A464u;
            goto label_32a464;
        }
    }
    ctx->pc = 0x32A45Cu;
    // 0x32a45c: 0x0  nop
    ctx->pc = 0x32a45cu;
    // NOP
label_32a460:
    // 0x32a460: 0x3c16003d  lui         $s6, 0x3D
    ctx->pc = 0x32a460u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
label_32a464:
    // 0x32a464: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x32a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_32a468:
    // 0x32a468: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x32a468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32a46c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a470: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x32a470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x32a474: 0x8ec21454  lw          $v0, 0x1454($s6)
    ctx->pc = 0x32a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 5204)));
    // 0x32a478: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x32a478u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x32a47c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32a47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32a480:
    // 0x32a480: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32a480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32a484: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32a484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a488: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x32a488u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32a48c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x32a48cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32a490: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x32a490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32a494: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x32a494u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32a498: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x32a498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32a49c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A49Cu;
        // 0x32a4a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A4A4u;
    // 0x32a4a4: 0x0  nop
    ctx->pc = 0x32a4a4u;
    // NOP
    ctx->pc = 0x32a4a8u;
}
