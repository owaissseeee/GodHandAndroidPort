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

// Function: func_002311A8
// Address: 0x2311a8 - 0x231300
void func_002311A8_0x2311a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002311A8_0x2311a8");
#endif

    switch (ctx->pc) {
        case 0x2311e4u: goto label_2311e4;
        case 0x23125cu: goto label_23125c;
        case 0x23126cu: goto label_23126c;
        case 0x231294u: goto label_231294;
        case 0x2312b4u: goto label_2312b4;
        case 0x2312c4u: goto label_2312c4;
        case 0x2312d8u: goto label_2312d8;
        case 0x2312e4u: goto label_2312e4;
        default: break;
    }

    ctx->pc = 0x2311a8u;

    // 0x2311a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2311a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2311ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2311acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2311b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2311b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2311b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2311b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2311b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2311b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2311bc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2311bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2311c0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2311c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2311c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2311C4u;
    {
        const bool branch_taken_0x2311c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311C4u;
        // 0x2311c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311c4) {
            ctx->pc = 0x2311DCu;
            goto label_2311dc;
        }
    }
    ctx->pc = 0x2311CCu;
    // 0x2311cc: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2311CCu;
    {
        const bool branch_taken_0x2311cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2311D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311CCu;
        // 0x2311d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311cc) {
            ctx->pc = 0x2312ACu;
            goto label_2312ac;
        }
    }
    ctx->pc = 0x2311D4u;
    // 0x2311d4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2311D4u;
    {
        const bool branch_taken_0x2311d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311D4u;
        // 0x2311d8: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311d4) {
            ctx->pc = 0x2312ECu;
            goto label_2312ec;
        }
    }
    ctx->pc = 0x2311DCu;
label_2311dc:
    // 0x2311dc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2311DCu;
    SET_GPR_U32(ctx, 31, 0x2311E4u);
    ctx->pc = 0x2311E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2311DCu;
    // 0x2311e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2311DCu, 0x2311E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311E4u;
label_2311e4:
    // 0x2311e4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2311e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2311e8: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2311e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2311ec: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x2311ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x2311f0: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x2311f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x2311f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2311F4u;
    {
        const bool branch_taken_0x2311f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311F4u;
        // 0x2311f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311f4) {
            ctx->pc = 0x231214u;
            goto label_231214;
        }
    }
    ctx->pc = 0x2311FCu;
    // 0x2311fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2311fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x231200: 0x24429090  addiu       $v0, $v0, -0x6F70
    ctx->pc = 0x231200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938768));
    // 0x231204: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231208: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23120c: 0x800008  jr          $a0
    ctx->pc = 0x23120Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231214u: goto label_231214;
            case 0x231224u: goto label_231224;
            case 0x231234u: goto label_231234;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23120Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231214u;
label_231214:
    // 0x231214: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231218: 0x8c4301c0  lw          $v1, 0x1C0($v0)
    ctx->pc = 0x231218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x23121c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23121Cu;
    {
        const bool branch_taken_0x23121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23121Cu;
        // 0x231220: 0x8c4401c4  lw          $a0, 0x1C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23121c) {
            ctx->pc = 0x231240u;
            goto label_231240;
        }
    }
    ctx->pc = 0x231224u;
label_231224:
    // 0x231224: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231228: 0x8c430948  lw          $v1, 0x948($v0)
    ctx->pc = 0x231228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2376)));
    // 0x23122c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23122Cu;
    {
        const bool branch_taken_0x23122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23122Cu;
        // 0x231230: 0x8c44094c  lw          $a0, 0x94C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23122c) {
            ctx->pc = 0x231240u;
            goto label_231240;
        }
    }
    ctx->pc = 0x231234u;
label_231234:
    // 0x231234: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231238: 0x8c4311a0  lw          $v1, 0x11A0($v0)
    ctx->pc = 0x231238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x23123c: 0x8c4411a4  lw          $a0, 0x11A4($v0)
    ctx->pc = 0x23123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4516)));
label_231240:
    // 0x231240: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x231240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231244: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x231244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x231248: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x231248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23124c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23124cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x231250: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x231250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231254: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x231254u;
    SET_GPR_U32(ctx, 31, 0x23125Cu);
    ctx->pc = 0x231258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231254u;
    // 0x231258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x231254u, 0x23125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23125Cu;
label_23125c:
    // 0x23125c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x23125cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x231260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231264: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x231264u;
    SET_GPR_U32(ctx, 31, 0x23126Cu);
    ctx->pc = 0x231268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231264u;
    // 0x231268: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x231264u, 0x23126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23126Cu;
label_23126c:
    // 0x23126c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23126cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x231270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231274: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x231274u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x231278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23127c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x23127cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231280: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x231280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231284: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x231284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231288: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x231288u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23128c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x23128Cu;
    SET_GPR_U32(ctx, 31, 0x231294u);
    ctx->pc = 0x231290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23128Cu;
    // 0x231290: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x23128Cu, 0x231294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231294u;
label_231294:
    // 0x231294: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x231294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x231298: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x23129c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23129cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2312a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2312a4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x2312a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x2312a8: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x2312a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_2312ac:
    // 0x2312ac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2312ACu;
    SET_GPR_U32(ctx, 31, 0x2312B4u);
    ctx->pc = 0x2312B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312ACu;
    // 0x2312b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2312ACu, 0x2312B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312B4u;
label_2312b4:
    // 0x2312b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2312B4u;
    {
        const bool branch_taken_0x2312b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2312b4) {
            ctx->pc = 0x2312C4u;
            goto label_2312c4;
        }
    }
    ctx->pc = 0x2312BCu;
    // 0x2312bc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2312BCu;
    SET_GPR_U32(ctx, 31, 0x2312C4u);
    ctx->pc = 0x2312C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312BCu;
    // 0x2312c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2312BCu, 0x2312C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312C4u;
label_2312c4:
    // 0x2312c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2312c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2312c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2312c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2312cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2312ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312d0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2312D0u;
    SET_GPR_U32(ctx, 31, 0x2312D8u);
    ctx->pc = 0x2312D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312D0u;
    // 0x2312d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2312D0u, 0x2312D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312D8u;
label_2312d8:
    // 0x2312d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2312d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312dc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2312DCu;
    SET_GPR_U32(ctx, 31, 0x2312E4u);
    ctx->pc = 0x2312E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312DCu;
    // 0x2312e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2312DCu, 0x2312E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312E4u;
label_2312e4:
    // 0x2312e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2312e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2312e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2312e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2312ec:
    // 0x2312ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2312ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2312f0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2312f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2312f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2312F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2312F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312F4u;
        // 0x2312f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2312F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2312FCu;
    // 0x2312fc: 0x0  nop
    ctx->pc = 0x2312fcu;
    // NOP
    ctx->pc = 0x231300u;
}
