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

// Function: func_0025B158
// Address: 0x25b158 - 0x25b5a8
void func_0025B158_0x25b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025B158_0x25b158");
#endif

    switch (ctx->pc) {
        case 0x25b1e0u: goto label_25b1e0;
        case 0x25b2b0u: goto label_25b2b0;
        case 0x25b2f8u: goto label_25b2f8;
        case 0x25b314u: goto label_25b314;
        case 0x25b344u: goto label_25b344;
        case 0x25b350u: goto label_25b350;
        case 0x25b3acu: goto label_25b3ac;
        case 0x25b3e8u: goto label_25b3e8;
        case 0x25b3fcu: goto label_25b3fc;
        case 0x25b40cu: goto label_25b40c;
        case 0x25b498u: goto label_25b498;
        case 0x25b500u: goto label_25b500;
        case 0x25b50cu: goto label_25b50c;
        case 0x25b540u: goto label_25b540;
        case 0x25b554u: goto label_25b554;
        case 0x25b564u: goto label_25b564;
        case 0x25b578u: goto label_25b578;
        case 0x25b584u: goto label_25b584;
        default: break;
    }

    ctx->pc = 0x25b158u;

    // 0x25b158: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25b158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25b15c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x25b160: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25b160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x25b164: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25b164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x25b168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b16c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25b16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25b170: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25b174: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x25b174u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25b178: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x25b178u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25b17c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x25b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x25b180: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x25b180u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25b184: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25b184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25b188: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x25b188u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x25b18c: 0x108000fd  beqz        $a0, . + 4 + (0xFD << 2)
    ctx->pc = 0x25B18Cu;
    {
        const bool branch_taken_0x25b18c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B18Cu;
        // 0x25b190: 0xae030250  sw          $v1, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b18c) {
            ctx->pc = 0x25B584u;
            goto label_25b584;
        }
    }
    ctx->pc = 0x25B194u;
    // 0x25b194: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x25b194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x25b198: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25b198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25b19c: 0x24423980  addiu       $v0, $v0, 0x3980
    ctx->pc = 0x25b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14720));
    // 0x25b1a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b1a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b1a8: 0x800008  jr          $a0
    ctx->pc = 0x25B1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B1B0u: goto label_25b1b0;
            case 0x25B2D0u: goto label_25b2d0;
            case 0x25B38Cu: goto label_25b38c;
            case 0x25B42Cu: goto label_25b42c;
            case 0x25B514u: goto label_25b514;
            case 0x25B54Cu: goto label_25b54c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B1A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25B1B0u;
label_25b1b0:
    // 0x25b1b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b1b8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25b1b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b1bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b1bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b1c0: 0x8c452374  lw          $a1, 0x2374($v0)
    ctx->pc = 0x25b1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9076)));
    // 0x25b1c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25b1c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b1c8: 0x8c462378  lw          $a2, 0x2378($v0)
    ctx->pc = 0x25b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9080)));
    // 0x25b1cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25b1ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25b1d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25b1d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25b1d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b1d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25B1D8u;
    SET_GPR_U32(ctx, 31, 0x25B1E0u);
    ctx->pc = 0x25B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B1D8u;
    // 0x25b1dc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25B1D8u, 0x25B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B1E0u;
label_25b1e0:
    // 0x25b1e0: 0x9602054a  lhu         $v0, 0x54A($s0)
    ctx->pc = 0x25b1e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x25b1e4: 0xe61417cc  swc1        $f20, 0x17CC($s0)
    ctx->pc = 0x25b1e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6092), bits); }
    // 0x25b1e8: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x25b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x25b1ec: 0xae0017a8  sw          $zero, 0x17A8($s0)
    ctx->pc = 0x25b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6056), GPR_U32(ctx, 0));
    // 0x25b1f0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x25b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25b1f4: 0xae0005b4  sw          $zero, 0x5B4($s0)
    ctx->pc = 0x25b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1460), GPR_U32(ctx, 0));
    // 0x25b1f8: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25B1F8u;
    {
        const bool branch_taken_0x25b1f8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x25B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1F8u;
        // 0x25b1fc: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1f8) {
            ctx->pc = 0x25B204u;
            goto label_25b204;
        }
    }
    ctx->pc = 0x25B200u;
    // 0x25b200: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x25b200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_25b204:
    // 0x25b204: 0x920317be  lbu         $v1, 0x17BE($s0)
    ctx->pc = 0x25b204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6078)));
    // 0x25b208: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x25b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b20c: 0x8e0516d4  lw          $a1, 0x16D4($s0)
    ctx->pc = 0x25b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x25b210: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x25b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x25b214: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25b214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25b218: 0x3442fc7f  ori         $v0, $v0, 0xFC7F
    ctx->pc = 0x25b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64639);
    // 0x25b21c: 0xa20317be  sb          $v1, 0x17BE($s0)
    ctx->pc = 0x25b21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6078), (uint8_t)GPR_U32(ctx, 3));
    // 0x25b220: 0xa23024  and         $a2, $a1, $v0
    ctx->pc = 0x25b220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x25b224: 0xae0616d4  sw          $a2, 0x16D4($s0)
    ctx->pc = 0x25b224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 6));
    // 0x25b228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25b228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b22c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b230: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25B230u;
    {
        const bool branch_taken_0x25b230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b230) {
            ctx->pc = 0x25B234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B230u;
            // 0x25b234: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B238u;
            goto label_25b238;
        }
    }
    ctx->pc = 0x25B238u;
label_25b238:
    // 0x25b238: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x25b238u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x25b23c: 0x1010  mfhi        $v0
    ctx->pc = 0x25b23cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x25b240: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25b240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b244: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25B244u;
    {
        const bool branch_taken_0x25b244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x25B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B244u;
        // 0x25b248: 0xa20217be  sb          $v0, 0x17BE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6078), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b244) {
            ctx->pc = 0x25B26Cu;
            goto label_25b26c;
        }
    }
    ctx->pc = 0x25B24Cu;
    // 0x25b24c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x25b24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25b250: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25B250u;
    {
        const bool branch_taken_0x25b250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B250u;
        // 0x25b254: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b250) {
            ctx->pc = 0x25B2A8u;
            goto label_25b2a8;
        }
    }
    ctx->pc = 0x25B258u;
    // 0x25b258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b25c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25B25Cu;
    {
        const bool branch_taken_0x25b25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B25Cu;
        // 0x25b260: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b25c) {
            ctx->pc = 0x25B288u;
            goto label_25b288;
        }
    }
    ctx->pc = 0x25B264u;
    // 0x25b264: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25B264u;
    {
        const bool branch_taken_0x25b264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b264) {
            ctx->pc = 0x25B2A8u;
            goto label_25b2a8;
        }
    }
    ctx->pc = 0x25B26Cu;
label_25b26c:
    // 0x25b26c: 0x34c20080  ori         $v0, $a2, 0x80
    ctx->pc = 0x25b26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x25b270: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x25b270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x25b274: 0x24030276  addiu       $v1, $zero, 0x276
    ctx->pc = 0x25b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x25b278: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x25B278u;
    {
        const bool branch_taken_0x25b278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B278u;
        // 0x25b27c: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b278) {
            ctx->pc = 0x25B2A4u;
            goto label_25b2a4;
        }
    }
    ctx->pc = 0x25B280u;
    // 0x25b280: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B280u;
    {
        const bool branch_taken_0x25b280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B280u;
        // 0x25b284: 0x34c20280  ori         $v0, $a2, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)640);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b280) {
            ctx->pc = 0x25B2A0u;
            goto label_25b2a0;
        }
    }
    ctx->pc = 0x25B288u;
label_25b288:
    // 0x25b288: 0x34c20100  ori         $v0, $a2, 0x100
    ctx->pc = 0x25b288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x25b28c: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x25b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x25b290: 0x24030276  addiu       $v1, $zero, 0x276
    ctx->pc = 0x25b290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x25b294: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B294u;
    {
        const bool branch_taken_0x25b294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B294u;
        // 0x25b298: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b294) {
            ctx->pc = 0x25B2A4u;
            goto label_25b2a4;
        }
    }
    ctx->pc = 0x25B29Cu;
    // 0x25b29c: 0x34c20300  ori         $v0, $a2, 0x300
    ctx->pc = 0x25b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)768);
label_25b2a0:
    // 0x25b2a0: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x25b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
label_25b2a4:
    // 0x25b2a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25b2a8:
    // 0x25b2a8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x25B2A8u;
    SET_GPR_U32(ctx, 31, 0x25B2B0u);
    ctx->pc = 0x25B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2A8u;
    // 0x25b2ac: 0xa2021869  sb          $v0, 0x1869($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6249), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x25B2A8u, 0x25B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2B0u;
label_25b2b0:
    // 0x25b2b0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x25b2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x25b2b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25b2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b2b8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25b2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25b2bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25b2bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25b2c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b2c4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25b2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x25b2c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25b2c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25b2cc: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x25b2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_25b2d0:
    // 0x25b2d0: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x25b2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x25b2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b2d8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25b2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x25b2dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2e4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x25b2e8: 0xa2030617  sb          $v1, 0x617($s0)
    ctx->pc = 0x25b2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 3));
    // 0x25b2ec: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25b2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x25b2f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25B2F0u;
    SET_GPR_U32(ctx, 31, 0x25B2F8u);
    ctx->pc = 0x25B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2F0u;
    // 0x25b2f4: 0xa6020434  sh          $v0, 0x434($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25B2F0u, 0x25B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2F8u;
label_25b2f8:
    // 0x25b2f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25B2F8u;
    {
        const bool branch_taken_0x25b2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b2f8) {
            ctx->pc = 0x25B330u;
            goto label_25b330;
        }
    }
    ctx->pc = 0x25B300u;
    // 0x25b300: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25b300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x25b304: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25B304u;
    {
        const bool branch_taken_0x25b304 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x25b304) {
            ctx->pc = 0x25B330u;
            goto label_25b330;
        }
    }
    ctx->pc = 0x25B30Cu;
    // 0x25b30c: 0xc09cf4c  jal         func_273D30
    ctx->pc = 0x25B30Cu;
    SET_GPR_U32(ctx, 31, 0x25B314u);
    ctx->pc = 0x25B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B30Cu;
    // 0x25b310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D30u, 0x25B30Cu, 0x25B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B314u;
label_25b314:
    // 0x25b314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25b314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b31c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x25b31cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x25b320: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25b320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25b324: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x25b324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x25b328: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x25B328u;
    {
        const bool branch_taken_0x25b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B328u;
        // 0x25b32c: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b328) {
            ctx->pc = 0x25B584u;
            goto label_25b584;
        }
    }
    ctx->pc = 0x25B330u;
label_25b330:
    // 0x25b330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25b334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b33c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25B33Cu;
    SET_GPR_U32(ctx, 31, 0x25B344u);
    ctx->pc = 0x25B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B33Cu;
    // 0x25b340: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25B33Cu, 0x25B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B344u;
label_25b344:
    // 0x25b344: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25b344u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25b348: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25B348u;
    SET_GPR_U32(ctx, 31, 0x25B350u);
    ctx->pc = 0x25B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B348u;
    // 0x25b34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25B348u, 0x25B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B350u;
label_25b350:
    // 0x25b350: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x25b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b354: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x25b354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b358: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25b358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b35c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25b35cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25b360: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25b360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b364: 0x0  nop
    ctx->pc = 0x25b364u;
    // NOP
    // 0x25b368: 0x45000086  bc1f        . + 4 + (0x86 << 2)
    ctx->pc = 0x25B368u;
    {
        const bool branch_taken_0x25b368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B368u;
        // 0x25b36c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b368) {
            ctx->pc = 0x25B584u;
            goto label_25b584;
        }
    }
    ctx->pc = 0x25B370u;
    // 0x25b370: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25b370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x25b374: 0x58400084  blezl       $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x25B374u;
    {
        const bool branch_taken_0x25b374 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x25b374) {
            ctx->pc = 0x25B378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B374u;
            // 0x25b378: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B588u;
            goto label_25b588;
        }
    }
    ctx->pc = 0x25B37Cu;
    // 0x25b37c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25b37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25b380: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b384: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x25B384u;
    {
        const bool branch_taken_0x25b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B384u;
        // 0x25b388: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b384) {
            ctx->pc = 0x25B584u;
            goto label_25b584;
        }
    }
    ctx->pc = 0x25B38Cu;
label_25b38c:
    // 0x25b38c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b390: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25b390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25b394: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x25b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x25b398: 0x8c43237c  lw          $v1, 0x237C($v0)
    ctx->pc = 0x25b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9084)));
    // 0x25b39c: 0x8c452380  lw          $a1, 0x2380($v0)
    ctx->pc = 0x25b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
    // 0x25b3a0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25b3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b3a4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x25B3A4u;
    SET_GPR_U32(ctx, 31, 0x25B3ACu);
    ctx->pc = 0x25B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3A4u;
    // 0x25b3a8: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x25B3A4u, 0x25B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3ACu;
label_25b3ac:
    // 0x25b3ac: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x25b3acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25b3b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B3B0u;
    {
        const bool branch_taken_0x25b3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b3b0) {
            ctx->pc = 0x25B3C4u;
            goto label_25b3c4;
        }
    }
    ctx->pc = 0x25B3B8u;
    // 0x25b3b8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x25b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b3bc: 0x8c622384  lw          $v0, 0x2384($v1)
    ctx->pc = 0x25b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9092)));
    // 0x25b3c0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x25b3c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25b3c4:
    // 0x25b3c4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x25b3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25b3c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25b3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25b3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b3d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25b3d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x25b3dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25b3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3e0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25B3E0u;
    SET_GPR_U32(ctx, 31, 0x25B3E8u);
    ctx->pc = 0x25B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3E0u;
    // 0x25b3e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25B3E0u, 0x25B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3E8u;
label_25b3e8:
    // 0x25b3e8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x25b3ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25b3ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25b3f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25b3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b3f4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x25B3F4u;
    SET_GPR_U32(ctx, 31, 0x25B3FCu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x25B3F4u, 0x25B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3FCu;
label_25b3fc:
    // 0x25b3fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25b3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x25b400: 0xe6150584  swc1        $f21, 0x584($s0)
    ctx->pc = 0x25b400u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1412), bits); }
    // 0x25b404: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x25B404u;
    SET_GPR_U32(ctx, 31, 0x25B40Cu);
    ctx->pc = 0x25B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B404u;
    // 0x25b408: 0xe6000580  swc1        $f0, 0x580($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x25B404u, 0x25B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B40Cu;
label_25b40c:
    // 0x25b40c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25b40cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25b410: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25b410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x25b414: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x25b414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x25b418: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25b418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b41c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b420: 0xe6000588  swc1        $f0, 0x588($s0)
    ctx->pc = 0x25b420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1416), bits); }
    // 0x25b424: 0xe601054c  swc1        $f1, 0x54C($s0)
    ctx->pc = 0x25b424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x25b428: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25b428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25b42c:
    // 0x25b42c: 0xc601054c  lwc1        $f1, 0x54C($s0)
    ctx->pc = 0x25b42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b434: 0x0  nop
    ctx->pc = 0x25b434u;
    // NOP
    // 0x25b438: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25b438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b43c: 0x0  nop
    ctx->pc = 0x25b43cu;
    // NOP
    // 0x25b440: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x25B440u;
    {
        const bool branch_taken_0x25b440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B440u;
        // 0x25b444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b440) {
            ctx->pc = 0x25B490u;
            goto label_25b490;
        }
    }
    ctx->pc = 0x25B448u;
    // 0x25b448: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x25b448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b44c: 0xa2020617  sb          $v0, 0x617($s0)
    ctx->pc = 0x25b44cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x25b450: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x25b450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25b454: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x25b454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x25b458: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25b458u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b45c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25b460: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25b460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b464: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x25b464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25b468: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x25b468u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25b46c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x25b46cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b470: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25b470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25b474: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25b474u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b478: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x25b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25b47c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x25b480: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25b480u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b484: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x25b484u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b488: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25b488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b48c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25b48cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25b490:
    // 0x25b490: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25B490u;
    SET_GPR_U32(ctx, 31, 0x25B498u);
    ctx->pc = 0x25B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B490u;
    // 0x25b494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25B490u, 0x25B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B498u;
label_25b498:
    // 0x25b498: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25B498u;
    {
        const bool branch_taken_0x25b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b498) {
            ctx->pc = 0x25B4ECu;
            goto label_25b4ec;
        }
    }
    ctx->pc = 0x25B4A0u;
    // 0x25b4a0: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x25b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b4a4: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x25b4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x25b4a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b4ac: 0x0  nop
    ctx->pc = 0x25b4acu;
    // NOP
    // 0x25b4b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25b4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b4b4: 0x0  nop
    ctx->pc = 0x25b4b4u;
    // NOP
    // 0x25b4b8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x25B4B8u;
    {
        const bool branch_taken_0x25b4b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4B8u;
        // 0x25b4bc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4b8) {
            ctx->pc = 0x25B4E0u;
            goto label_25b4e0;
        }
    }
    ctx->pc = 0x25B4C0u;
    // 0x25b4c0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x25b4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x25b4c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b4c8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x25b4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25b4cc: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25b4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x25b4d0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25b4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25b4d4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x25b4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x25b4d8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x25B4D8u;
    {
        const bool branch_taken_0x25b4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4D8u;
        // 0x25b4dc: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4d8) {
            ctx->pc = 0x25B584u;
            goto label_25b584;
        }
    }
    ctx->pc = 0x25B4E0u;
label_25b4e0:
    // 0x25b4e0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25b4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25b4e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b4e8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25b4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25b4ec:
    // 0x25b4ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b4f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25b4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4f8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25B4F8u;
    SET_GPR_U32(ctx, 31, 0x25B500u);
    ctx->pc = 0x25B4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4F8u;
    // 0x25b4fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25B4F8u, 0x25B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B500u;
label_25b500:
    // 0x25b500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b504: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25B504u;
    SET_GPR_U32(ctx, 31, 0x25B50Cu);
    ctx->pc = 0x25B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B504u;
    // 0x25b508: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25B504u, 0x25B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B50Cu;
label_25b50c:
    // 0x25b50c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25B50Cu;
    {
        const bool branch_taken_0x25b50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B50Cu;
        // 0x25b510: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b50c) {
            ctx->pc = 0x25B588u;
            goto label_25b588;
        }
    }
    ctx->pc = 0x25B514u;
label_25b514:
    // 0x25b514: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25b514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b51c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b51cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25b520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b524: 0x8c452388  lw          $a1, 0x2388($v0)
    ctx->pc = 0x25b524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9096)));
    // 0x25b528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25b528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b52c: 0x8c46238c  lw          $a2, 0x238C($v0)
    ctx->pc = 0x25b52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9100)));
    // 0x25b530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25b530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b534: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25b534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25b538: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25B538u;
    SET_GPR_U32(ctx, 31, 0x25B540u);
    ctx->pc = 0x25B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B538u;
    // 0x25b53c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25B538u, 0x25B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B540u;
label_25b540:
    // 0x25b540: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25b540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25b544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b548: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25b548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25b54c:
    // 0x25b54c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25B54Cu;
    SET_GPR_U32(ctx, 31, 0x25B554u);
    ctx->pc = 0x25B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B54Cu;
    // 0x25b550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25B54Cu, 0x25B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B554u;
label_25b554:
    // 0x25b554: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B554u;
    {
        const bool branch_taken_0x25b554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b554) {
            ctx->pc = 0x25B564u;
            goto label_25b564;
        }
    }
    ctx->pc = 0x25B55Cu;
    // 0x25b55c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x25B55Cu;
    SET_GPR_U32(ctx, 31, 0x25B564u);
    ctx->pc = 0x25B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B55Cu;
    // 0x25b560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25B55Cu, 0x25B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B564u;
label_25b564:
    // 0x25b564: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b568: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25b568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b570: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25B570u;
    SET_GPR_U32(ctx, 31, 0x25B578u);
    ctx->pc = 0x25B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B570u;
    // 0x25b574: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25B570u, 0x25B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B578u;
label_25b578:
    // 0x25b578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b57c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25B57Cu;
    SET_GPR_U32(ctx, 31, 0x25B584u);
    ctx->pc = 0x25B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B57Cu;
    // 0x25b580: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25B57Cu, 0x25B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B584u;
label_25b584:
    // 0x25b584: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25b584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25b588:
    // 0x25b588: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25b588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b58c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25b58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b590: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25b590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b594: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x25b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25b598: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b59c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B59Cu;
        // 0x25b5a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B5A4u;
    // 0x25b5a4: 0x0  nop
    ctx->pc = 0x25b5a4u;
    // NOP
    ctx->pc = 0x25b5a8u;
}
