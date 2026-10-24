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

// Function: func_0011A8F8
// Address: 0x11a8f8 - 0x11aaa0
void func_0011A8F8_0x11a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011A8F8_0x11a8f8");
#endif

    switch (ctx->pc) {
        case 0x11a930u: goto label_11a930;
        case 0x11a9a4u: goto label_11a9a4;
        case 0x11a9ccu: goto label_11a9cc;
        case 0x11a9d8u: goto label_11a9d8;
        case 0x11a9e8u: goto label_11a9e8;
        case 0x11a9f0u: goto label_11a9f0;
        case 0x11a9f8u: goto label_11a9f8;
        case 0x11aa0cu: goto label_11aa0c;
        case 0x11aa20u: goto label_11aa20;
        case 0x11aa4cu: goto label_11aa4c;
        case 0x11aa58u: goto label_11aa58;
        case 0x11aa8cu: goto label_11aa8c;
        default: break;
    }

    ctx->pc = 0x11a8f8u;

    // 0x11a8f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a8fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11a900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a908: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x11a908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11a90c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11a90cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11a910: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A910u;
    {
        const bool branch_taken_0x11a910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A910u;
        // 0x11a914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a910) {
            ctx->pc = 0x11A928u;
            goto label_11a928;
        }
    }
    ctx->pc = 0x11A918u;
    // 0x11a918: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x11A918u;
    {
        const bool branch_taken_0x11a918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a918) {
            ctx->pc = 0x11AA04u;
            goto label_11aa04;
        }
    }
    ctx->pc = 0x11A920u;
    // 0x11a920: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x11A920u;
    {
        const bool branch_taken_0x11a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A920u;
        // 0x11a924: 0xc601054c  lwc1        $f1, 0x54C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a920) {
            ctx->pc = 0x11AA5Cu;
            goto label_11aa5c;
        }
    }
    ctx->pc = 0x11A928u;
label_11a928:
    // 0x11a928: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x11A928u;
    SET_GPR_U32(ctx, 31, 0x11A930u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11A928u, 0x11A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A930u;
label_11a930:
    // 0x11a930: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11a930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a938: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x11a938u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11a93c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11A93Cu;
    {
        const bool branch_taken_0x11a93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a93c) {
            ctx->pc = 0x11A940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A93Cu;
            // 0x11a940: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A944u;
            goto label_11a944;
        }
    }
    ctx->pc = 0x11A944u;
label_11a944:
    // 0x11a944: 0x2810  mfhi        $a1
    ctx->pc = 0x11a944u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x11a948: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A948u;
    {
        const bool branch_taken_0x11a948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x11a948) {
            ctx->pc = 0x11A94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A948u;
            // 0x11a94c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A970u;
            goto label_11a970;
        }
    }
    ctx->pc = 0x11A950u;
    // 0x11a950: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A950u;
    {
        const bool branch_taken_0x11a950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A950u;
        // 0x11a954: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a950) {
            ctx->pc = 0x11A960u;
            goto label_11a960;
        }
    }
    ctx->pc = 0x11A958u;
    // 0x11a958: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A958u;
    {
        const bool branch_taken_0x11a958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a958) {
            ctx->pc = 0x11A95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A958u;
            // 0x11a95c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A97Cu;
            goto label_11a97c;
        }
    }
    ctx->pc = 0x11A960u;
label_11a960:
    // 0x11a960: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11a964: 0x8c430140  lw          $v1, 0x140($v0)
    ctx->pc = 0x11a964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x11a968: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11A968u;
    {
        const bool branch_taken_0x11a968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A968u;
        // 0x11a96c: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a968) {
            ctx->pc = 0x11A984u;
            goto label_11a984;
        }
    }
    ctx->pc = 0x11A970u;
label_11a970:
    // 0x11a970: 0x8c4304dc  lw          $v1, 0x4DC($v0)
    ctx->pc = 0x11a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1244)));
    // 0x11a974: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11A974u;
    {
        const bool branch_taken_0x11a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A974u;
        // 0x11a978: 0x8c4404e0  lw          $a0, 0x4E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a974) {
            ctx->pc = 0x11A984u;
            goto label_11a984;
        }
    }
    ctx->pc = 0x11A97Cu;
label_11a97c:
    // 0x11a97c: 0x8c4304e4  lw          $v1, 0x4E4($v0)
    ctx->pc = 0x11a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1252)));
    // 0x11a980: 0x8c4404e8  lw          $a0, 0x4E8($v0)
    ctx->pc = 0x11a980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1256)));
label_11a984:
    // 0x11a984: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x11a984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a988: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x11a988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a98c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11a98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a994: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11a994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a998: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a99c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11A99Cu;
    SET_GPR_U32(ctx, 31, 0x11A9A4u);
    ctx->pc = 0x11A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A99Cu;
    // 0x11a9a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11A99Cu, 0x11A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9A4u;
label_11a9a4:
    // 0x11a9a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11a9a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11a9a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11a9acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11a9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a9b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11a9b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9bc: 0x240600ce  addiu       $a2, $zero, 0xCE
    ctx->pc = 0x11a9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x11a9c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11a9c4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11A9C4u;
    SET_GPR_U32(ctx, 31, 0x11A9CCu);
    ctx->pc = 0x11A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9C4u;
    // 0x11a9c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11A9C4u, 0x11A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9CCu;
label_11a9cc:
    // 0x11a9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9d0: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11A9D0u;
    SET_GPR_U32(ctx, 31, 0x11A9D8u);
    ctx->pc = 0x11A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9D0u;
    // 0x11a9d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11A9D0u, 0x11A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9D8u;
label_11a9d8:
    // 0x11a9d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9e0: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11A9E0u;
    SET_GPR_U32(ctx, 31, 0x11A9E8u);
    ctx->pc = 0x11A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9E0u;
    // 0x11a9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11A9E0u, 0x11A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9E8u;
label_11a9e8:
    // 0x11a9e8: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11A9E8u;
    SET_GPR_U32(ctx, 31, 0x11A9F0u);
    ctx->pc = 0x11A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9E8u;
    // 0x11a9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11A9E8u, 0x11A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9F0u;
label_11a9f0:
    // 0x11a9f0: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11A9F0u;
    SET_GPR_U32(ctx, 31, 0x11A9F8u);
    ctx->pc = 0x11A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9F0u;
    // 0x11a9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11A9F0u, 0x11A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9F8u;
label_11a9f8:
    // 0x11a9f8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11a9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11a9fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11aa00: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11aa00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11aa04:
    // 0x11aa04: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11AA04u;
    SET_GPR_U32(ctx, 31, 0x11AA0Cu);
    ctx->pc = 0x11AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA04u;
    // 0x11aa08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11AA04u, 0x11AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA0Cu;
label_11aa0c:
    // 0x11aa0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11AA0Cu;
    {
        const bool branch_taken_0x11aa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11aa0c) {
            ctx->pc = 0x11AA38u;
            goto label_11aa38;
        }
    }
    ctx->pc = 0x11AA14u;
    // 0x11aa14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11aa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa18: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11AA18u;
    SET_GPR_U32(ctx, 31, 0x11AA20u);
    ctx->pc = 0x11AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA18u;
    // 0x11aa1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11AA18u, 0x11AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA20u;
label_11aa20:
    // 0x11aa20: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x11AA20u;
    {
        const bool branch_taken_0x11aa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11aa20) {
            ctx->pc = 0x11AA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AA20u;
            // 0x11aa24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AA90u;
            goto label_11aa90;
        }
    }
    ctx->pc = 0x11AA28u;
    // 0x11aa28: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11aa28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11aa2c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11aa2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11aa30: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11aa30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11aa34: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x11aa34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_11aa38:
    // 0x11aa38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11aa3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11aa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11aa40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11aa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa44: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11AA44u;
    SET_GPR_U32(ctx, 31, 0x11AA4Cu);
    ctx->pc = 0x11AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA44u;
    // 0x11aa48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11AA44u, 0x11AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA4Cu;
label_11aa4c:
    // 0x11aa4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11aa4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11aa50: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11AA50u;
    SET_GPR_U32(ctx, 31, 0x11AA58u);
    ctx->pc = 0x11AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA50u;
    // 0x11aa54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11AA50u, 0x11AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA58u;
label_11aa58:
    // 0x11aa58: 0xc601054c  lwc1        $f1, 0x54C($s0)
    ctx->pc = 0x11aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11aa5c:
    // 0x11aa5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11aa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11aa60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11aa60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11aa64: 0x0  nop
    ctx->pc = 0x11aa64u;
    // NOP
    // 0x11aa68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11aa68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11aa6c: 0x0  nop
    ctx->pc = 0x11aa6cu;
    // NOP
    // 0x11aa70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11AA70u;
    {
        const bool branch_taken_0x11aa70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA70u;
        // 0x11aa74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa70) {
            ctx->pc = 0x11AA84u;
            goto label_11aa84;
        }
    }
    ctx->pc = 0x11AA78u;
    // 0x11aa78: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11aa78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x11aa7c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x11aa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x11aa80: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x11aa80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
label_11aa84:
    // 0x11aa84: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11AA84u;
    SET_GPR_U32(ctx, 31, 0x11AA8Cu);
    ctx->pc = 0x11AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA84u;
    // 0x11aa88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11AA84u, 0x11AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA8Cu;
label_11aa8c:
    // 0x11aa8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11aa8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11aa90:
    // 0x11aa90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11aa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa94: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x11aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11aa98: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA98u;
        // 0x11aa9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AAA0u;
}
