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

// Function: func_0025F1F0
// Address: 0x25f1f0 - 0x25fa18
void func_0025F1F0_0x25f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025F1F0_0x25f1f0");
#endif

    switch (ctx->pc) {
        case 0x25f234u: goto label_25f234;
        case 0x25f2acu: goto label_25f2ac;
        case 0x25f2bcu: goto label_25f2bc;
        case 0x25f2c4u: goto label_25f2c4;
        case 0x25f3f4u: goto label_25f3f4;
        case 0x25f404u: goto label_25f404;
        case 0x25f424u: goto label_25f424;
        case 0x25f44cu: goto label_25f44c;
        case 0x25f454u: goto label_25f454;
        case 0x25f4acu: goto label_25f4ac;
        case 0x25f4d4u: goto label_25f4d4;
        case 0x25f4f4u: goto label_25f4f4;
        case 0x25f4fcu: goto label_25f4fc;
        case 0x25f510u: goto label_25f510;
        case 0x25f538u: goto label_25f538;
        case 0x25f57cu: goto label_25f57c;
        case 0x25f698u: goto label_25f698;
        case 0x25f6a4u: goto label_25f6a4;
        case 0x25f6c8u: goto label_25f6c8;
        case 0x25f70cu: goto label_25f70c;
        case 0x25f718u: goto label_25f718;
        case 0x25f73cu: goto label_25f73c;
        case 0x25f87cu: goto label_25f87c;
        case 0x25f8a4u: goto label_25f8a4;
        case 0x25f8acu: goto label_25f8ac;
        case 0x25f8ccu: goto label_25f8cc;
        case 0x25f8d4u: goto label_25f8d4;
        case 0x25f8e4u: goto label_25f8e4;
        case 0x25f8f0u: goto label_25f8f0;
        case 0x25f910u: goto label_25f910;
        case 0x25f938u: goto label_25f938;
        case 0x25f940u: goto label_25f940;
        case 0x25f964u: goto label_25f964;
        case 0x25f96cu: goto label_25f96c;
        case 0x25f9e0u: goto label_25f9e0;
        case 0x25fa04u: goto label_25fa04;
        default: break;
    }

    ctx->pc = 0x25f1f0u;

    // 0x25f1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f1f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x25f1f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f1fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25f200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f208: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x25f208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x25f20c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25f210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f214: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25f214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x25f218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25f218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f21c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x25f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x25f220: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25f220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x25f224: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x25f224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x25f228: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x25f228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x25f22c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x25F22Cu;
    SET_GPR_U32(ctx, 31, 0x25F234u);
    ctx->pc = 0x25F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F22Cu;
    // 0x25f230: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25F22Cu, 0x25F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F234u;
label_25f234:
    // 0x25f234: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x25f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x25f238: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x25f238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x25f23c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x25f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x25f240: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25f240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f244: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25f244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x25f248: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x25f248u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25f24c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x25f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x25f250: 0xae2316d0  sw          $v1, 0x16D0($s1)
    ctx->pc = 0x25f250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 3));
    // 0x25f254: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x25f254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x25f258: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F258u;
    {
        const bool branch_taken_0x25f258 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F258u;
        // 0x25f25c: 0xa2260617  sb          $a2, 0x617($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f258) {
            ctx->pc = 0x25F274u;
            goto label_25f274;
        }
    }
    ctx->pc = 0x25F260u;
    // 0x25f260: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f264: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x25f264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x25f268: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25F268u;
    {
        const bool branch_taken_0x25f268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F268u;
        // 0x25f26c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f268) {
            ctx->pc = 0x25F274u;
            goto label_25f274;
        }
    }
    ctx->pc = 0x25F270u;
    // 0x25f270: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25f270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25f274:
    // 0x25f274: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25f278: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x25f278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x25f27c: 0x104001c0  beqz        $v0, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x25F27Cu;
    {
        const bool branch_taken_0x25f27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F27Cu;
        // 0x25f280: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f27c) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F284u;
    // 0x25f284: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f288: 0x24423e80  addiu       $v0, $v0, 0x3E80
    ctx->pc = 0x25f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
    // 0x25f28c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f290: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f294: 0x800008  jr          $a0
    ctx->pc = 0x25F294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F29Cu: goto label_25f29c;
            case 0x25F58Cu: goto label_25f58c;
            case 0x25F7DCu: goto label_25f7dc;
            case 0x25F82Cu: goto label_25f82c;
            case 0x25F900u: goto label_25f900;
            case 0x25F980u: goto label_25f980;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F294u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25F29Cu;
label_25f29c:
    // 0x25f29c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f2a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f2a4: 0xc0c1880  jal         func_306200
    ctx->pc = 0x25F2A4u;
    SET_GPR_U32(ctx, 31, 0x25F2ACu);
    ctx->pc = 0x25F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2A4u;
    // 0x25f2a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x25F2A4u, 0x25F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2ACu;
label_25f2ac:
    // 0x25f2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f2b0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x25f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25f2b4: 0xc0c1880  jal         func_306200
    ctx->pc = 0x25F2B4u;
    SET_GPR_U32(ctx, 31, 0x25F2BCu);
    ctx->pc = 0x25F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2B4u;
    // 0x25f2b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x25F2B4u, 0x25F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2BCu;
label_25f2bc:
    // 0x25f2bc: 0xc0aa1c6  jal         func_2A8718
    ctx->pc = 0x25F2BCu;
    SET_GPR_U32(ctx, 31, 0x25F2C4u);
    ctx->pc = 0x25F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2BCu;
    // 0x25f2c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8718u, 0x25F2BCu, 0x25F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2C4u;
label_25f2c4:
    // 0x25f2c4: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f2c8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x25f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x25f2cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F2CCu;
    {
        const bool branch_taken_0x25f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2CCu;
        // 0x25f2d0: 0xa620054a  sh          $zero, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2cc) {
            ctx->pc = 0x25F2F4u;
            goto label_25f2f4;
        }
    }
    ctx->pc = 0x25F2D4u;
    // 0x25f2d4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x25f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x25f2d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x25f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x25f2dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25f2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25f2e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f2e4: 0x3463ffef  ori         $v1, $v1, 0xFFEF
    ctx->pc = 0x25f2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65519);
    // 0x25f2e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f2ec: 0xe620024c  swc1        $f0, 0x24C($s1)
    ctx->pc = 0x25f2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x25f2f0: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x25f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_25f2f4:
    // 0x25f2f4: 0xc6200770  lwc1        $f0, 0x770($s1)
    ctx->pc = 0x25f2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f2f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25f2f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f2fc: 0x0  nop
    ctx->pc = 0x25f2fcu;
    // NOP
    // 0x25f300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25f300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f304: 0x0  nop
    ctx->pc = 0x25f304u;
    // NOP
    // 0x25f308: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25F308u;
    {
        const bool branch_taken_0x25f308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F308u;
        // 0x25f30c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f308) {
            ctx->pc = 0x25F320u;
            goto label_25f320;
        }
    }
    ctx->pc = 0x25F310u;
    // 0x25f310: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f314: 0xe6210770  swc1        $f1, 0x770($s1)
    ctx->pc = 0x25f314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1904), bits); }
    // 0x25f318: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25f318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25f31c: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
label_25f320:
    // 0x25f320: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25f320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f324: 0x922402f7  lbu         $a0, 0x2F7($s1)
    ctx->pc = 0x25f324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25f328: 0xa2220531  sb          $v0, 0x531($s1)
    ctx->pc = 0x25f328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f32c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f330: 0xe6210604  swc1        $f1, 0x604($s1)
    ctx->pc = 0x25f330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x25f334: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F334u;
    {
        const bool branch_taken_0x25f334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F334u;
        // 0x25f338: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f334) {
            ctx->pc = 0x25F354u;
            goto label_25f354;
        }
    }
    ctx->pc = 0x25F33Cu;
    // 0x25f33c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25f33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25f340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f344: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x25f344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x25f348: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25f348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f34c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x25f34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x25f350: 0xe6210604  swc1        $f1, 0x604($s1)
    ctx->pc = 0x25f350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_25f354:
    // 0x25f354: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f358: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x25f358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x25f35c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f360: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x25F360u;
    {
        const bool branch_taken_0x25f360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f360) {
            ctx->pc = 0x25F364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F360u;
            // 0x25f364: 0x9622062c  lhu         $v0, 0x62C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F480u;
            goto label_25f480;
        }
    }
    ctx->pc = 0x25F368u;
    // 0x25f368: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x25f368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25f36c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F36Cu;
    {
        const bool branch_taken_0x25f36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f36c) {
            ctx->pc = 0x25F38Cu;
            goto label_25f38c;
        }
    }
    ctx->pc = 0x25F374u;
    // 0x25f374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25f374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25f378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f37c: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x25f37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x25f380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25f380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f384: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F384u;
    {
        const bool branch_taken_0x25f384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F384u;
        // 0x25f388: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f384) {
            ctx->pc = 0x25F3A0u;
            goto label_25f3a0;
        }
    }
    ctx->pc = 0x25F38Cu;
label_25f38c:
    // 0x25f38c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x25f38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x25f390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f394: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x25f394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x25f398: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25f398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f39c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x25f39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_25f3a0:
    // 0x25f3a0: 0xe6210604  swc1        $f1, 0x604($s1)
    ctx->pc = 0x25f3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x25f3a4: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f3a8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x25f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x25f3ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f3b0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x25F3B0u;
    {
        const bool branch_taken_0x25f3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3B0u;
        // 0x25f3b4: 0x24020249  addiu       $v0, $zero, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3b0) {
            ctx->pc = 0x25F47Cu;
            goto label_25f47c;
        }
    }
    ctx->pc = 0x25F3B8u;
    // 0x25f3b8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x25f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x25f3bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F3BCu;
    {
        const bool branch_taken_0x25f3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3BCu;
        // 0x25f3c0: 0x2402024e  addiu       $v0, $zero, 0x24E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3bc) {
            ctx->pc = 0x25F3CCu;
            goto label_25f3cc;
        }
    }
    ctx->pc = 0x25F3C4u;
    // 0x25f3c4: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x25F3C4u;
    {
        const bool branch_taken_0x25f3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f3c4) {
            ctx->pc = 0x25F3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F3C4u;
            // 0x25f3c8: 0x9622062c  lhu         $v0, 0x62C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F480u;
            goto label_25f480;
        }
    }
    ctx->pc = 0x25F3CCu;
label_25f3cc:
    // 0x25f3cc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x25f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x25f3d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25f3d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x25f3d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25f3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25f3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25f3e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3e4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x25f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x25f3e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3ec: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25F3ECu;
    SET_GPR_U32(ctx, 31, 0x25F3F4u);
    ctx->pc = 0x25F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3ECu;
    // 0x25f3f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25F3ECu, 0x25F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3F4u;
label_25f3f4:
    // 0x25f3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3f8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x25f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x25f3fc: 0xc0c1880  jal         func_306200
    ctx->pc = 0x25F3FCu;
    SET_GPR_U32(ctx, 31, 0x25F404u);
    ctx->pc = 0x25F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3FCu;
    // 0x25f400: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x25F3FCu, 0x25F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F404u;
label_25f404:
    // 0x25f404: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25f404u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25f408: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x25f408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x25f40c: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x25f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x25f410: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25f410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25f414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f418: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x25f418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f41c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x25F41Cu;
    SET_GPR_U32(ctx, 31, 0x25F424u);
    ctx->pc = 0x25F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F41Cu;
    // 0x25f420: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x25F41Cu, 0x25F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F424u;
label_25f424:
    // 0x25f424: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x25f424u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x25f428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f42c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x25f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x25f430: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x25f430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x25f434: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x25f434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x25f438: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x25f438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x25f43c: 0xa62303ac  sh          $v1, 0x3AC($s1)
    ctx->pc = 0x25f43cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 3));
    // 0x25f440: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25f440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f444: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x25F444u;
    SET_GPR_U32(ctx, 31, 0x25F44Cu);
    ctx->pc = 0x25F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F444u;
    // 0x25f448: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x25F444u, 0x25F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F44Cu;
label_25f44c:
    // 0x25f44c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x25F44Cu;
    SET_GPR_U32(ctx, 31, 0x25F454u);
    ctx->pc = 0x25F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F44Cu;
    // 0x25f450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x25F44Cu, 0x25F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F454u;
label_25f454:
    // 0x25f454: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25f454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f458: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25f458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25f45c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25f45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f460: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x25f460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x25f464: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25f464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25f468: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x25f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x25f46c: 0xe6210600  swc1        $f1, 0x600($s1)
    ctx->pc = 0x25f46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x25f470: 0xe6220604  swc1        $f2, 0x604($s1)
    ctx->pc = 0x25f470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x25f474: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x25f474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
    // 0x25f478: 0xe6200248  swc1        $f0, 0x248($s1)
    ctx->pc = 0x25f478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
label_25f47c:
    // 0x25f47c: 0x9622062c  lhu         $v0, 0x62C($s1)
    ctx->pc = 0x25f47cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1580)));
label_25f480:
    // 0x25f480: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x25f480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25f484: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x25f484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x25f488: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x25F488u;
    {
        const bool branch_taken_0x25f488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F488u;
        // 0x25f48c: 0xa622062c  sh          $v0, 0x62C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f488) {
            ctx->pc = 0x25F53Cu;
            goto label_25f53c;
        }
    }
    ctx->pc = 0x25F490u;
    // 0x25f490: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f494: 0x3c100010  lui         $s0, 0x10
    ctx->pc = 0x25f494u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16 << 16));
    // 0x25f498: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x25f498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x25f49c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x25F49Cu;
    {
        const bool branch_taken_0x25f49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f49c) {
            ctx->pc = 0x25F4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F49Cu;
            // 0x25f4a0: 0x8e2406f4  lw          $a0, 0x6F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F500u;
            goto label_25f500;
        }
    }
    ctx->pc = 0x25F4A4u;
    // 0x25f4a4: 0xc09cf4c  jal         func_273D30
    ctx->pc = 0x25F4A4u;
    SET_GPR_U32(ctx, 31, 0x25F4ACu);
    ctx->pc = 0x25F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4A4u;
    // 0x25f4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D30u, 0x25F4A4u, 0x25F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4ACu;
label_25f4ac:
    // 0x25f4ac: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x25f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x25f4b0: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x25f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x25f4b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F4B4u;
    {
        const bool branch_taken_0x25f4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f4b4) {
            ctx->pc = 0x25F4CCu;
            goto label_25f4cc;
        }
    }
    ctx->pc = 0x25F4BCu;
    // 0x25f4bc: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f4c0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x25f4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x25f4c4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x25F4C4u;
    {
        const bool branch_taken_0x25f4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f4c4) {
            ctx->pc = 0x25F4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F4C4u;
            // 0x25f4c8: 0x8e2406f4  lw          $a0, 0x6F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F500u;
            goto label_25f500;
        }
    }
    ctx->pc = 0x25F4CCu;
label_25f4cc:
    // 0x25f4cc: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x25F4CCu;
    SET_GPR_U32(ctx, 31, 0x25F4D4u);
    ctx->pc = 0x25F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4CCu;
    // 0x25f4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x25F4CCu, 0x25F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4D4u;
label_25f4d4:
    // 0x25f4d4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25F4D4u;
    {
        const bool branch_taken_0x25f4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f4d4) {
            ctx->pc = 0x25F4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F4D4u;
            // 0x25f4d8: 0x8e2406f4  lw          $a0, 0x6F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F500u;
            goto label_25f500;
        }
    }
    ctx->pc = 0x25F4DCu;
    // 0x25f4dc: 0x96230640  lhu         $v1, 0x640($s1)
    ctx->pc = 0x25f4dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x25f4e0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f4e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F4E4u;
    {
        const bool branch_taken_0x25f4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4E4u;
        // 0x25f4e8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4e4) {
            ctx->pc = 0x25F4FCu;
            goto label_25f4fc;
        }
    }
    ctx->pc = 0x25F4ECu;
    // 0x25f4ec: 0xc07ef90  jal         func_1FBE40
    ctx->pc = 0x25F4ECu;
    SET_GPR_U32(ctx, 31, 0x25F4F4u);
    ctx->pc = 0x25F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4ECu;
    // 0x25f4f0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE40u, 0x25F4ECu, 0x25F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4F4u;
label_25f4f4:
    // 0x25f4f4: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x25F4F4u;
    SET_GPR_U32(ctx, 31, 0x25F4FCu);
    ctx->pc = 0x25F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4F4u;
    // 0x25f4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x25F4F4u, 0x25F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4FCu;
label_25f4fc:
    // 0x25f4fc: 0x8e2406f4  lw          $a0, 0x6F4($s1)
    ctx->pc = 0x25f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
label_25f500:
    // 0x25f500: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F500u;
    {
        const bool branch_taken_0x25f500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f500) {
            ctx->pc = 0x25F504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F500u;
            // 0x25f504: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F518u;
            goto label_25f518;
        }
    }
    ctx->pc = 0x25F508u;
    // 0x25f508: 0xc073d2a  jal         func_1CF4A8
    ctx->pc = 0x25F508u;
    SET_GPR_U32(ctx, 31, 0x25F510u);
    ctx->pc = 0x1CF4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF4A8u, 0x25F508u, 0x25F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F510u;
label_25f510:
    // 0x25f510: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x25f510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
    // 0x25f514: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x25f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_25f518:
    // 0x25f518: 0x3842021f  xori        $v0, $v0, 0x21F
    ctx->pc = 0x25f518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)543);
    // 0x25f51c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25F51Cu;
    {
        const bool branch_taken_0x25f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f51c) {
            ctx->pc = 0x25F520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F51Cu;
            // 0x25f520: 0x96230640  lhu         $v1, 0x640($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F540u;
            goto label_25f540;
        }
    }
    ctx->pc = 0x25F524u;
    // 0x25f524: 0x8e240704  lw          $a0, 0x704($s1)
    ctx->pc = 0x25f524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
    // 0x25f528: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F528u;
    {
        const bool branch_taken_0x25f528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f528) {
            ctx->pc = 0x25F52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F528u;
            // 0x25f52c: 0x96230640  lhu         $v1, 0x640($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F540u;
            goto label_25f540;
        }
    }
    ctx->pc = 0x25F530u;
    // 0x25f530: 0xc073d2a  jal         func_1CF4A8
    ctx->pc = 0x25F530u;
    SET_GPR_U32(ctx, 31, 0x25F538u);
    ctx->pc = 0x1CF4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF4A8u, 0x25F530u, 0x25F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F538u;
label_25f538:
    // 0x25f538: 0xae200704  sw          $zero, 0x704($s1)
    ctx->pc = 0x25f538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1796), GPR_U32(ctx, 0));
label_25f53c:
    // 0x25f53c: 0x96230640  lhu         $v1, 0x640($s1)
    ctx->pc = 0x25f53cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1600)));
label_25f540:
    // 0x25f540: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f544: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25F544u;
    {
        const bool branch_taken_0x25f544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f544) {
            ctx->pc = 0x25F548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F544u;
            // 0x25f548: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F580u;
            goto label_25f580;
        }
    }
    ctx->pc = 0x25F54Cu;
    // 0x25f54c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x25f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x25f550: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x25f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x25f554: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F554u;
    {
        const bool branch_taken_0x25f554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F554u;
        // 0x25f558: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f554) {
            ctx->pc = 0x25F574u;
            goto label_25f574;
        }
    }
    ctx->pc = 0x25F55Cu;
    // 0x25f55c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f560: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x25f560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x25f564: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f568: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F568u;
    {
        const bool branch_taken_0x25f568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f568) {
            ctx->pc = 0x25F56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F568u;
            // 0x25f56c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F580u;
            goto label_25f580;
        }
    }
    ctx->pc = 0x25F570u;
    // 0x25f570: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25f570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_25f574:
    // 0x25f574: 0xc07ef90  jal         func_1FBE40
    ctx->pc = 0x25F574u;
    SET_GPR_U32(ctx, 31, 0x25F57Cu);
    ctx->pc = 0x25F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F574u;
    // 0x25f578: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE40u, 0x25F574u, 0x25F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F57Cu;
label_25f57c:
    // 0x25f57c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25f57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25f580:
    // 0x25f580: 0xae200608  sw          $zero, 0x608($s1)
    ctx->pc = 0x25f580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 0));
    // 0x25f584: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25f588: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25f588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25f58c:
    // 0x25f58c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f590: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x25f590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x25f594: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f598: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F598u;
    {
        const bool branch_taken_0x25f598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f598) {
            ctx->pc = 0x25F59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F598u;
            // 0x25f59c: 0xc6200240  lwc1        $f0, 0x240($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F5B4u;
            goto label_25f5b4;
        }
    }
    ctx->pc = 0x25F5A0u;
    // 0x25f5a0: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x25f5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25f5a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f5a8: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25F5A8u;
    {
        const bool branch_taken_0x25f5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f5a8) {
            ctx->pc = 0x25F5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F5A8u;
            // 0x25f5ac: 0xc6210600  lwc1        $f1, 0x600($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F5ECu;
            goto label_25f5ec;
        }
    }
    ctx->pc = 0x25F5B0u;
    // 0x25f5b0: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x25f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f5b4:
    // 0x25f5b4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25f5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x25f5b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25f5b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25f5bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25f5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f5c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25f5c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25f5c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25f5c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25f5c8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25f5c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f5cc: 0x0  nop
    ctx->pc = 0x25f5ccu;
    // NOP
    // 0x25f5d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25F5D0u;
    {
        const bool branch_taken_0x25f5d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5D0u;
        // 0x25f5d4: 0xe6200240  swc1        $f0, 0x240($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5d0) {
            ctx->pc = 0x25F5DCu;
            goto label_25f5dc;
        }
    }
    ctx->pc = 0x25F5D8u;
    // 0x25f5d8: 0xe6220240  swc1        $f2, 0x240($s1)
    ctx->pc = 0x25f5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
label_25f5dc:
    // 0x25f5dc: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x25f5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f5e0: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x25f5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x25f5e4: 0xe6200248  swc1        $f0, 0x248($s1)
    ctx->pc = 0x25f5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
    // 0x25f5e8: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x25f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f5ec:
    // 0x25f5ec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25f5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25f5f0: 0x0  nop
    ctx->pc = 0x25f5f0u;
    // NOP
    // 0x25f5f4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x25f5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f5f8: 0x0  nop
    ctx->pc = 0x25f5f8u;
    // NOP
    // 0x25f5fc: 0x45020053  bc1fl       . + 4 + (0x53 << 2)
    ctx->pc = 0x25F5FCu;
    {
        const bool branch_taken_0x25f5fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f5fc) {
            ctx->pc = 0x25F600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F5FCu;
            // 0x25f600: 0xc6210604  lwc1        $f1, 0x604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F74Cu;
            goto label_25f74c;
        }
    }
    ctx->pc = 0x25F604u;
    // 0x25f604: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f608: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25f608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25f60c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25f60cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f610: 0x0  nop
    ctx->pc = 0x25f610u;
    // NOP
    // 0x25f614: 0x450000da  bc1f        . + 4 + (0xDA << 2)
    ctx->pc = 0x25F614u;
    {
        const bool branch_taken_0x25f614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F614u;
        // 0x25f618: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f614) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F61Cu;
    // 0x25f61c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f620: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x25f620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x25f624: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f628: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x25F628u;
    {
        const bool branch_taken_0x25f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F628u;
        // 0x25f62c: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f628) {
            ctx->pc = 0x25F6DCu;
            goto label_25f6dc;
        }
    }
    ctx->pc = 0x25F630u;
    // 0x25f630: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x25f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x25f634: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25F634u;
    {
        const bool branch_taken_0x25f634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F634u;
        // 0x25f638: 0x28620224  slti        $v0, $v1, 0x224 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)548) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f634) {
            ctx->pc = 0x25F678u;
            goto label_25f678;
        }
    }
    ctx->pc = 0x25F63Cu;
    // 0x25f63c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F63Cu;
    {
        const bool branch_taken_0x25f63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F63Cu;
        // 0x25f640: 0x2402021f  addiu       $v0, $zero, 0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f63c) {
            ctx->pc = 0x25F654u;
            goto label_25f654;
        }
    }
    ctx->pc = 0x25F644u;
    // 0x25f644: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25F644u;
    {
        const bool branch_taken_0x25f644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f644) {
            ctx->pc = 0x25F648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F644u;
            // 0x25f648: 0x24040077  addiu       $a0, $zero, 0x77 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F6D0u;
            goto label_25f6d0;
        }
    }
    ctx->pc = 0x25F64Cu;
    // 0x25f64c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F64Cu;
    {
        const bool branch_taken_0x25f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f64c) {
            ctx->pc = 0x25F668u;
            goto label_25f668;
        }
    }
    ctx->pc = 0x25F654u;
label_25f654:
    // 0x25f654: 0x24020249  addiu       $v0, $zero, 0x249
    ctx->pc = 0x25f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
    // 0x25f658: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x25F658u;
    {
        const bool branch_taken_0x25f658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F658u;
        // 0x25f65c: 0x2402024e  addiu       $v0, $zero, 0x24E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f658) {
            ctx->pc = 0x25F73Cu;
            goto label_25f73c;
        }
    }
    ctx->pc = 0x25F660u;
    // 0x25f660: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x25F660u;
    {
        const bool branch_taken_0x25f660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f660) {
            ctx->pc = 0x25F73Cu;
            goto label_25f73c;
        }
    }
    ctx->pc = 0x25F668u;
label_25f668:
    // 0x25f668: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25f668u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25f66c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x25f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x25f670: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25F670u;
    {
        const bool branch_taken_0x25f670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F670u;
        // 0x25f674: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f670) {
            ctx->pc = 0x25F684u;
            goto label_25f684;
        }
    }
    ctx->pc = 0x25F678u;
label_25f678:
    // 0x25f678: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25f678u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25f67c: 0x2404007b  addiu       $a0, $zero, 0x7B
    ctx->pc = 0x25f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x25f680: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x25f680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_25f684:
    // 0x25f684: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25f684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25f688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f68c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x25f68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f690: 0xc0c194a  jal         func_306528
    ctx->pc = 0x25F690u;
    SET_GPR_U32(ctx, 31, 0x25F698u);
    ctx->pc = 0x25F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F690u;
    // 0x25f694: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x25F690u, 0x25F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F698u;
label_25f698:
    // 0x25f698: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x25f698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x25f69c: 0xc0a4bc6  jal         func_292F18
    ctx->pc = 0x25F69Cu;
    SET_GPR_U32(ctx, 31, 0x25F6A4u);
    ctx->pc = 0x25F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F69Cu;
    // 0x25f6a0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F18u, 0x25F69Cu, 0x25F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6A4u;
label_25f6a4:
    // 0x25f6a4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x25F6A4u;
    {
        const bool branch_taken_0x25f6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6A4u;
        // 0x25f6a8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6a4) {
            ctx->pc = 0x25F73Cu;
            goto label_25f73c;
        }
    }
    ctx->pc = 0x25F6ACu;
    // 0x25f6ac: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25f6acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25f6b0: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x25f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x25f6b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25f6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25f6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x25f6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f6c0: 0xc0c194a  jal         func_306528
    ctx->pc = 0x25F6C0u;
    SET_GPR_U32(ctx, 31, 0x25F6C8u);
    ctx->pc = 0x25F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6C0u;
    // 0x25f6c4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x25F6C0u, 0x25F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6C8u;
label_25f6c8:
    // 0x25f6c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25F6C8u;
    {
        const bool branch_taken_0x25f6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f6c8) {
            ctx->pc = 0x25F73Cu;
            goto label_25f73c;
        }
    }
    ctx->pc = 0x25F6D0u;
label_25f6d0:
    // 0x25f6d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25f6d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25f6d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25F6D4u;
    {
        const bool branch_taken_0x25f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6D4u;
        // 0x25f6d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6d4) {
            ctx->pc = 0x25F728u;
            goto label_25f728;
        }
    }
    ctx->pc = 0x25F6DCu;
label_25f6dc:
    // 0x25f6dc: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x25f6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25f6e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f6e4: 0x546200a7  bnel        $v1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x25F6E4u;
    {
        const bool branch_taken_0x25f6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f6e4) {
            ctx->pc = 0x25F6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F6E4u;
            // 0x25f6e8: 0xc6210608  lwc1        $f1, 0x608($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F984u;
            goto label_25f984;
        }
    }
    ctx->pc = 0x25F6ECu;
    // 0x25f6ec: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25f6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25f6f0: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x25f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x25f6f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x25f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25f6f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25f6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25f6fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f700: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x25f700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f704: 0xc0c194a  jal         func_306528
    ctx->pc = 0x25F704u;
    SET_GPR_U32(ctx, 31, 0x25F70Cu);
    ctx->pc = 0x25F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F704u;
    // 0x25f708: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x25F704u, 0x25F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F70Cu;
label_25f70c:
    // 0x25f70c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x25f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x25f710: 0xc0a4bc6  jal         func_292F18
    ctx->pc = 0x25F710u;
    SET_GPR_U32(ctx, 31, 0x25F718u);
    ctx->pc = 0x25F714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F710u;
    // 0x25f714: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F18u, 0x25F710u, 0x25F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F718u;
label_25f718:
    // 0x25f718: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25F718u;
    {
        const bool branch_taken_0x25f718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F718u;
        // 0x25f71c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f718) {
            ctx->pc = 0x25F73Cu;
            goto label_25f73c;
        }
    }
    ctx->pc = 0x25F720u;
    // 0x25f720: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25f720u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25f724: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x25f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_25f728:
    // 0x25f728: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25f728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f72c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25f72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f730: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x25f730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f734: 0xc0c194a  jal         func_306528
    ctx->pc = 0x25F734u;
    SET_GPR_U32(ctx, 31, 0x25F73Cu);
    ctx->pc = 0x25F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F734u;
    // 0x25f738: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x25F734u, 0x25F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F73Cu;
label_25f73c:
    // 0x25f73c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x25f73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x25f740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f744: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x25F744u;
    {
        const bool branch_taken_0x25f744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F744u;
        // 0x25f748: 0xe6200608  swc1        $f0, 0x608($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f744) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F74Cu;
label_25f74c:
    // 0x25f74c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x25f74cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f750: 0x0  nop
    ctx->pc = 0x25f750u;
    // NOP
    // 0x25f754: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x25F754u;
    {
        const bool branch_taken_0x25f754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f754) {
            ctx->pc = 0x25F758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F754u;
            // 0x25f758: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F7ACu;
            goto label_25f7ac;
        }
    }
    ctx->pc = 0x25F75Cu;
    // 0x25f75c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f760: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25f760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25f764: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25f764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f768: 0x0  nop
    ctx->pc = 0x25f768u;
    // NOP
    // 0x25f76c: 0x45000084  bc1f        . + 4 + (0x84 << 2)
    ctx->pc = 0x25F76Cu;
    {
        const bool branch_taken_0x25f76c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F76Cu;
        // 0x25f770: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f76c) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F774u;
    // 0x25f774: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f778: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x25f778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x25f77c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f780: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F780u;
    {
        const bool branch_taken_0x25f780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F780u;
        // 0x25f784: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f780) {
            ctx->pc = 0x25F790u;
            goto label_25f790;
        }
    }
    ctx->pc = 0x25F788u;
    // 0x25f788: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x25F788u;
    {
        const bool branch_taken_0x25f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F788u;
        // 0x25f78c: 0xe622024c  swc1        $f2, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f788) {
            ctx->pc = 0x25F97Cu;
            goto label_25f97c;
        }
    }
    ctx->pc = 0x25F790u;
label_25f790:
    // 0x25f790: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x25f790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25f794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25f794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f798: 0x5462007a  bnel        $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x25F798u;
    {
        const bool branch_taken_0x25f798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f798) {
            ctx->pc = 0x25F79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F798u;
            // 0x25f79c: 0xc6210608  lwc1        $f1, 0x608($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F984u;
            goto label_25f984;
        }
    }
    ctx->pc = 0x25F7A0u;
    // 0x25f7a0: 0xe622024c  swc1        $f2, 0x24C($s1)
    ctx->pc = 0x25f7a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x25f7a4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x25F7A4u;
    {
        const bool branch_taken_0x25f7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7A4u;
        // 0x25f7a8: 0xa22302f6  sb          $v1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7a4) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F7ACu;
label_25f7ac:
    // 0x25f7ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25f7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x25f7b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25f7b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25f7b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25f7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f7b8: 0x0  nop
    ctx->pc = 0x25f7b8u;
    // NOP
    // 0x25f7bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25f7bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25f7c0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25f7c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f7c4: 0x0  nop
    ctx->pc = 0x25f7c4u;
    // NOP
    // 0x25f7c8: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x25F7C8u;
    {
        const bool branch_taken_0x25f7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7C8u;
        // 0x25f7cc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7c8) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F7D0u;
    // 0x25f7d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f7d4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x25F7D4u;
    {
        const bool branch_taken_0x25f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7D4u;
        // 0x25f7d8: 0xe622024c  swc1        $f2, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7d4) {
            ctx->pc = 0x25F97Cu;
            goto label_25f97c;
        }
    }
    ctx->pc = 0x25F7DCu;
label_25f7dc:
    // 0x25f7dc: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f7e0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x25f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x25f7e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f7e8: 0x3c01422c  lui         $at, 0x422C
    ctx->pc = 0x25f7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16940 << 16));
    // 0x25f7ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f7f0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25F7F0u;
    {
        const bool branch_taken_0x25f7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f7f0) {
            ctx->pc = 0x25F7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F7F0u;
            // 0x25f7f4: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F820u;
            goto label_25f820;
        }
    }
    ctx->pc = 0x25F7F8u;
    // 0x25f7f8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x25f7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x25f7fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f800: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f804: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x25f804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25f808: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F808u;
    {
        const bool branch_taken_0x25f808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F808u;
        // 0x25f80c: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f808) {
            ctx->pc = 0x25F820u;
            goto label_25f820;
        }
    }
    ctx->pc = 0x25F810u;
    // 0x25f810: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x25f810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x25f814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f818: 0x0  nop
    ctx->pc = 0x25f818u;
    // NOP
    // 0x25f81c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x25f81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_25f820:
    // 0x25f820: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25f820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25f824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25f824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25f828: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25f828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25f82c:
    // 0x25f82c: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x25f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25f830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f834: 0x0  nop
    ctx->pc = 0x25f834u;
    // NOP
    // 0x25f838: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25f838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f83c: 0x0  nop
    ctx->pc = 0x25f83cu;
    // NOP
    // 0x25f840: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x25F840u;
    {
        const bool branch_taken_0x25f840 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f840) {
            ctx->pc = 0x25F844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F840u;
            // 0x25f844: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F858u;
            goto label_25f858;
        }
    }
    ctx->pc = 0x25F848u;
    // 0x25f848: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f84c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25f84cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25f850: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x25F850u;
    {
        const bool branch_taken_0x25f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F850u;
        // 0x25f854: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f850) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F858u;
label_25f858:
    // 0x25f858: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F858u;
    {
        const bool branch_taken_0x25f858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f858) {
            ctx->pc = 0x25F85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F858u;
            // 0x25f85c: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F880u;
            goto label_25f880;
        }
    }
    ctx->pc = 0x25F860u;
    // 0x25f860: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f864: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x25f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x25f868: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f86c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F86Cu;
    {
        const bool branch_taken_0x25f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f86c) {
            ctx->pc = 0x25F870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F86Cu;
            // 0x25f870: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F880u;
            goto label_25f880;
        }
    }
    ctx->pc = 0x25F874u;
    // 0x25f874: 0xc09cf4c  jal         func_273D30
    ctx->pc = 0x25F874u;
    SET_GPR_U32(ctx, 31, 0x25F87Cu);
    ctx->pc = 0x25F878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F874u;
    // 0x25f878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D30u, 0x25F874u, 0x25F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F87Cu;
label_25f87c:
    // 0x25f87c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x25f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_25f880:
    // 0x25f880: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x25f880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x25f884: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F884u;
    {
        const bool branch_taken_0x25f884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F884u;
        // 0x25f888: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f884) {
            ctx->pc = 0x25F89Cu;
            goto label_25f89c;
        }
    }
    ctx->pc = 0x25F88Cu;
    // 0x25f88c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f890: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f894: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25F894u;
    {
        const bool branch_taken_0x25f894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F894u;
        // 0x25f898: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f894) {
            ctx->pc = 0x25F8D8u;
            goto label_25f8d8;
        }
    }
    ctx->pc = 0x25F89Cu;
label_25f89c:
    // 0x25f89c: 0xc09cd8c  jal         func_273630
    ctx->pc = 0x25F89Cu;
    SET_GPR_U32(ctx, 31, 0x25F8A4u);
    ctx->pc = 0x25F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F89Cu;
    // 0x25f8a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273630u, 0x25F89Cu, 0x25F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8A4u;
label_25f8a4:
    // 0x25f8a4: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x25F8A4u;
    SET_GPR_U32(ctx, 31, 0x25F8ACu);
    ctx->pc = 0x25F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8A4u;
    // 0x25f8a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x25F8A4u, 0x25F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8ACu;
label_25f8ac:
    // 0x25f8ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25F8ACu;
    {
        const bool branch_taken_0x25f8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8ACu;
        // 0x25f8b0: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8ac) {
            ctx->pc = 0x25F8D8u;
            goto label_25f8d8;
        }
    }
    ctx->pc = 0x25F8B4u;
    // 0x25f8b4: 0x96230640  lhu         $v1, 0x640($s1)
    ctx->pc = 0x25f8b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x25f8b8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f8bc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F8BCu;
    {
        const bool branch_taken_0x25f8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8BCu;
        // 0x25f8c0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8bc) {
            ctx->pc = 0x25F8D8u;
            goto label_25f8d8;
        }
    }
    ctx->pc = 0x25F8C4u;
    // 0x25f8c4: 0xc07ef90  jal         func_1FBE40
    ctx->pc = 0x25F8C4u;
    SET_GPR_U32(ctx, 31, 0x25F8CCu);
    ctx->pc = 0x25F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8C4u;
    // 0x25f8c8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE40u, 0x25F8C4u, 0x25F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8CCu;
label_25f8cc:
    // 0x25f8cc: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x25F8CCu;
    SET_GPR_U32(ctx, 31, 0x25F8D4u);
    ctx->pc = 0x25F8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8CCu;
    // 0x25f8d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x25F8CCu, 0x25F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8D4u;
label_25f8d4:
    // 0x25f8d4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x25f8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_25f8d8:
    // 0x25f8d8: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x25f8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x25f8dc: 0xc0a5272  jal         func_2949C8
    ctx->pc = 0x25F8DCu;
    SET_GPR_U32(ctx, 31, 0x25F8E4u);
    ctx->pc = 0x25F8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8DCu;
    // 0x25f8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2949C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949C8u, 0x25F8DCu, 0x25F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8E4u;
label_25f8e4:
    // 0x25f8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8e8: 0xc0a41dc  jal         func_290770
    ctx->pc = 0x25F8E8u;
    SET_GPR_U32(ctx, 31, 0x25F8F0u);
    ctx->pc = 0x25F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8E8u;
    // 0x25f8ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290770u, 0x25F8E8u, 0x25F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8F0u;
label_25f8f0:
    // 0x25f8f0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25f8f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25f8f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25f8f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x25F8F8u;
    {
        const bool branch_taken_0x25f8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8F8u;
        // 0x25f8fc: 0xa22302f6  sb          $v1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8f8) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F900u;
label_25f900:
    // 0x25f900: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x25f900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x25f904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f908: 0xc09cf4c  jal         func_273D30
    ctx->pc = 0x25F908u;
    SET_GPR_U32(ctx, 31, 0x25F910u);
    ctx->pc = 0x25F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F908u;
    // 0x25f90c: 0xae200608  sw          $zero, 0x608($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D30u, 0x25F908u, 0x25F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F910u;
label_25f910:
    // 0x25f910: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x25f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x25f914: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x25f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x25f918: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F918u;
    {
        const bool branch_taken_0x25f918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F918u;
        // 0x25f91c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f918) {
            ctx->pc = 0x25F930u;
            goto label_25f930;
        }
    }
    ctx->pc = 0x25F920u;
    // 0x25f920: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25f924: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f928: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x25F928u;
    {
        const bool branch_taken_0x25f928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f928) {
            ctx->pc = 0x25F92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F928u;
            // 0x25f92c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F970u;
            goto label_25f970;
        }
    }
    ctx->pc = 0x25F930u;
label_25f930:
    // 0x25f930: 0xc09cd8c  jal         func_273630
    ctx->pc = 0x25F930u;
    SET_GPR_U32(ctx, 31, 0x25F938u);
    ctx->pc = 0x25F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F930u;
    // 0x25f934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273630u, 0x25F930u, 0x25F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F938u;
label_25f938:
    // 0x25f938: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x25F938u;
    SET_GPR_U32(ctx, 31, 0x25F940u);
    ctx->pc = 0x25F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F938u;
    // 0x25f93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x25F938u, 0x25F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F940u;
label_25f940:
    // 0x25f940: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25F940u;
    {
        const bool branch_taken_0x25f940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f940) {
            ctx->pc = 0x25F944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F940u;
            // 0x25f944: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F970u;
            goto label_25f970;
        }
    }
    ctx->pc = 0x25F948u;
    // 0x25f948: 0x96230640  lhu         $v1, 0x640($s1)
    ctx->pc = 0x25f948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x25f94c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f950: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F950u;
    {
        const bool branch_taken_0x25f950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f950) {
            ctx->pc = 0x25F954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F950u;
            // 0x25f954: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F970u;
            goto label_25f970;
        }
    }
    ctx->pc = 0x25F958u;
    // 0x25f958: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25f958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25f95c: 0xc07ef90  jal         func_1FBE40
    ctx->pc = 0x25F95Cu;
    SET_GPR_U32(ctx, 31, 0x25F964u);
    ctx->pc = 0x25F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F95Cu;
    // 0x25f960: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE40u, 0x25F95Cu, 0x25F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F964u;
label_25f964:
    // 0x25f964: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x25F964u;
    SET_GPR_U32(ctx, 31, 0x25F96Cu);
    ctx->pc = 0x25F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F964u;
    // 0x25f968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x25F964u, 0x25F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F96Cu;
label_25f96c:
    // 0x25f96c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25f96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25f970:
    // 0x25f970: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f974: 0xa2230531  sb          $v1, 0x531($s1)
    ctx->pc = 0x25f974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x25f978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25f978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25f97c:
    // 0x25f97c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25f97cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25f980:
    // 0x25f980: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x25f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f984:
    // 0x25f984: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25f984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25f988: 0x0  nop
    ctx->pc = 0x25f988u;
    // NOP
    // 0x25f98c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x25f98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f990: 0x0  nop
    ctx->pc = 0x25f990u;
    // NOP
    // 0x25f994: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x25F994u;
    {
        const bool branch_taken_0x25f994 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F994u;
        // 0x25f998: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f994) {
            ctx->pc = 0x25FA08u;
            goto label_25fa08;
        }
    }
    ctx->pc = 0x25F99Cu;
    // 0x25f99c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f9a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25f9a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25f9a4: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x25f9a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f9a8: 0x0  nop
    ctx->pc = 0x25f9a8u;
    // NOP
    // 0x25f9ac: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x25F9ACu;
    {
        const bool branch_taken_0x25f9ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9ACu;
        // 0x25f9b0: 0xe6200608  swc1        $f0, 0x608($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9ac) {
            ctx->pc = 0x25FA08u;
            goto label_25fa08;
        }
    }
    ctx->pc = 0x25F9B4u;
    // 0x25f9b4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x25f9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x25f9b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9bc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x25f9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x25f9c0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x25f9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25f9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25f9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25f9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25f9d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25f9d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9d8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25F9D8u;
    SET_GPR_U32(ctx, 31, 0x25F9E0u);
    ctx->pc = 0x25F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9D8u;
    // 0x25f9dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25F9D8u, 0x25F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9E0u;
label_25f9e0:
    // 0x25f9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25f9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9ec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x25f9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f9f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25f9f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25f9f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25f9f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9fc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25F9FCu;
    SET_GPR_U32(ctx, 31, 0x25FA04u);
    ctx->pc = 0x25FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9FCu;
    // 0x25fa00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25F9FCu, 0x25FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA04u;
label_25fa04:
    // 0x25fa04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25fa04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25fa08:
    // 0x25fa08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fa08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fa0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fa10: 0x3e00008  jr          $ra
    ctx->pc = 0x25FA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA10u;
        // 0x25fa14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FA18u;
}
