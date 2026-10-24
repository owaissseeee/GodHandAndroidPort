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

// Function: func_002EAF70
// Address: 0x2eaf70 - 0x2ebbd0
void func_002EAF70_0x2eaf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EAF70_0x2eaf70");
#endif

    switch (ctx->pc) {
        case 0x2eb02cu: goto label_2eb02c;
        case 0x2eb064u: goto label_2eb064;
        case 0x2eb074u: goto label_2eb074;
        case 0x2eb084u: goto label_2eb084;
        case 0x2eb090u: goto label_2eb090;
        case 0x2eb0a0u: goto label_2eb0a0;
        case 0x2eb0ccu: goto label_2eb0cc;
        case 0x2eb0dcu: goto label_2eb0dc;
        case 0x2eb0ecu: goto label_2eb0ec;
        case 0x2eb0f8u: goto label_2eb0f8;
        case 0x2eb104u: goto label_2eb104;
        case 0x2eb130u: goto label_2eb130;
        case 0x2eb140u: goto label_2eb140;
        case 0x2eb150u: goto label_2eb150;
        case 0x2eb164u: goto label_2eb164;
        case 0x2eb170u: goto label_2eb170;
        case 0x2eb184u: goto label_2eb184;
        case 0x2eb194u: goto label_2eb194;
        case 0x2eb1b8u: goto label_2eb1b8;
        case 0x2eb1d0u: goto label_2eb1d0;
        case 0x2eb1e4u: goto label_2eb1e4;
        case 0x2eb2f4u: goto label_2eb2f4;
        case 0x2eb35cu: goto label_2eb35c;
        case 0x2eb390u: goto label_2eb390;
        case 0x2eb670u: goto label_2eb670;
        case 0x2eb7b8u: goto label_2eb7b8;
        case 0x2eb7c8u: goto label_2eb7c8;
        case 0x2eb838u: goto label_2eb838;
        case 0x2eb870u: goto label_2eb870;
        case 0x2eb888u: goto label_2eb888;
        case 0x2eba34u: goto label_2eba34;
        case 0x2ebb88u: goto label_2ebb88;
        default: break;
    }

    ctx->pc = 0x2eaf70u;

    // 0x2eaf70: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x2eaf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x2eaf74: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2eaf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2eaf78: 0x7fb30250  sq          $s3, 0x250($sp)
    ctx->pc = 0x2eaf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 19));
    // 0x2eaf7c: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x2eaf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
    // 0x2eaf80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2eaf80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf84: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x2eaf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
    // 0x2eaf88: 0x7fb20260  sq          $s2, 0x260($sp)
    ctx->pc = 0x2eaf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 18));
    // 0x2eaf8c: 0x7fb40240  sq          $s4, 0x240($sp)
    ctx->pc = 0x2eaf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 20));
    // 0x2eaf90: 0x7fb50230  sq          $s5, 0x230($sp)
    ctx->pc = 0x2eaf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 21));
    // 0x2eaf94: 0x7fb60220  sq          $s6, 0x220($sp)
    ctx->pc = 0x2eaf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 22));
    // 0x2eaf98: 0x7fb70210  sq          $s7, 0x210($sp)
    ctx->pc = 0x2eaf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 23));
    // 0x2eaf9c: 0x7fbe0200  sq          $fp, 0x200($sp)
    ctx->pc = 0x2eaf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 30));
    // 0x2eafa0: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x2eafa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x2eafa4: 0xe7b902b8  swc1        $f25, 0x2B8($sp)
    ctx->pc = 0x2eafa4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
    // 0x2eafa8: 0xe7b802b0  swc1        $f24, 0x2B0($sp)
    ctx->pc = 0x2eafa8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x2eafac: 0xe7b702a8  swc1        $f23, 0x2A8($sp)
    ctx->pc = 0x2eafacu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2eafb0: 0xe7b602a0  swc1        $f22, 0x2A0($sp)
    ctx->pc = 0x2eafb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2eafb4: 0xe7b50298  swc1        $f21, 0x298($sp)
    ctx->pc = 0x2eafb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x2eafb8: 0xe7b40290  swc1        $f20, 0x290($sp)
    ctx->pc = 0x2eafb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x2eafbc: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x2eafbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2eafc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2eafc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eafc4: 0x144002f1  bnez        $v0, . + 4 + (0x2F1 << 2)
    ctx->pc = 0x2EAFC4u;
    {
        const bool branch_taken_0x2eafc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFC4u;
        // 0x2eafc8: 0x7bb00280  lq          $s0, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafc4) {
            ctx->pc = 0x2EBB8Cu;
            goto label_2ebb8c;
        }
    }
    ctx->pc = 0x2EAFCCu;
    // 0x2eafcc: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x2eafccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x2eafd0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EAFD0u;
    {
        const bool branch_taken_0x2eafd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eafd0) {
            ctx->pc = 0x2EAFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAFD0u;
            // 0x2eafd4: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFFCu;
            goto label_2eaffc;
        }
    }
    ctx->pc = 0x2EAFD8u;
    // 0x2eafd8: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2eafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2eafdc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2eafdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2eafe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAFE0u;
    {
        const bool branch_taken_0x2eafe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFE0u;
        // 0x2eafe4: 0x311fa  dsrl        $v0, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafe0) {
            ctx->pc = 0x2EAFF8u;
            goto label_2eaff8;
        }
    }
    ctx->pc = 0x2EAFE8u;
    // 0x2eafe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eafe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eafec: 0x104002e8  beqz        $v0, . + 4 + (0x2E8 << 2)
    ctx->pc = 0x2EAFECu;
    {
        const bool branch_taken_0x2eafec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFECu;
        // 0x2eaff0: 0x7bb10270  lq          $s1, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafec) {
            ctx->pc = 0x2EBB90u;
            goto label_2ebb90;
        }
    }
    ctx->pc = 0x2EAFF4u;
    // 0x2eaff4: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x2eaff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_2eaff8:
    // 0x2eaff8: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2eaff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2eaffc:
    // 0x2eaffc: 0x544002e3  bnel        $v0, $zero, . + 4 + (0x2E3 << 2)
    ctx->pc = 0x2EAFFCu;
    {
        const bool branch_taken_0x2eaffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaffc) {
            ctx->pc = 0x2EB000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAFFCu;
            // 0x2eb000: 0x7bb00280  lq          $s0, 0x280($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBB8Cu;
            goto label_2ebb8c;
        }
    }
    ctx->pc = 0x2EB004u;
    // 0x2eb004: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb008: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2eb008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb00c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2EB00Cu;
    {
        const bool branch_taken_0x2eb00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB00Cu;
        // 0x2eb010: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb00c) {
            ctx->pc = 0x2EB1ECu;
            goto label_2eb1ec;
        }
    }
    ctx->pc = 0x2EB014u;
    // 0x2eb014: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2eb014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2eb018: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eb018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb01c: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2eb01cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2eb020: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2eb020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb024: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EB024u;
    SET_GPR_U32(ctx, 31, 0x2EB02Cu);
    ctx->pc = 0x2EB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB024u;
    // 0x2eb028: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EB024u, 0x2EB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB02Cu;
label_2eb02c:
    // 0x2eb02c: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x2eb02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2eb030: 0x463001e  bgezl       $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EB030u;
    {
        const bool branch_taken_0x2eb030 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2eb030) {
            ctx->pc = 0x2EB034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB030u;
            // 0x2eb034: 0x8e62011c  lw          $v0, 0x11C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB0ACu;
            goto label_2eb0ac;
        }
    }
    ctx->pc = 0x2EB038u;
    // 0x2eb038: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb03c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2eb03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb040: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EB040u;
    {
        const bool branch_taken_0x2eb040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB040u;
        // 0x2eb044: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb040) {
            ctx->pc = 0x2EB0A8u;
            goto label_2eb0a8;
        }
    }
    ctx->pc = 0x2EB048u;
    // 0x2eb048: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2eb048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb04c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EB04Cu;
    {
        const bool branch_taken_0x2eb04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB04Cu;
        // 0x2eb050: 0x8e85aff0  lw          $a1, -0x5010($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb04c) {
            ctx->pc = 0x2EB0A8u;
            goto label_2eb0a8;
        }
    }
    ctx->pc = 0x2EB054u;
    // 0x2eb054: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2eb054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2eb058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb05c: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EB05Cu;
    SET_GPR_U32(ctx, 31, 0x2EB064u);
    ctx->pc = 0x2EB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB05Cu;
    // 0x2eb060: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EB05Cu, 0x2EB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB064u;
label_2eb064:
    // 0x2eb064: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2eb064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2eb068: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb06c: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EB06Cu;
    SET_GPR_U32(ctx, 31, 0x2EB074u);
    ctx->pc = 0x2EB070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB06Cu;
    // 0x2eb070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EB06Cu, 0x2EB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB074u;
label_2eb074:
    // 0x2eb074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2eb074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eb078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb07c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EB07Cu;
    SET_GPR_U32(ctx, 31, 0x2EB084u);
    ctx->pc = 0x2EB080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB07Cu;
    // 0x2eb080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EB07Cu, 0x2EB084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB084u;
label_2eb084:
    // 0x2eb084: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2eb084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eb088: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x2EB088u;
    SET_GPR_U32(ctx, 31, 0x2EB090u);
    ctx->pc = 0x2EB08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB088u;
    // 0x2eb08c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x2EB088u, 0x2EB090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB090u;
label_2eb090:
    // 0x2eb090: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2eb090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb098: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EB098u;
    SET_GPR_U32(ctx, 31, 0x2EB0A0u);
    ctx->pc = 0x2EB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB098u;
    // 0x2eb09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EB098u, 0x2EB0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0A0u;
label_2eb0a0:
    // 0x2eb0a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2EB0A0u;
    {
        const bool branch_taken_0x2eb0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0A0u;
        // 0x2eb0a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0a0) {
            ctx->pc = 0x2EB138u;
            goto label_2eb138;
        }
    }
    ctx->pc = 0x2EB0A8u;
label_2eb0a8:
    // 0x2eb0a8: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2eb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_2eb0ac:
    // 0x2eb0ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2eb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb0b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eb0b4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2EB0B4u;
    {
        const bool branch_taken_0x2eb0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0B4u;
        // 0x2eb0b8: 0x8e85aff0  lw          $a1, -0x5010($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0b4) {
            ctx->pc = 0x2EB158u;
            goto label_2eb158;
        }
    }
    ctx->pc = 0x2EB0BCu;
    // 0x2eb0bc: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2eb0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2eb0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0c4: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EB0C4u;
    SET_GPR_U32(ctx, 31, 0x2EB0CCu);
    ctx->pc = 0x2EB0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0C4u;
    // 0x2eb0c8: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EB0C4u, 0x2EB0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0CCu;
label_2eb0cc:
    // 0x2eb0cc: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2eb0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2eb0d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0d4: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EB0D4u;
    SET_GPR_U32(ctx, 31, 0x2EB0DCu);
    ctx->pc = 0x2EB0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0D4u;
    // 0x2eb0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EB0D4u, 0x2EB0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0DCu;
label_2eb0dc:
    // 0x2eb0dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eb0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2eb0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0e4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EB0E4u;
    SET_GPR_U32(ctx, 31, 0x2EB0ECu);
    ctx->pc = 0x2EB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0E4u;
    // 0x2eb0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EB0E4u, 0x2EB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0ECu;
label_2eb0ec:
    // 0x2eb0ec: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x2eb0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2eb0f0: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x2EB0F0u;
    SET_GPR_U32(ctx, 31, 0x2EB0F8u);
    ctx->pc = 0x2EB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0F0u;
    // 0x2eb0f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x2EB0F0u, 0x2EB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0F8u;
label_2eb0f8:
    // 0x2eb0f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0fc: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EB0FCu;
    SET_GPR_U32(ctx, 31, 0x2EB104u);
    ctx->pc = 0x2EB100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0FCu;
    // 0x2eb100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EB0FCu, 0x2EB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB104u;
label_2eb104:
    // 0x2eb104: 0x8e82aff0  lw          $v0, -0x5010($s4)
    ctx->pc = 0x2eb104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946800)));
    // 0x2eb108: 0x24420220  addiu       $v0, $v0, 0x220
    ctx->pc = 0x2eb108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x2eb10c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2eb10cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eb110: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x2eb110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2eb114: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2eb114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eb118: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb11c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2eb11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2eb120: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x2eb120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x2eb124: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2eb124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb128: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x2EB128u;
    SET_GPR_U32(ctx, 31, 0x2EB130u);
    ctx->pc = 0x2EB12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB128u;
    // 0x2eb12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x2EB128u, 0x2EB130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB130u;
label_2eb130:
    // 0x2eb130: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2eb130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb134: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eb134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb138:
    // 0x2eb138: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2EB138u;
    SET_GPR_U32(ctx, 31, 0x2EB140u);
    ctx->pc = 0x2EB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB138u;
    // 0x2eb13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2EB138u, 0x2EB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB140u;
label_2eb140:
    // 0x2eb140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eb140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb144: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2eb144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb148: 0xc051d52  jal         func_147548
    ctx->pc = 0x2EB148u;
    SET_GPR_U32(ctx, 31, 0x2EB150u);
    ctx->pc = 0x2EB14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB148u;
    // 0x2eb14c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2EB148u, 0x2EB150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB150u;
label_2eb150:
    // 0x2eb150: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EB150u;
    {
        const bool branch_taken_0x2eb150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb150) {
            ctx->pc = 0x2EB194u;
            goto label_2eb194;
        }
    }
    ctx->pc = 0x2EB158u;
label_2eb158:
    // 0x2eb158: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2eb158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eb15c: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2EB15Cu;
    SET_GPR_U32(ctx, 31, 0x2EB164u);
    ctx->pc = 0x2EB160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB15Cu;
    // 0x2eb160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2EB15Cu, 0x2EB164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB164u;
label_2eb164:
    // 0x2eb164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb168: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EB168u;
    SET_GPR_U32(ctx, 31, 0x2EB170u);
    ctx->pc = 0x2EB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB168u;
    // 0x2eb16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EB168u, 0x2EB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB170u;
label_2eb170:
    // 0x2eb170: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2eb170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb174: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2eb174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2eb178: 0x8e85aff0  lw          $a1, -0x5010($s4)
    ctx->pc = 0x2eb178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946800)));
    // 0x2eb17c: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EB17Cu;
    SET_GPR_U32(ctx, 31, 0x2EB184u);
    ctx->pc = 0x2EB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB17Cu;
    // 0x2eb180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EB17Cu, 0x2EB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB184u;
label_2eb184:
    // 0x2eb184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eb184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eb188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb18c: 0xc051d52  jal         func_147548
    ctx->pc = 0x2EB18Cu;
    SET_GPR_U32(ctx, 31, 0x2EB194u);
    ctx->pc = 0x2EB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB18Cu;
    // 0x2eb190: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2EB18Cu, 0x2EB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB194u;
label_2eb194:
    // 0x2eb194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eb194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb198: 0xc6610254  lwc1        $f1, 0x254($s3)
    ctx->pc = 0x2eb198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb19c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2eb19cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb1a0: 0x0  nop
    ctx->pc = 0x2eb1a0u;
    // NOP
    // 0x2eb1a4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2EB1A4u;
    {
        const bool branch_taken_0x2eb1a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1A4u;
        // 0x2eb1a8: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1a4) {
            ctx->pc = 0x2EB1D8u;
            goto label_2eb1d8;
        }
    }
    ctx->pc = 0x2EB1ACu;
    // 0x2eb1ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eb1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1b0: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EB1B0u;
    SET_GPR_U32(ctx, 31, 0x2EB1B8u);
    ctx->pc = 0x2EB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1B0u;
    // 0x2eb1b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EB1B0u, 0x2EB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1B8u;
label_2eb1b8:
    // 0x2eb1b8: 0xc66c0254  lwc1        $f12, 0x254($s3)
    ctx->pc = 0x2eb1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb1bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eb1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1c4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2eb1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2eb1c8: 0xc0bf798  jal         func_2FDE60
    ctx->pc = 0x2EB1C8u;
    SET_GPR_U32(ctx, 31, 0x2EB1D0u);
    ctx->pc = 0x2EB1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1C8u;
    // 0x2eb1cc: 0x27a70124  addiu       $a3, $sp, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDE60u, 0x2EB1C8u, 0x2EB1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1D0u;
label_2eb1d0:
    // 0x2eb1d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB1D0u;
    {
        const bool branch_taken_0x2eb1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb1d0) {
            ctx->pc = 0x2EB1E4u;
            goto label_2eb1e4;
        }
    }
    ctx->pc = 0x2EB1D8u;
label_2eb1d8:
    // 0x2eb1d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eb1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1dc: 0xc0bf76a  jal         func_2FDDA8
    ctx->pc = 0x2EB1DCu;
    SET_GPR_U32(ctx, 31, 0x2EB1E4u);
    ctx->pc = 0x2EB1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1DCu;
    // 0x2eb1e0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDA8u, 0x2EB1DCu, 0x2EB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1E4u;
label_2eb1e4:
    // 0x2eb1e4: 0x14400269  bnez        $v0, . + 4 + (0x269 << 2)
    ctx->pc = 0x2EB1E4u;
    {
        const bool branch_taken_0x2eb1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1E4u;
        // 0x2eb1e8: 0x7bb00280  lq          $s0, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1e4) {
            ctx->pc = 0x2EBB8Cu;
            goto label_2ebb8c;
        }
    }
    ctx->pc = 0x2EB1ECu;
label_2eb1ec:
    // 0x2eb1ec: 0x9262024b  lbu         $v0, 0x24B($s3)
    ctx->pc = 0x2eb1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x2eb1f0: 0x9264024a  lbu         $a0, 0x24A($s3)
    ctx->pc = 0x2eb1f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x2eb1f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2eb1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eb1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2eb1fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2eb1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2eb200: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2eb200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eb204: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EB204u;
    {
        const bool branch_taken_0x2eb204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB204u;
        // 0x2eb208: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb204) {
            ctx->pc = 0x2EB24Cu;
            goto label_2eb24c;
        }
    }
    ctx->pc = 0x2EB20Cu;
    // 0x2eb20c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x2eb20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2eb210: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2eb210u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2eb214: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2eb214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2eb218: 0x1440025c  bnez        $v0, . + 4 + (0x25C << 2)
    ctx->pc = 0x2EB218u;
    {
        const bool branch_taken_0x2eb218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB218u;
        // 0x2eb21c: 0x7bb00280  lq          $s0, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb218) {
            ctx->pc = 0x2EBB8Cu;
            goto label_2ebb8c;
        }
    }
    ctx->pc = 0x2EB220u;
    // 0x2eb220: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2eb220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2eb224: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB224u;
    {
        const bool branch_taken_0x2eb224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB224u;
        // 0x2eb228: 0x661023  subu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb224) {
            ctx->pc = 0x2EB24Cu;
            goto label_2eb24c;
        }
    }
    ctx->pc = 0x2EB22Cu;
    // 0x2eb22c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2eb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2eb230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb234: 0x0  nop
    ctx->pc = 0x2eb234u;
    // NOP
    // 0x2eb238: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eb238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eb23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb240: 0x0  nop
    ctx->pc = 0x2eb240u;
    // NOP
    // 0x2eb244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eb244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eb248: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2eb248u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_2eb24c:
    // 0x2eb24c: 0x96630276  lhu         $v1, 0x276($s3)
    ctx->pc = 0x2eb24cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 630)));
    // 0x2eb250: 0x671023  subu        $v0, $v1, $a3
    ctx->pc = 0x2eb250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2eb254: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EB254u;
    {
        const bool branch_taken_0x2eb254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB254u;
        // 0x2eb258: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb254) {
            ctx->pc = 0x2EB2A0u;
            goto label_2eb2a0;
        }
    }
    ctx->pc = 0x2EB25Cu;
    // 0x2eb25c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2eb25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2eb260: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2eb260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2eb264: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2eb264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2eb268: 0x14400248  bnez        $v0, . + 4 + (0x248 << 2)
    ctx->pc = 0x2EB268u;
    {
        const bool branch_taken_0x2eb268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB268u;
        // 0x2eb26c: 0x7bb00280  lq          $s0, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb268) {
            ctx->pc = 0x2EBB8Cu;
            goto label_2ebb8c;
        }
    }
    ctx->pc = 0x2EB270u;
    // 0x2eb270: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2eb270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2eb274: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB274u;
    {
        const bool branch_taken_0x2eb274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB274u;
        // 0x2eb278: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb274) {
            ctx->pc = 0x2EB2A0u;
            goto label_2eb2a0;
        }
    }
    ctx->pc = 0x2EB27Cu;
    // 0x2eb27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb280: 0x0  nop
    ctx->pc = 0x2eb280u;
    // NOP
    // 0x2eb284: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eb284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eb288: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2eb288u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2eb28c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2eb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2eb290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb294: 0x0  nop
    ctx->pc = 0x2eb294u;
    // NOP
    // 0x2eb298: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eb298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eb29c: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2eb29cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2eb2a0:
    // 0x2eb2a0: 0x9262024c  lbu         $v0, 0x24C($s3)
    ctx->pc = 0x2eb2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 588)));
    // 0x2eb2a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EB2A4u;
    {
        const bool branch_taken_0x2eb2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2A4u;
        // 0x2eb2a8: 0x8e640120  lw          $a0, 0x120($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2a4) {
            ctx->pc = 0x2EB2D4u;
            goto label_2eb2d4;
        }
    }
    ctx->pc = 0x2EB2ACu;
    // 0x2eb2ac: 0x9263024d  lbu         $v1, 0x24D($s3)
    ctx->pc = 0x2eb2acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 589)));
    // 0x2eb2b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb2b4: 0x0  nop
    ctx->pc = 0x2eb2b4u;
    // NOP
    // 0x2eb2b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eb2b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eb2bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2eb2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb2c4: 0x0  nop
    ctx->pc = 0x2eb2c4u;
    // NOP
    // 0x2eb2c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eb2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eb2cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2eb2ccu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2eb2d0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2eb2d0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2eb2d4:
    // 0x2eb2d4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EB2D4u;
    {
        const bool branch_taken_0x2eb2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2D4u;
        // 0x2eb2d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2d4) {
            ctx->pc = 0x2EB30Cu;
            goto label_2eb30c;
        }
    }
    ctx->pc = 0x2EB2DCu;
    // 0x2eb2dc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2eb2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb2e0: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2eb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2eb2e4: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB2E4u;
    {
        const bool branch_taken_0x2eb2e4 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2eb2e4) {
            ctx->pc = 0x2EB2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB2E4u;
            // 0x2eb2e8: 0xae600120  sw          $zero, 0x120($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB308u;
            goto label_2eb308;
        }
    }
    ctx->pc = 0x2EB2ECu;
    // 0x2eb2ec: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2EB2ECu;
    SET_GPR_U32(ctx, 31, 0x2EB2F4u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2EB2ECu, 0x2EB2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2F4u;
label_2eb2f4:
    // 0x2eb2f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb2f8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB2F8u;
    {
        const bool branch_taken_0x2eb2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eb2f8) {
            ctx->pc = 0x2EB2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB2F8u;
            // 0x2eb2fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB30Cu;
            goto label_2eb30c;
        }
    }
    ctx->pc = 0x2EB300u;
    // 0x2eb300: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB300u;
    {
        const bool branch_taken_0x2eb300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB300u;
        // 0x2eb304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb300) {
            ctx->pc = 0x2EB310u;
            goto label_2eb310;
        }
    }
    ctx->pc = 0x2EB308u;
label_2eb308:
    // 0x2eb308: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2eb308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb30c:
    // 0x2eb30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb310:
    // 0x2eb310: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB310u;
    {
        const bool branch_taken_0x2eb310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eb310) {
            ctx->pc = 0x2EB314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB310u;
            // 0x2eb314: 0x82620101  lb          $v0, 0x101($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 257)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB338u;
            goto label_2eb338;
        }
    }
    ctx->pc = 0x2EB318u;
    // 0x2eb318: 0x8e630120  lw          $v1, 0x120($s3)
    ctx->pc = 0x2eb318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x2eb31c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2eb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2eb320: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2eb320u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2eb324: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eb328: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB328u;
    {
        const bool branch_taken_0x2eb328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB328u;
        // 0x2eb32c: 0x82620101  lb          $v0, 0x101($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 257)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb328) {
            ctx->pc = 0x2EB338u;
            goto label_2eb338;
        }
    }
    ctx->pc = 0x2EB330u;
    // 0x2eb330: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2eb330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb334: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2eb334u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2eb338:
    // 0x2eb338: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2eb338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2eb33c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb340: 0x8e650118  lw          $a1, 0x118($s3)
    ctx->pc = 0x2eb340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x2eb344: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2eb344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2eb348: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2eb348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb34c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2eb34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb350: 0x248464a0  addiu       $a0, $a0, 0x64A0
    ctx->pc = 0x2eb350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25760));
    // 0x2eb354: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2EB354u;
    SET_GPR_U32(ctx, 31, 0x2EB35Cu);
    ctx->pc = 0x2EB358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB354u;
    // 0x2eb358: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2EB354u, 0x2EB35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB35Cu;
label_2eb35c:
    // 0x2eb35c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eb35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb360: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2eb360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2eb364: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2eb364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2eb368: 0x24634128  addiu       $v1, $v1, 0x4128
    ctx->pc = 0x2eb368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16680));
    // 0x2eb36c: 0x8c4476b0  lw          $a0, 0x76B0($v0)
    ctx->pc = 0x2eb36cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7476B0u));
    // 0x2eb370: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x2eb370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2eb374: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2eb374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2eb378: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x2eb378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x2eb37c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2eb37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2eb380: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2eb380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2eb384: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2eb384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eb388: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2EB388u;
    SET_GPR_U32(ctx, 31, 0x2EB390u);
    ctx->pc = 0x2EB38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB388u;
    // 0x2eb38c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2EB388u, 0x2EB390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB390u;
label_2eb390:
    // 0x2eb390: 0x92640245  lbu         $a0, 0x245($s3)
    ctx->pc = 0x2eb390u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 581)));
    // 0x2eb394: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2eb394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2eb398: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2eb398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2eb39c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB39Cu;
    {
        const bool branch_taken_0x2eb39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb39c) {
            ctx->pc = 0x2EB3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB39Cu;
            // 0x2eb3a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB3A4u;
            goto label_2eb3a4;
        }
    }
    ctx->pc = 0x2EB3A4u;
label_2eb3a4:
    // 0x2eb3a4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2eb3a4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2eb3a8: 0x92650246  lbu         $a1, 0x246($s3)
    ctx->pc = 0x2eb3a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 582)));
    // 0x2eb3ac: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x2eb3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x2eb3b0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2eb3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2eb3b4: 0x0  nop
    ctx->pc = 0x2eb3b4u;
    // NOP
    // 0x2eb3b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2eb3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2eb3bc: 0x82620244  lb          $v0, 0x244($s3)
    ctx->pc = 0x2eb3bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x2eb3c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2eb3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2eb3c4: 0x0  nop
    ctx->pc = 0x2eb3c4u;
    // NOP
    // 0x2eb3c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2eb3c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2eb3cc: 0x8e68011c  lw          $t0, 0x11C($s3)
    ctx->pc = 0x2eb3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2eb3d0: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2eb3d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2eb3d4: 0x3812  mflo        $a3
    ctx->pc = 0x2eb3d4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2eb3d8: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2eb3d8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2eb3dc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2eb3dcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb3e0: 0x0  nop
    ctx->pc = 0x2eb3e0u;
    // NOP
    // 0x2eb3e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eb3e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eb3e8: 0x460305c3  div.s       $f23, $f0, $f3
    ctx->pc = 0x2eb3e8u;
    ctx->f[23] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2eb3ec: 0x2812  mflo        $a1
    ctx->pc = 0x2eb3ecu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2eb3f0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2eb3f0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2eb3f4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2eb3f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb3f8: 0x0  nop
    ctx->pc = 0x2eb3f8u;
    // NOP
    // 0x2eb3fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eb3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eb400: 0x46020d83  div.s       $f22, $f1, $f2
    ctx->pc = 0x2eb400u;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2eb404: 0x1012  mflo        $v0
    ctx->pc = 0x2eb404u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2eb408: 0x1810  mfhi        $v1
    ctx->pc = 0x2eb408u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2eb40c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb410: 0x0  nop
    ctx->pc = 0x2eb410u;
    // NOP
    // 0x2eb414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eb414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eb418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb41c: 0x0  nop
    ctx->pc = 0x2eb41cu;
    // NOP
    // 0x2eb420: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eb420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eb424: 0x46170642  mul.s       $f25, $f0, $f23
    ctx->pc = 0x2eb424u;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2eb428: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB428u;
    {
        const bool branch_taken_0x2eb428 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB428u;
        // 0x2eb42c: 0x46160e02  mul.s       $f24, $f1, $f22 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb428) {
            ctx->pc = 0x2EB438u;
            goto label_2eb438;
        }
    }
    ctx->pc = 0x2EB430u;
    // 0x2eb430: 0x4617ce40  add.s       $f25, $f25, $f23
    ctx->pc = 0x2eb430u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x2eb434: 0x4600bdc7  neg.s       $f23, $f23
    ctx->pc = 0x2eb434u;
    ctx->f[23] = FPU_NEG_S(ctx->f[23]);
label_2eb438:
    // 0x2eb438: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2eb438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2eb43c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2eb43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2eb440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB440u;
    {
        const bool branch_taken_0x2eb440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb440) {
            ctx->pc = 0x2EB450u;
            goto label_2eb450;
        }
    }
    ctx->pc = 0x2EB448u;
    // 0x2eb448: 0x4616c600  add.s       $f24, $f24, $f22
    ctx->pc = 0x2eb448u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x2eb44c: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x2eb44cu;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
label_2eb450:
    // 0x2eb450: 0x6a62018f  ldl         $v0, 0x18F($s3)
    ctx->pc = 0x2eb450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2eb454: 0x6e620188  ldr         $v0, 0x188($s3)
    ctx->pc = 0x2eb454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2eb458: 0x6a630197  ldl         $v1, 0x197($s3)
    ctx->pc = 0x2eb458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2eb45c: 0x6e630190  ldr         $v1, 0x190($s3)
    ctx->pc = 0x2eb45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2eb460: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2eb460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb464: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2eb464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb468: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2eb468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb46c: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2eb46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb470: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2eb470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2eb474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eb474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb478: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2eb478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eb47c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2eb47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eb480: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2eb480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2eb484: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2eb484u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2eb488: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2eb488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb48c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2eb48cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2eb490: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2eb490u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2eb494: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2eb494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2eb498: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2eb498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2eb49c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb49cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb4a0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2eb4a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2eb4a4: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2eb4a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2eb4a8: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2eb4a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2eb4ac: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2eb4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2eb4b0: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2eb4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2eb4b4: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2eb4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2eb4b8: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x2eb4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2eb4bc: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x2eb4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2eb4c0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2eb4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb4c4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2eb4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb4c8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2eb4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb4cc: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2eb4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb4d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2eb4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb4d4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2eb4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb4d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eb4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb4dc: 0x0  nop
    ctx->pc = 0x2eb4dcu;
    // NOP
    // 0x2eb4e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB4E0u;
    {
        const bool branch_taken_0x2eb4e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb4e0) {
            ctx->pc = 0x2EB4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB4E0u;
            // 0x2eb4e4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB4E8u;
            goto label_2eb4e8;
        }
    }
    ctx->pc = 0x2EB4E8u;
label_2eb4e8:
    // 0x2eb4e8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2eb4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb4ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eb4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb4f0: 0x0  nop
    ctx->pc = 0x2eb4f0u;
    // NOP
    // 0x2eb4f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB4F4u;
    {
        const bool branch_taken_0x2eb4f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb4f4) {
            ctx->pc = 0x2EB4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB4F4u;
            // 0x2eb4f8: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB4FCu;
            goto label_2eb4fc;
        }
    }
    ctx->pc = 0x2EB4FCu;
label_2eb4fc:
    // 0x2eb4fc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2eb4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb500: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eb500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb504: 0x0  nop
    ctx->pc = 0x2eb504u;
    // NOP
    // 0x2eb508: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB508u;
    {
        const bool branch_taken_0x2eb508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb508) {
            ctx->pc = 0x2EB50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB508u;
            // 0x2eb50c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB510u;
            goto label_2eb510;
        }
    }
    ctx->pc = 0x2EB510u;
label_2eb510:
    // 0x2eb510: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2eb510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb514: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eb514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb518: 0x0  nop
    ctx->pc = 0x2eb518u;
    // NOP
    // 0x2eb51c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB51Cu;
    {
        const bool branch_taken_0x2eb51c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb51c) {
            ctx->pc = 0x2EB520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB51Cu;
            // 0x2eb520: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB524u;
            goto label_2eb524;
        }
    }
    ctx->pc = 0x2EB524u;
label_2eb524:
    // 0x2eb524: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2eb524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb528: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2eb528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb52c: 0x0  nop
    ctx->pc = 0x2eb52cu;
    // NOP
    // 0x2eb530: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB530u;
    {
        const bool branch_taken_0x2eb530 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb530) {
            ctx->pc = 0x2EB534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB530u;
            // 0x2eb534: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB538u;
            goto label_2eb538;
        }
    }
    ctx->pc = 0x2EB538u;
label_2eb538:
    // 0x2eb538: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2eb538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb53c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2eb53cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb540: 0x0  nop
    ctx->pc = 0x2eb540u;
    // NOP
    // 0x2eb544: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB544u;
    {
        const bool branch_taken_0x2eb544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb544) {
            ctx->pc = 0x2EB548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB544u;
            // 0x2eb548: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB54Cu;
            goto label_2eb54c;
        }
    }
    ctx->pc = 0x2EB54Cu;
label_2eb54c:
    // 0x2eb54c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2eb54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb550: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2eb550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb554: 0x0  nop
    ctx->pc = 0x2eb554u;
    // NOP
    // 0x2eb558: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB558u;
    {
        const bool branch_taken_0x2eb558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb558) {
            ctx->pc = 0x2EB55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB558u;
            // 0x2eb55c: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB560u;
            goto label_2eb560;
        }
    }
    ctx->pc = 0x2EB560u;
label_2eb560:
    // 0x2eb560: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2eb560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb564: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2eb564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb568: 0x0  nop
    ctx->pc = 0x2eb568u;
    // NOP
    // 0x2eb56c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB56Cu;
    {
        const bool branch_taken_0x2eb56c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb56c) {
            ctx->pc = 0x2EB570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB56Cu;
            // 0x2eb570: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB574u;
            goto label_2eb574;
        }
    }
    ctx->pc = 0x2EB574u;
label_2eb574:
    // 0x2eb574: 0x8e650114  lw          $a1, 0x114($s3)
    ctx->pc = 0x2eb574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x2eb578: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EB578u;
    {
        const bool branch_taken_0x2eb578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB578u;
        // 0x2eb57c: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb578) {
            ctx->pc = 0x2EB5F4u;
            goto label_2eb5f4;
        }
    }
    ctx->pc = 0x2EB580u;
    // 0x2eb580: 0x9262011c  lbu         $v0, 0x11C($s3)
    ctx->pc = 0x2eb580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2eb584: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2eb584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2eb588: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EB588u;
    {
        const bool branch_taken_0x2eb588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb588) {
            ctx->pc = 0x2EB58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB588u;
            // 0x2eb58c: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5F8u;
            goto label_2eb5f8;
        }
    }
    ctx->pc = 0x2EB590u;
    // 0x2eb590: 0x90a202b6  lbu         $v0, 0x2B6($a1)
    ctx->pc = 0x2eb590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 694)));
    // 0x2eb594: 0x90a302b7  lbu         $v1, 0x2B7($a1)
    ctx->pc = 0x2eb594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 695)));
    // 0x2eb598: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2eb598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2eb59c: 0x0  nop
    ctx->pc = 0x2eb59cu;
    // NOP
    // 0x2eb5a0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2eb5a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2eb5a4: 0x90a402bc  lbu         $a0, 0x2BC($a1)
    ctx->pc = 0x2eb5a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 700)));
    // 0x2eb5a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2eb5a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2eb5ac: 0x0  nop
    ctx->pc = 0x2eb5acu;
    // NOP
    // 0x2eb5b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2eb5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2eb5b4: 0xc4a0024c  lwc1        $f0, 0x24C($a1)
    ctx->pc = 0x2eb5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb5b8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2eb5b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb5bc: 0x0  nop
    ctx->pc = 0x2eb5bcu;
    // NOP
    // 0x2eb5c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eb5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eb5c4: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2eb5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eb5c8: 0x0  nop
    ctx->pc = 0x2eb5c8u;
    // NOP
    // 0x2eb5cc: 0x0  nop
    ctx->pc = 0x2eb5ccu;
    // NOP
    // 0x2eb5d0: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x2eb5d0u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[5]);
    // 0x2eb5d4: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x2eb5d4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[5]);
    // 0x2eb5d8: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x2eb5d8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[5]);
    // 0x2eb5dc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2eb5dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2eb5e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2eb5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2eb5e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2eb5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2eb5e8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2eb5e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2eb5ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB5ECu;
    {
        const bool branch_taken_0x2eb5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5ECu;
        // 0x2eb5f0: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb5ec) {
            ctx->pc = 0x2EB5FCu;
            goto label_2eb5fc;
        }
    }
    ctx->pc = 0x2EB5F4u;
label_2eb5f4:
    // 0x2eb5f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2eb5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2eb5f8:
    // 0x2eb5f8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2eb5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2eb5fc:
    // 0x2eb5fc: 0x8e6202c8  lw          $v0, 0x2C8($s3)
    ctx->pc = 0x2eb5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
    // 0x2eb600: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2eb600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eb604: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2eb604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2eb608: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2eb608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb60c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2eb60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2eb610: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2eb610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb614: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eb614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2eb618: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x2eb618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2eb61c: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2eb61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eb620: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eb620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2eb624: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2eb624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2eb628: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eb628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eb62c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2eb62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eb630: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2eb630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb634: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2eb634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2eb638: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2eb638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2eb63c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x2eb63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x2eb640: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x2eb640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2eb644: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2eb644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2eb648: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eb648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eb64c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2eb64cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2eb650: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x2eb650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x2eb654: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2eb654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2eb658: 0x2624000a  addiu       $a0, $s1, 0xA
    ctx->pc = 0x2eb658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x2eb65c: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x2eb65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
    // 0x2eb660: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2eb660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2eb664: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eb664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eb668: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2EB668u;
    SET_GPR_U32(ctx, 31, 0x2EB670u);
    ctx->pc = 0x2EB66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB668u;
    // 0x2eb66c: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2EB668u, 0x2EB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB670u;
label_2eb670:
    // 0x2eb670: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x2EB670u;
    {
        const bool branch_taken_0x2eb670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB670u;
        // 0x2eb674: 0xafa20178  sw          $v0, 0x178($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb670) {
            ctx->pc = 0x2EBB88u;
            goto label_2ebb88;
        }
    }
    ctx->pc = 0x2EB678u;
    // 0x2eb678: 0x26220009  addiu       $v0, $s1, 0x9
    ctx->pc = 0x2eb678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
    // 0x2eb67c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2eb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2eb680: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2eb680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eb684: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2eb684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2eb688: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2eb688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2eb68c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2eb68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2eb690: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2eb690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2eb694: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eb694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eb698: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2eb698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2eb69c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2eb69cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2eb6a0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2eb6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2eb6a4: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x2eb6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x2eb6a8: 0x8e6302cc  lw          $v1, 0x2CC($s3)
    ctx->pc = 0x2eb6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 716)));
    // 0x2eb6ac: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EB6ACu;
    {
        const bool branch_taken_0x2eb6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6ACu;
        // 0x2eb6b0: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6ac) {
            ctx->pc = 0x2EB6FCu;
            goto label_2eb6fc;
        }
    }
    ctx->pc = 0x2EB6B4u;
    // 0x2eb6b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eb6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb6b8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB6B8u;
    {
        const bool branch_taken_0x2eb6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6B8u;
        // 0x2eb6bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6b8) {
            ctx->pc = 0x2EB6CCu;
            goto label_2eb6cc;
        }
    }
    ctx->pc = 0x2EB6C0u;
    // 0x2eb6c0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2eb6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2eb6c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EB6C4u;
    {
        const bool branch_taken_0x2eb6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6C4u;
        // 0x2eb6c8: 0xafa20174  sw          $v0, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6c4) {
            ctx->pc = 0x2EB700u;
            goto label_2eb700;
        }
    }
    ctx->pc = 0x2EB6CCu;
label_2eb6cc:
    // 0x2eb6cc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB6CCu;
    {
        const bool branch_taken_0x2eb6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6CCu;
        // 0x2eb6d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6cc) {
            ctx->pc = 0x2EB6E4u;
            goto label_2eb6e4;
        }
    }
    ctx->pc = 0x2EB6D4u;
    // 0x2eb6d4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2eb6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2eb6d8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2eb6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2eb6dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB6DCu;
    {
        const bool branch_taken_0x2eb6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6DCu;
        // 0x2eb6e0: 0xafa30174  sw          $v1, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6dc) {
            ctx->pc = 0x2EB700u;
            goto label_2eb700;
        }
    }
    ctx->pc = 0x2EB6E4u;
label_2eb6e4:
    // 0x2eb6e4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB6E4u;
    {
        const bool branch_taken_0x2eb6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6E4u;
        // 0x2eb6e8: 0x410f8  dsll        $v0, $a0, 3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6e4) {
            ctx->pc = 0x2EB704u;
            goto label_2eb704;
        }
    }
    ctx->pc = 0x2EB6ECu;
    // 0x2eb6ec: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2eb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2eb6f0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2eb6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2eb6f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EB6F4u;
    {
        const bool branch_taken_0x2eb6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6F4u;
        // 0x2eb6f8: 0xafa20174  sw          $v0, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6f4) {
            ctx->pc = 0x2EB700u;
            goto label_2eb700;
        }
    }
    ctx->pc = 0x2EB6FCu;
label_2eb6fc:
    // 0x2eb6fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb700:
    // 0x2eb700: 0x410f8  dsll        $v0, $a0, 3
    ctx->pc = 0x2eb700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 3);
label_2eb704:
    // 0x2eb704: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x2eb704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2eb708: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eb708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eb70c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2eb70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2eb710: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x2eb710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x2eb714: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x2eb714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2eb718: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x2eb718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x2eb71c: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x2eb71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x2eb720: 0xac80b7a0  sw          $zero, -0x4860($a0)
    ctx->pc = 0x2eb720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294948768), GPR_U32(ctx, 0));
    // 0x2eb724: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eb724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eb728: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2eb728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2eb72c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2eb72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2eb730: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2eb730u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2eb734: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2eb734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2eb738: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x2eb738u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x2eb73c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2eb73cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2eb740: 0xfca00010  sd          $zero, 0x10($a1)
    ctx->pc = 0x2eb740u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 0));
    // 0x2eb744: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2eb744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2eb748: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2eb748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2eb74c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB74Cu;
    {
        const bool branch_taken_0x2eb74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB74Cu;
        // 0x2eb750: 0x24b00020  addiu       $s0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb74c) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB754u;
    // 0x2eb754: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2eb754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2eb758: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2eb758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2eb75c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB75Cu;
    {
        const bool branch_taken_0x2eb75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB75Cu;
        // 0x2eb760: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb75c) {
            ctx->pc = 0x2EB770u;
            goto label_2eb770;
        }
    }
    ctx->pc = 0x2EB764u;
label_2eb764:
    // 0x2eb764: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2eb764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2eb768: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2eb768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2eb76c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x2eb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2eb770:
    // 0x2eb770: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x2eb770u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x2eb774: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x2eb774u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x2eb778: 0x24b00030  addiu       $s0, $a1, 0x30
    ctx->pc = 0x2eb778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2eb77c: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2eb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2eb780: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2eb780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x2eb784: 0x3c053a00  lui         $a1, 0x3A00
    ctx->pc = 0x2eb784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14848 << 16));
    // 0x2eb788: 0x34a500f8  ori         $a1, $a1, 0xF8
    ctx->pc = 0x2eb788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)248);
    // 0x2eb78c: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2eb78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2eb790: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2eb790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2eb794: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x2eb794u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x2eb798: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2eb798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2eb79c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eb79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eb7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eb7a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2eb7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2eb7a8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2eb7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2eb7ac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2eb7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2eb7b0: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2EB7B0u;
    SET_GPR_U32(ctx, 31, 0x2EB7B8u);
    ctx->pc = 0x2EB7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7B0u;
    // 0x2eb7b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2EB7B0u, 0x2EB7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7B8u;
label_2eb7b8:
    // 0x2eb7b8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2eb7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2eb7bc: 0x268464a0  addiu       $a0, $s4, 0x64A0
    ctx->pc = 0x2eb7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25760));
    // 0x2eb7c0: 0xc0544da  jal         func_151368
    ctx->pc = 0x2EB7C0u;
    SET_GPR_U32(ctx, 31, 0x2EB7C8u);
    ctx->pc = 0x2EB7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7C0u;
    // 0x2eb7c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2EB7C0u, 0x2EB7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7C8u;
label_2eb7c8:
    // 0x2eb7c8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2eb7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eb7cc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2eb7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2eb7d0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x2eb7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x2eb7d4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2eb7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2eb7d8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2eb7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2eb7dc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2eb7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2eb7e0: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x2eb7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2eb7e4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2eb7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2eb7e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2eb7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2eb7ec: 0x8c86b7a0  lw          $a2, -0x4860($a0)
    ctx->pc = 0x2eb7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948768)));
    // 0x2eb7f0: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2eb7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eb7f4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB7F4u;
    {
        const bool branch_taken_0x2eb7f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F4u;
        // 0x2eb7f8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7f4) {
            ctx->pc = 0x2EB808u;
            goto label_2eb808;
        }
    }
    ctx->pc = 0x2EB7FCu;
    // 0x2eb7fc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2eb7fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2eb800: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2eb800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2eb804: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x2eb804u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_2eb808:
    // 0x2eb808: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2eb808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2eb80c: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x2eb80cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x2eb810: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2eb810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2eb814: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2eb814u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb818: 0x8fb40170  lw          $s4, 0x170($sp)
    ctx->pc = 0x2eb818u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2eb81c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2eb81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2eb820: 0x8e6302c8  lw          $v1, 0x2C8($s3)
    ctx->pc = 0x2eb820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
    // 0x2eb824: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2eb824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2eb828: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2EB828u;
    {
        const bool branch_taken_0x2eb828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB828u;
        // 0x2eb82c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb828) {
            ctx->pc = 0x2EBB28u;
            goto label_2ebb28;
        }
    }
    ctx->pc = 0x2EB830u;
    // 0x2eb830: 0x8e6402c8  lw          $a0, 0x2C8($s3)
    ctx->pc = 0x2eb830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
    // 0x2eb834: 0x0  nop
    ctx->pc = 0x2eb834u;
    // NOP
label_2eb838:
    // 0x2eb838: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x2eb838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2eb83c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2eb83cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb840: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eb840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb844: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2EB844u;
    {
        const bool branch_taken_0x2eb844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB844u;
        // 0x2eb848: 0xafa5017c  sw          $a1, 0x17C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb844) {
            ctx->pc = 0x2EBB10u;
            goto label_2ebb10;
        }
    }
    ctx->pc = 0x2EB84Cu;
    // 0x2eb84c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x2eb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2eb850: 0x26d70002  addiu       $s7, $s6, 0x2
    ctx->pc = 0x2eb850u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x2eb854: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x2eb854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2eb858: 0x2d7482b  sltu        $t1, $s6, $s7
    ctx->pc = 0x2eb858u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2eb85c: 0x31238  dsll        $v0, $v1, 8
    ctx->pc = 0x2eb85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 8);
    // 0x2eb860: 0xa25025  or          $t2, $a1, $v0
    ctx->pc = 0x2eb860u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2eb864: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2eb864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2eb868: 0x24438  dsll        $t0, $v0, 16
    ctx->pc = 0x2eb868u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 16);
    // 0x2eb86c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x2eb86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2eb870:
    // 0x2eb870: 0x112000a3  beqz        $t1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2EB870u;
    {
        const bool branch_taken_0x2eb870 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB870u;
        // 0x2eb874: 0x26470001  addiu       $a3, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb870) {
            ctx->pc = 0x2EBB00u;
            goto label_2ebb00;
        }
    }
    ctx->pc = 0x2EB878u;
    // 0x2eb878: 0x148f025  or          $fp, $t2, $t0
    ctx->pc = 0x2eb878u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x2eb87c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2eb87cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb880: 0x240c000d  addiu       $t4, $zero, 0xD
    ctx->pc = 0x2eb880u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2eb884: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x2eb884u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2eb888:
    // 0x2eb888: 0x8e6202cc  lw          $v0, 0x2CC($s3)
    ctx->pc = 0x2eb888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 716)));
    // 0x2eb88c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EB88Cu;
    {
        const bool branch_taken_0x2eb88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb88c) {
            ctx->pc = 0x2EB8E0u;
            goto label_2eb8e0;
        }
    }
    ctx->pc = 0x2EB894u;
    // 0x2eb894: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB894u;
    {
        const bool branch_taken_0x2eb894 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB894u;
        // 0x2eb898: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb894) {
            ctx->pc = 0x2EB8B4u;
            goto label_2eb8b4;
        }
    }
    ctx->pc = 0x2EB89Cu;
    // 0x2eb89c: 0x52420010  beql        $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EB89Cu;
    {
        const bool branch_taken_0x2eb89c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb89c) {
            ctx->pc = 0x2EB8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB89Cu;
            // 0x2eb8a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB8E0u;
            goto label_2eb8e0;
        }
    }
    ctx->pc = 0x2EB8A4u;
    // 0x2eb8a4: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2EB8A4u;
    {
        const bool branch_taken_0x2eb8a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8a4) {
            ctx->pc = 0x2EB8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB8A4u;
            // 0x2eb8a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB8E0u;
            goto label_2eb8e0;
        }
    }
    ctx->pc = 0x2EB8ACu;
    // 0x2eb8ac: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB8ACu;
    {
        const bool branch_taken_0x2eb8ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8ACu;
        // 0x2eb8b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8ac) {
            ctx->pc = 0x2EB8BCu;
            goto label_2eb8bc;
        }
    }
    ctx->pc = 0x2EB8B4u;
label_2eb8b4:
    // 0x2eb8b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EB8B4u;
    {
        const bool branch_taken_0x2eb8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8B4u;
        // 0x2eb8b8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8b4) {
            ctx->pc = 0x2EB8E0u;
            goto label_2eb8e0;
        }
    }
    ctx->pc = 0x2EB8BCu;
label_2eb8bc:
    // 0x2eb8bc: 0x12430007  beq         $s2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB8BCu;
    {
        const bool branch_taken_0x2eb8bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8BCu;
        // 0x2eb8c0: 0x2482fffe  addiu       $v0, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8bc) {
            ctx->pc = 0x2EB8DCu;
            goto label_2eb8dc;
        }
    }
    ctx->pc = 0x2EB8C4u;
    // 0x2eb8c4: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB8C4u;
    {
        const bool branch_taken_0x2eb8c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8C4u;
        // 0x2eb8c8: 0x8fb40174  lw          $s4, 0x174($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8c4) {
            ctx->pc = 0x2EB8E0u;
            goto label_2eb8e0;
        }
    }
    ctx->pc = 0x2EB8CCu;
    // 0x2eb8cc: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB8CCu;
    {
        const bool branch_taken_0x2eb8cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb8cc) {
            ctx->pc = 0x2EB8E0u;
            goto label_2eb8e0;
        }
    }
    ctx->pc = 0x2EB8D4u;
    // 0x2eb8d4: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EB8D4u;
    {
        const bool branch_taken_0x2eb8d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8D4u;
        // 0x2eb8d8: 0x8fb40170  lw          $s4, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8d4) {
            ctx->pc = 0x2EB8E0u;
            goto label_2eb8e0;
        }
    }
    ctx->pc = 0x2EB8DCu;
label_2eb8dc:
    // 0x2eb8dc: 0x8fb40174  lw          $s4, 0x174($sp)
    ctx->pc = 0x2eb8dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_2eb8e0:
    // 0x2eb8e0: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB8E0u;
    {
        const bool branch_taken_0x2eb8e0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x2EB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8E0u;
        // 0x2eb8e4: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8e0) {
            ctx->pc = 0x2EB8FCu;
            goto label_2eb8fc;
        }
    }
    ctx->pc = 0x2EB8E8u;
    // 0x2eb8e8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2eb8e8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb8ec: 0x0  nop
    ctx->pc = 0x2eb8ecu;
    // NOP
    // 0x2eb8f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eb8f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eb8f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB8F4u;
    {
        const bool branch_taken_0x2eb8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8f4) {
            ctx->pc = 0x2EB91Cu;
            goto label_2eb91c;
        }
    }
    ctx->pc = 0x2EB8FCu;
label_2eb8fc:
    // 0x2eb8fc: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x2eb8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2eb900: 0x121042  srl         $v0, $s2, 1
    ctx->pc = 0x2eb900u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x2eb904: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eb904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eb908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb90c: 0x0  nop
    ctx->pc = 0x2eb90cu;
    // NOP
    // 0x2eb910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eb910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eb914: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2eb914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2eb918: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2eb918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2eb91c:
    // 0x2eb91c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB91Cu;
    {
        const bool branch_taken_0x2eb91c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2EB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB91Cu;
        // 0x2eb920: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb91c) {
            ctx->pc = 0x2EB938u;
            goto label_2eb938;
        }
    }
    ctx->pc = 0x2EB924u;
    // 0x2eb924: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2eb924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb928: 0x0  nop
    ctx->pc = 0x2eb928u;
    // NOP
    // 0x2eb92c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2eb92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2eb930: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB930u;
    {
        const bool branch_taken_0x2eb930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb930) {
            ctx->pc = 0x2EB950u;
            goto label_2eb950;
        }
    }
    ctx->pc = 0x2EB938u;
label_2eb938:
    // 0x2eb938: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eb93c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eb93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eb940: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2eb940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb944: 0x0  nop
    ctx->pc = 0x2eb944u;
    // NOP
    // 0x2eb948: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2eb948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2eb94c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2eb94cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2eb950:
    // 0x2eb950: 0x0  nop
    ctx->pc = 0x2eb950u;
    // NOP
    // 0x2eb954: 0x0  nop
    ctx->pc = 0x2eb954u;
    // NOP
    // 0x2eb958: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2eb958u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[12]);
    // 0x2eb95c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB95Cu;
    {
        const bool branch_taken_0x2eb95c = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x2EB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB95Cu;
        // 0x2eb960: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb95c) {
            ctx->pc = 0x2EB978u;
            goto label_2eb978;
        }
    }
    ctx->pc = 0x2EB964u;
    // 0x2eb964: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2eb964u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb968: 0x0  nop
    ctx->pc = 0x2eb968u;
    // NOP
    // 0x2eb96c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eb96cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eb970: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB970u;
    {
        const bool branch_taken_0x2eb970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB970u;
        // 0x2eb974: 0x8e6202c8  lw          $v0, 0x2C8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb970) {
            ctx->pc = 0x2EB994u;
            goto label_2eb994;
        }
    }
    ctx->pc = 0x2EB978u;
label_2eb978:
    // 0x2eb978: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x2eb978u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2eb97c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eb97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eb980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb984: 0x0  nop
    ctx->pc = 0x2eb984u;
    // NOP
    // 0x2eb988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eb988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eb98c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2eb98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2eb990: 0x8e6202c8  lw          $v0, 0x2C8($s3)
    ctx->pc = 0x2eb990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_2eb994:
    // 0x2eb994: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2eb994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2eb998: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB998u;
    {
        const bool branch_taken_0x2eb998 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2EB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB998u;
        // 0x2eb99c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb998) {
            ctx->pc = 0x2EB9B4u;
            goto label_2eb9b4;
        }
    }
    ctx->pc = 0x2EB9A0u;
    // 0x2eb9a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eb9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb9a4: 0x0  nop
    ctx->pc = 0x2eb9a4u;
    // NOP
    // 0x2eb9a8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2eb9a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2eb9ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB9ACu;
    {
        const bool branch_taken_0x2eb9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb9ac) {
            ctx->pc = 0x2EB9CCu;
            goto label_2eb9cc;
        }
    }
    ctx->pc = 0x2EB9B4u;
label_2eb9b4:
    // 0x2eb9b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eb9b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eb9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eb9bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eb9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb9c0: 0x0  nop
    ctx->pc = 0x2eb9c0u;
    // NOP
    // 0x2eb9c4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2eb9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2eb9c8: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2eb9c8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_2eb9cc:
    // 0x2eb9cc: 0x0  nop
    ctx->pc = 0x2eb9ccu;
    // NOP
    // 0x2eb9d0: 0x0  nop
    ctx->pc = 0x2eb9d0u;
    // NOP
    // 0x2eb9d4: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x2eb9d4u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[13]);
    // 0x2eb9d8: 0xc66102b4  lwc1        $f1, 0x2B4($s3)
    ctx->pc = 0x2eb9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb9dc: 0x460cbd42  mul.s       $f21, $f23, $f12
    ctx->pc = 0x2eb9dcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[12]);
    // 0x2eb9e0: 0xc66002b0  lwc1        $f0, 0x2B0($s3)
    ctx->pc = 0x2eb9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb9e4: 0xc66202b8  lwc1        $f2, 0x2B8($s3)
    ctx->pc = 0x2eb9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eb9e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eb9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9ec: 0xc66302bc  lwc1        $f3, 0x2BC($s3)
    ctx->pc = 0x2eb9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eb9f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2eb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2eb9f4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2eb9f4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2eb9f8: 0x7fa70180  sq          $a3, 0x180($sp)
    ctx->pc = 0x2eb9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 7));
    // 0x2eb9fc: 0x7fa80190  sq          $t0, 0x190($sp)
    ctx->pc = 0x2eb9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 8));
    // 0x2eba00: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2eba00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2eba04: 0x460db502  mul.s       $f20, $f22, $f13
    ctx->pc = 0x2eba04u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[13]);
    // 0x2eba08: 0x7fa901a0  sq          $t1, 0x1A0($sp)
    ctx->pc = 0x2eba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 9));
    // 0x2eba0c: 0x4615cd40  add.s       $f21, $f25, $f21
    ctx->pc = 0x2eba0cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[25], ctx->f[21]);
    // 0x2eba10: 0x7faa01b0  sq          $t2, 0x1B0($sp)
    ctx->pc = 0x2eba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 10));
    // 0x2eba14: 0x7fab01c0  sq          $t3, 0x1C0($sp)
    ctx->pc = 0x2eba14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 11));
    // 0x2eba18: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x2eba18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2eba1c: 0x7fac01d0  sq          $t4, 0x1D0($sp)
    ctx->pc = 0x2eba1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 12));
    // 0x2eba20: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x2eba20u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2eba24: 0x7fad01e0  sq          $t5, 0x1E0($sp)
    ctx->pc = 0x2eba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 13));
    // 0x2eba28: 0x4614c500  add.s       $f20, $f24, $f20
    ctx->pc = 0x2eba28u;
    ctx->f[20] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
    // 0x2eba2c: 0xc0baaaa  jal         func_2EAAA8
    ctx->pc = 0x2EBA2Cu;
    SET_GPR_U32(ctx, 31, 0x2EBA34u);
    ctx->pc = 0x2EBA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA2Cu;
    // 0x2eba30: 0x4603a500  add.s       $f20, $f20, $f3 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAAA8u, 0x2EBA2Cu, 0x2EBA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA34u;
label_2eba34:
    // 0x2eba34: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x2eba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eba38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2eba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eba3c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x2eba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x2eba40: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x2eba40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2eba44: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2eba44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2eba48: 0x36a30001  ori         $v1, $s5, 0x1
    ctx->pc = 0x2eba48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
    // 0x2eba4c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2eba4cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2eba50: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x2eba50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x2eba54: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2eba54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2eba58: 0x32a30007  andi        $v1, $s5, 0x7
    ctx->pc = 0x2eba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x2eba5c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2eba5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2eba60: 0x3c42025  or          $a0, $fp, $a0
    ctx->pc = 0x2eba60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) | GPR_U64(ctx, 4));
    // 0x2eba64: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x2eba64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2eba68: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2eba68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2eba6c: 0x9fa20130  lwu         $v0, 0x130($sp)
    ctx->pc = 0x2eba6cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2eba70: 0x7bad01e0  lq          $t5, 0x1E0($sp)
    ctx->pc = 0x2eba70u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2eba74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eba78: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2eba78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2eba7c: 0xfe0d0008  sd          $t5, 0x8($s0)
    ctx->pc = 0x2eba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 13));
    // 0x2eba80: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x2eba80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x2eba84: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2eba84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2eba88: 0x7ba70180  lq          $a3, 0x180($sp)
    ctx->pc = 0x2eba88u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2eba8c: 0x7ba80190  lq          $t0, 0x190($sp)
    ctx->pc = 0x2eba8cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2eba90: 0x7ba901a0  lq          $t1, 0x1A0($sp)
    ctx->pc = 0x2eba90u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2eba94: 0x7baa01b0  lq          $t2, 0x1B0($sp)
    ctx->pc = 0x2eba94u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2eba98: 0x7bab01c0  lq          $t3, 0x1C0($sp)
    ctx->pc = 0x2eba98u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2eba9c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBA9Cu;
    {
        const bool branch_taken_0x2eba9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA9Cu;
        // 0x2ebaa0: 0x7bac01d0  lq          $t4, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba9c) {
            ctx->pc = 0x2EBAC0u;
            goto label_2ebac0;
        }
    }
    ctx->pc = 0x2EBAA4u;
    // 0x2ebaa4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2ebaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2ebaa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ebaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebaac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ebaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebab0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ebab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ebab4: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2ebab4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2ebab8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBAB8u;
    {
        const bool branch_taken_0x2ebab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAB8u;
        // 0x2ebabc: 0xfe0c0008  sd          $t4, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebab8) {
            ctx->pc = 0x2EBAD8u;
            goto label_2ebad8;
        }
    }
    ctx->pc = 0x2EBAC0u;
label_2ebac0:
    // 0x2ebac0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2ebac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2ebac4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ebac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebac8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ebac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebacc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ebaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ebad0: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2ebad0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2ebad4: 0xfe0b0008  sd          $t3, 0x8($s0)
    ctx->pc = 0x2ebad4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
label_2ebad8:
    // 0x2ebad8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2ebad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ebadc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ebadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ebae0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ebae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ebae4: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x2ebae4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x2ebae8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2ebae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2ebaec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ebaecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ebaf0: 0x15a840  sll         $s5, $s5, 1
    ctx->pc = 0x2ebaf0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x2ebaf4: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x2ebaf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2ebaf8: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x2EBAF8u;
    {
        const bool branch_taken_0x2ebaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAF8u;
        // 0x2ebafc: 0x8e6402c8  lw          $a0, 0x2C8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebaf8) {
            ctx->pc = 0x2EB888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb888;
        }
    }
    ctx->pc = 0x2EBB00u;
label_2ebb00:
    // 0x2ebb00: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ebb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb04: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x2ebb04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ebb08: 0x5440ff59  bnel        $v0, $zero, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x2EBB08u;
    {
        const bool branch_taken_0x2ebb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebb08) {
            ctx->pc = 0x2EBB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBB08u;
            // 0x2ebb0c: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb870;
        }
    }
    ctx->pc = 0x2EBB10u;
label_2ebb10:
    // 0x2ebb10: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2ebb10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb14: 0x8fb6017c  lw          $s6, 0x17C($sp)
    ctx->pc = 0x2ebb14u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x2ebb18: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2ebb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ebb1c: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x2ebb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ebb20: 0x5440ff45  bnel        $v0, $zero, . + 4 + (-0xBB << 2)
    ctx->pc = 0x2EBB20u;
    {
        const bool branch_taken_0x2ebb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebb20) {
            ctx->pc = 0x2EBB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBB20u;
            // 0x2ebb24: 0x8e6402c8  lw          $a0, 0x2C8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb838;
        }
    }
    ctx->pc = 0x2EBB28u;
label_2ebb28:
    // 0x2ebb28: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2ebb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2ebb2c: 0x8c64b7a0  lw          $a0, -0x4860($v1)
    ctx->pc = 0x2ebb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61B7A0u));
    // 0x2ebb30: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBB30u;
    {
        const bool branch_taken_0x2ebb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB30u;
        // 0x2ebb34: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb30) {
            ctx->pc = 0x2EBB44u;
            goto label_2ebb44;
        }
    }
    ctx->pc = 0x2EBB38u;
    // 0x2ebb38: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2ebb38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ebb3c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2ebb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2ebb40: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2ebb40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2ebb44:
    // 0x2ebb44: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ebb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ebb48: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2ebb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2ebb4c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x2ebb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x2ebb50: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2ebb50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2ebb54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ebb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb58: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2ebb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2ebb5c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2ebb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ebb60: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2ebb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2ebb64: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x2ebb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x2ebb68: 0x346300f8  ori         $v1, $v1, 0xF8
    ctx->pc = 0x2ebb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)248);
    // 0x2ebb6c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2ebb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2ebb70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ebb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb74: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2ebb74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2ebb78: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2ebb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2ebb7c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2ebb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x2ebb80: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2EBB80u;
    SET_GPR_U32(ctx, 31, 0x2EBB88u);
    ctx->pc = 0x2EBB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB80u;
    // 0x2ebb84: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2EBB80u, 0x2EBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB88u;
label_2ebb88:
    // 0x2ebb88: 0x7bb00280  lq          $s0, 0x280($sp)
    ctx->pc = 0x2ebb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2ebb8c:
    // 0x2ebb8c: 0x7bb10270  lq          $s1, 0x270($sp)
    ctx->pc = 0x2ebb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_2ebb90:
    // 0x2ebb90: 0x7bb20260  lq          $s2, 0x260($sp)
    ctx->pc = 0x2ebb90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2ebb94: 0x7bb30250  lq          $s3, 0x250($sp)
    ctx->pc = 0x2ebb94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2ebb98: 0x7bb40240  lq          $s4, 0x240($sp)
    ctx->pc = 0x2ebb98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2ebb9c: 0x7bb50230  lq          $s5, 0x230($sp)
    ctx->pc = 0x2ebb9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2ebba0: 0x7bb60220  lq          $s6, 0x220($sp)
    ctx->pc = 0x2ebba0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2ebba4: 0x7bb70210  lq          $s7, 0x210($sp)
    ctx->pc = 0x2ebba4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2ebba8: 0x7bbe0200  lq          $fp, 0x200($sp)
    ctx->pc = 0x2ebba8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2ebbac: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x2ebbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2ebbb0: 0xc7b902b8  lwc1        $f25, 0x2B8($sp)
    ctx->pc = 0x2ebbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2ebbb4: 0xc7b802b0  lwc1        $f24, 0x2B0($sp)
    ctx->pc = 0x2ebbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2ebbb8: 0xc7b702a8  lwc1        $f23, 0x2A8($sp)
    ctx->pc = 0x2ebbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ebbbc: 0xc7b602a0  lwc1        $f22, 0x2A0($sp)
    ctx->pc = 0x2ebbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ebbc0: 0xc7b50298  lwc1        $f21, 0x298($sp)
    ctx->pc = 0x2ebbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ebbc4: 0xc7b40290  lwc1        $f20, 0x290($sp)
    ctx->pc = 0x2ebbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ebbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBC8u;
        // 0x2ebbcc: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBBD0u;
}
