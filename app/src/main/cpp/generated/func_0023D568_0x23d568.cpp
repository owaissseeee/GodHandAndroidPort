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

// Function: func_0023D568
// Address: 0x23d568 - 0x23d7d0
void func_0023D568_0x23d568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023D568_0x23d568");
#endif

    switch (ctx->pc) {
        case 0x23d638u: goto label_23d638;
        case 0x23d658u: goto label_23d658;
        case 0x23d66cu: goto label_23d66c;
        case 0x23d68cu: goto label_23d68c;
        case 0x23d698u: goto label_23d698;
        case 0x23d720u: goto label_23d720;
        case 0x23d740u: goto label_23d740;
        case 0x23d754u: goto label_23d754;
        case 0x23d768u: goto label_23d768;
        case 0x23d770u: goto label_23d770;
        case 0x23d78cu: goto label_23d78c;
        case 0x23d798u: goto label_23d798;
        default: break;
    }

    ctx->pc = 0x23d568u;

    // 0x23d568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23d568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23d56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d570: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23d570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23d574: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23d574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23d578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d57c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23d57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23d580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d584: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x23d584u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23d588: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23d588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23d58c: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23D58Cu;
    {
        const bool branch_taken_0x23d58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D58Cu;
        // 0x23d590: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d58c) {
            ctx->pc = 0x23D664u;
            goto label_23d664;
        }
    }
    ctx->pc = 0x23D594u;
    // 0x23d594: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D594u;
    {
        const bool branch_taken_0x23d594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D594u;
        // 0x23d598: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d594) {
            ctx->pc = 0x23D5ACu;
            goto label_23d5ac;
        }
    }
    ctx->pc = 0x23D59Cu;
    // 0x23d59c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D59Cu;
    {
        const bool branch_taken_0x23d59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d59c) {
            ctx->pc = 0x23D5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D59Cu;
            // 0x23d5a0: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D5C4u;
            goto label_23d5c4;
        }
    }
    ctx->pc = 0x23D5A4u;
    // 0x23d5a4: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x23D5A4u;
    {
        const bool branch_taken_0x23d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5A4u;
        // 0x23d5a8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5a4) {
            ctx->pc = 0x23D79Cu;
            goto label_23d79c;
        }
    }
    ctx->pc = 0x23D5ACu;
label_23d5ac:
    // 0x23d5ac: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x23D5ACu;
    {
        const bool branch_taken_0x23d5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5ACu;
        // 0x23d5b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5ac) {
            ctx->pc = 0x23D6ACu;
            goto label_23d6ac;
        }
    }
    ctx->pc = 0x23D5B4u;
    // 0x23d5b4: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x23D5B4u;
    {
        const bool branch_taken_0x23d5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d5b4) {
            ctx->pc = 0x23D74Cu;
            goto label_23d74c;
        }
    }
    ctx->pc = 0x23D5BCu;
    // 0x23d5bc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x23D5BCu;
    {
        const bool branch_taken_0x23d5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5BCu;
        // 0x23d5c0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5bc) {
            ctx->pc = 0x23D79Cu;
            goto label_23d79c;
        }
    }
    ctx->pc = 0x23D5C4u;
label_23d5c4:
    // 0x23d5c4: 0x28620248  slti        $v0, $v1, 0x248
    ctx->pc = 0x23d5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)584) ? 1 : 0);
    // 0x23d5c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23D5C8u;
    {
        const bool branch_taken_0x23d5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5C8u;
        // 0x23d5cc: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5c8) {
            ctx->pc = 0x23D5F8u;
            goto label_23d5f8;
        }
    }
    ctx->pc = 0x23D5D0u;
    // 0x23d5d0: 0x28620245  slti        $v0, $v1, 0x245
    ctx->pc = 0x23d5d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
    // 0x23d5d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23D5D4u;
    {
        const bool branch_taken_0x23d5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5D4u;
        // 0x23d5d8: 0x2862020a  slti        $v0, $v1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)522) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5d4) {
            ctx->pc = 0x23D61Cu;
            goto label_23d61c;
        }
    }
    ctx->pc = 0x23D5DCu;
    // 0x23d5dc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D5DCu;
    {
        const bool branch_taken_0x23d5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d5dc) {
            ctx->pc = 0x23D5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5DCu;
            // 0x23d5e0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D620u;
            goto label_23d620;
        }
    }
    ctx->pc = 0x23D5E4u;
    // 0x23d5e4: 0x2862020f  slti        $v0, $v1, 0x20F
    ctx->pc = 0x23d5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
    // 0x23d5e8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23D5E8u;
    {
        const bool branch_taken_0x23d5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d5e8) {
            ctx->pc = 0x23D5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5E8u;
            // 0x23d5ec: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D61Cu;
            goto label_23d61c;
        }
    }
    ctx->pc = 0x23D5F0u;
    // 0x23d5f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23D5F0u;
    {
        const bool branch_taken_0x23d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5F0u;
        // 0x23d5f4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5f0) {
            ctx->pc = 0x23D620u;
            goto label_23d620;
        }
    }
    ctx->pc = 0x23D5F8u;
label_23d5f8:
    // 0x23d5f8: 0x2862024f  slti        $v0, $v1, 0x24F
    ctx->pc = 0x23d5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)591) ? 1 : 0);
    // 0x23d5fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D5FCu;
    {
        const bool branch_taken_0x23d5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d5fc) {
            ctx->pc = 0x23D600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5FCu;
            // 0x23d600: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D620u;
            goto label_23d620;
        }
    }
    ctx->pc = 0x23D604u;
    // 0x23d604: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x23d604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x23d608: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D608u;
    {
        const bool branch_taken_0x23d608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d608) {
            ctx->pc = 0x23D60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D608u;
            // 0x23d60c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D620u;
            goto label_23d620;
        }
    }
    ctx->pc = 0x23D610u;
    // 0x23d610: 0x2862027a  slti        $v0, $v1, 0x27A
    ctx->pc = 0x23d610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)634) ? 1 : 0);
    // 0x23d614: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D614u;
    {
        const bool branch_taken_0x23d614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d614) {
            ctx->pc = 0x23D618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D614u;
            // 0x23d618: 0x28620278  slti        $v0, $v1, 0x278 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)632) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D61Cu;
            goto label_23d61c;
        }
    }
    ctx->pc = 0x23D61Cu;
label_23d61c:
    // 0x23d61c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_23d620:
    // 0x23d620: 0x8c430c2c  lw          $v1, 0xC2C($v0)
    ctx->pc = 0x23d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3116)));
    // 0x23d624: 0x8c440c30  lw          $a0, 0xC30($v0)
    ctx->pc = 0x23d624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3120)));
    // 0x23d628: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23d628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d62c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23d62cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23d630: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23D630u;
    SET_GPR_U32(ctx, 31, 0x23D638u);
    ctx->pc = 0x23D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D630u;
    // 0x23d634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23D630u, 0x23D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D638u;
label_23d638:
    // 0x23d638: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23d638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d63c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23d63cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23d640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23d640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d644: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d64c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23d64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23d650: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23D650u;
    SET_GPR_U32(ctx, 31, 0x23D658u);
    ctx->pc = 0x23D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D650u;
    // 0x23d654: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23D650u, 0x23D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D658u;
label_23d658:
    // 0x23d658: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23d658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23d65c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d660: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23d660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23d664:
    // 0x23d664: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23D664u;
    SET_GPR_U32(ctx, 31, 0x23D66Cu);
    ctx->pc = 0x23D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D664u;
    // 0x23d668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23D664u, 0x23D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D66Cu;
label_23d66c:
    // 0x23d66c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D66Cu;
    {
        const bool branch_taken_0x23d66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D66Cu;
        // 0x23d670: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d66c) {
            ctx->pc = 0x23D678u;
            goto label_23d678;
        }
    }
    ctx->pc = 0x23D674u;
    // 0x23d674: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23d674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23d678:
    // 0x23d678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23d678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23d67c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23d67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23d680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d684: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23D684u;
    SET_GPR_U32(ctx, 31, 0x23D68Cu);
    ctx->pc = 0x23D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D684u;
    // 0x23d688: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23D684u, 0x23D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D68Cu;
label_23d68c:
    // 0x23d68c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23d68cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23d690: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23D690u;
    SET_GPR_U32(ctx, 31, 0x23D698u);
    ctx->pc = 0x23D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D690u;
    // 0x23d694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23D690u, 0x23D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D698u;
label_23d698:
    // 0x23d698: 0x8e0216ec  lw          $v0, 0x16EC($s0)
    ctx->pc = 0x23d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
    // 0x23d69c: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x23D69Cu;
    {
        const bool branch_taken_0x23d69c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D69Cu;
        // 0x23d6a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d69c) {
            ctx->pc = 0x23D798u;
            goto label_23d798;
        }
    }
    ctx->pc = 0x23D6A4u;
    // 0x23d6a4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x23D6A4u;
    {
        const bool branch_taken_0x23d6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6A4u;
        // 0x23d6a8: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6a4) {
            ctx->pc = 0x23D798u;
            goto label_23d798;
        }
    }
    ctx->pc = 0x23D6ACu;
label_23d6ac:
    // 0x23d6ac: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x23d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x23d6b0: 0x28620248  slti        $v0, $v1, 0x248
    ctx->pc = 0x23d6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)584) ? 1 : 0);
    // 0x23d6b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23D6B4u;
    {
        const bool branch_taken_0x23d6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6B4u;
        // 0x23d6b8: 0x28620245  slti        $v0, $v1, 0x245 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6b4) {
            ctx->pc = 0x23D6E0u;
            goto label_23d6e0;
        }
    }
    ctx->pc = 0x23D6BCu;
    // 0x23d6bc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23D6BCu;
    {
        const bool branch_taken_0x23d6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6BCu;
        // 0x23d6c0: 0x2862020a  slti        $v0, $v1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)522) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6bc) {
            ctx->pc = 0x23D704u;
            goto label_23d704;
        }
    }
    ctx->pc = 0x23D6C4u;
    // 0x23d6c4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D6C4u;
    {
        const bool branch_taken_0x23d6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d6c4) {
            ctx->pc = 0x23D6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D6C4u;
            // 0x23d6c8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D708u;
            goto label_23d708;
        }
    }
    ctx->pc = 0x23D6CCu;
    // 0x23d6cc: 0x2862020f  slti        $v0, $v1, 0x20F
    ctx->pc = 0x23d6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
    // 0x23d6d0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23D6D0u;
    {
        const bool branch_taken_0x23d6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d6d0) {
            ctx->pc = 0x23D6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D6D0u;
            // 0x23d6d4: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D704u;
            goto label_23d704;
        }
    }
    ctx->pc = 0x23D6D8u;
    // 0x23d6d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23D6D8u;
    {
        const bool branch_taken_0x23d6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6D8u;
        // 0x23d6dc: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6d8) {
            ctx->pc = 0x23D708u;
            goto label_23d708;
        }
    }
    ctx->pc = 0x23D6E0u;
label_23d6e0:
    // 0x23d6e0: 0x2862024f  slti        $v0, $v1, 0x24F
    ctx->pc = 0x23d6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)591) ? 1 : 0);
    // 0x23d6e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D6E4u;
    {
        const bool branch_taken_0x23d6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d6e4) {
            ctx->pc = 0x23D6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D6E4u;
            // 0x23d6e8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D708u;
            goto label_23d708;
        }
    }
    ctx->pc = 0x23D6ECu;
    // 0x23d6ec: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x23d6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x23d6f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D6F0u;
    {
        const bool branch_taken_0x23d6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d6f0) {
            ctx->pc = 0x23D6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D6F0u;
            // 0x23d6f4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D708u;
            goto label_23d708;
        }
    }
    ctx->pc = 0x23D6F8u;
    // 0x23d6f8: 0x2862027a  slti        $v0, $v1, 0x27A
    ctx->pc = 0x23d6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)634) ? 1 : 0);
    // 0x23d6fc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D6FCu;
    {
        const bool branch_taken_0x23d6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d6fc) {
            ctx->pc = 0x23D700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D6FCu;
            // 0x23d700: 0x28620278  slti        $v0, $v1, 0x278 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)632) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D704u;
            goto label_23d704;
        }
    }
    ctx->pc = 0x23D704u;
label_23d704:
    // 0x23d704: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_23d708:
    // 0x23d708: 0x8c430c34  lw          $v1, 0xC34($v0)
    ctx->pc = 0x23d708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3124)));
    // 0x23d70c: 0x8c440c38  lw          $a0, 0xC38($v0)
    ctx->pc = 0x23d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3128)));
    // 0x23d710: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23d710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d714: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23d714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23d718: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23D718u;
    SET_GPR_U32(ctx, 31, 0x23D720u);
    ctx->pc = 0x23D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D718u;
    // 0x23d71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23D718u, 0x23D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D720u;
label_23d720:
    // 0x23d720: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23d720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d724: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23d724u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23d728: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23d728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d72c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d734: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23d734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23d738: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23D738u;
    SET_GPR_U32(ctx, 31, 0x23D740u);
    ctx->pc = 0x23D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D738u;
    // 0x23d73c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23D738u, 0x23D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D740u;
label_23d740:
    // 0x23d740: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23d740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23d744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d748: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23d748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23d74c:
    // 0x23d74c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23D74Cu;
    SET_GPR_U32(ctx, 31, 0x23D754u);
    ctx->pc = 0x23D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D74Cu;
    // 0x23d750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23D74Cu, 0x23D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D754u;
label_23d754:
    // 0x23d754: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D754u;
    {
        const bool branch_taken_0x23d754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D754u;
        // 0x23d758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d754) {
            ctx->pc = 0x23D778u;
            goto label_23d778;
        }
    }
    ctx->pc = 0x23D75Cu;
    // 0x23d75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d760: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x23D760u;
    SET_GPR_U32(ctx, 31, 0x23D768u);
    ctx->pc = 0x23D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D760u;
    // 0x23d764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x23D760u, 0x23D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D768u;
label_23d768:
    // 0x23d768: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23D768u;
    SET_GPR_U32(ctx, 31, 0x23D770u);
    ctx->pc = 0x23D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D768u;
    // 0x23d76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23D768u, 0x23D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D770u;
label_23d770:
    // 0x23d770: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23D770u;
    {
        const bool branch_taken_0x23d770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D770u;
        // 0x23d774: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d770) {
            ctx->pc = 0x23D79Cu;
            goto label_23d79c;
        }
    }
    ctx->pc = 0x23D778u;
label_23d778:
    // 0x23d778: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23d778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23d77c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23d77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23d780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d784: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23D784u;
    SET_GPR_U32(ctx, 31, 0x23D78Cu);
    ctx->pc = 0x23D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D784u;
    // 0x23d788: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23D784u, 0x23D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D78Cu;
label_23d78c:
    // 0x23d78c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23d78cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23d790: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23D790u;
    SET_GPR_U32(ctx, 31, 0x23D798u);
    ctx->pc = 0x23D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D790u;
    // 0x23d794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23D790u, 0x23D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D798u;
label_23d798:
    // 0x23d798: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x23d798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_23d79c:
    // 0x23d79c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23d79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23d7a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D7A0u;
    {
        const bool branch_taken_0x23d7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d7a0) {
            ctx->pc = 0x23D7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D7A0u;
            // 0x23d7a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D7B8u;
            goto label_23d7b8;
        }
    }
    ctx->pc = 0x23D7A8u;
    // 0x23d7a8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23d7ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23d7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23d7b0: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x23d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x23d7b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23d7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23d7b8:
    // 0x23d7b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23d7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d7bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23d7bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d7c4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x23d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23D7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7C8u;
        // 0x23d7cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D7D0u;
}
