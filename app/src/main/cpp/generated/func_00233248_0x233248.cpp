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

// Function: func_00233248
// Address: 0x233248 - 0x233738
void func_00233248_0x233248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00233248_0x233248");
#endif

    switch (ctx->pc) {
        case 0x233288u: goto label_233288;
        case 0x2332b0u: goto label_2332b0;
        case 0x2332ecu: goto label_2332ec;
        case 0x233334u: goto label_233334;
        case 0x233354u: goto label_233354;
        case 0x233394u: goto label_233394;
        case 0x2333b4u: goto label_2333b4;
        case 0x2333fcu: goto label_2333fc;
        case 0x233430u: goto label_233430;
        case 0x2334d0u: goto label_2334d0;
        case 0x2334e4u: goto label_2334e4;
        case 0x2334f8u: goto label_2334f8;
        case 0x233564u: goto label_233564;
        case 0x233588u: goto label_233588;
        case 0x2335a0u: goto label_2335a0;
        case 0x2335b8u: goto label_2335b8;
        case 0x2335c4u: goto label_2335c4;
        case 0x2335e0u: goto label_2335e0;
        case 0x2335ecu: goto label_2335ec;
        case 0x2335f4u: goto label_2335f4;
        case 0x23361cu: goto label_23361c;
        case 0x233628u: goto label_233628;
        case 0x233684u: goto label_233684;
        case 0x2336a4u: goto label_2336a4;
        case 0x2336b0u: goto label_2336b0;
        case 0x2336c4u: goto label_2336c4;
        case 0x2336f0u: goto label_2336f0;
        default: break;
    }

    ctx->pc = 0x233248u;

    // 0x233248: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x233248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23324c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23324cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233250: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x233250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x233254: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x233254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x233258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23325c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x23325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x233260: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x233260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x233264: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x233264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x233268: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x233268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x23326c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233270: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x233270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x233274: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x233274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x233278: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x233278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23327c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x23327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x233280: 0xc098a84  jal         func_262A10
    ctx->pc = 0x233280u;
    SET_GPR_U32(ctx, 31, 0x233288u);
    ctx->pc = 0x233284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233280u;
    // 0x233284: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x233280u, 0x233288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233288u;
label_233288:
    // 0x233288: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x233288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x23328c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23328Cu;
    {
        const bool branch_taken_0x23328c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23328Cu;
        // 0x233290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23328c) {
            ctx->pc = 0x2332A4u;
            goto label_2332a4;
        }
    }
    ctx->pc = 0x233294u;
    // 0x233294: 0x506200a1  beql        $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x233294u;
    {
        const bool branch_taken_0x233294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x233294) {
            ctx->pc = 0x233298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233294u;
            // 0x233298: 0xc6210604  lwc1        $f1, 0x604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23351Cu;
            goto label_23351c;
        }
    }
    ctx->pc = 0x23329Cu;
    // 0x23329c: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x23329Cu;
    {
        const bool branch_taken_0x23329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23329Cu;
        // 0x2332a0: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23329c) {
            ctx->pc = 0x23362Cu;
            goto label_23362c;
        }
    }
    ctx->pc = 0x2332A4u;
label_2332a4:
    // 0x2332a4: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x2332a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2332a8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2332A8u;
    SET_GPR_U32(ctx, 31, 0x2332B0u);
    ctx->pc = 0x2332ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332A8u;
    // 0x2332ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2332A8u, 0x2332B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332B0u;
label_2332b0:
    // 0x2332b0: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x2332b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2332b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2332b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2332b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2332b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2332bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2332bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2332c0: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x2332c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
    // 0x2332c4: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x2332c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x2332c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2332c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332cc: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x2332ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x2332d0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2332d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2332d4: 0xe6200608  swc1        $f0, 0x608($s1)
    ctx->pc = 0x2332d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
    // 0x2332d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2332d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332dc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2332dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2332e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2332e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2332e4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2332E4u;
    SET_GPR_U32(ctx, 31, 0x2332ECu);
    ctx->pc = 0x2332E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332E4u;
    // 0x2332e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2332E4u, 0x2332ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332ECu;
label_2332ec:
    // 0x2332ec: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2332ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2332f0: 0xe634060c  swc1        $f20, 0x60C($s1)
    ctx->pc = 0x2332f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1548), bits); }
    // 0x2332f4: 0x28620250  slti        $v0, $v1, 0x250
    ctx->pc = 0x2332f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
    // 0x2332f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2332F8u;
    {
        const bool branch_taken_0x2332f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2332FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332F8u;
        // 0x2332fc: 0xe6340604  swc1        $f20, 0x604($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332f8) {
            ctx->pc = 0x233318u;
            goto label_233318;
        }
    }
    ctx->pc = 0x233300u;
    // 0x233300: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x233300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x233304: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x233304u;
    {
        const bool branch_taken_0x233304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233304u;
        // 0x233308: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233304) {
            ctx->pc = 0x23337Cu;
            goto label_23337c;
        }
    }
    ctx->pc = 0x23330Cu;
    // 0x23330c: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x23330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x233310: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x233310u;
    {
        const bool branch_taken_0x233310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233310u;
        // 0x233314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233310) {
            ctx->pc = 0x2333E4u;
            goto label_2333e4;
        }
    }
    ctx->pc = 0x233318u;
label_233318:
    // 0x233318: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x233318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23331c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233320: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x233320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x233324: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x233324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x233328: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x233328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23332c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23332Cu;
    SET_GPR_U32(ctx, 31, 0x233334u);
    ctx->pc = 0x233330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23332Cu;
    // 0x233330: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23332Cu, 0x233334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233334u;
label_233334:
    // 0x233334: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x233334u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x233338: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x233338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23333c: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x23333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x233340: 0x8c430390  lw          $v1, 0x390($v0)
    ctx->pc = 0x233340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 912)));
    // 0x233344: 0x8c450394  lw          $a1, 0x394($v0)
    ctx->pc = 0x233344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
    // 0x233348: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x233348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23334c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23334Cu;
    SET_GPR_U32(ctx, 31, 0x233354u);
    ctx->pc = 0x233350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23334Cu;
    // 0x233350: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23334Cu, 0x233354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233354u;
label_233354:
    // 0x233354: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x233354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233358: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x233358u;
    {
        const bool branch_taken_0x233358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x233358) {
            ctx->pc = 0x23336Cu;
            goto label_23336c;
        }
    }
    ctx->pc = 0x233360u;
    // 0x233360: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x233360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x233364: 0x8c620398  lw          $v0, 0x398($v1)
    ctx->pc = 0x233364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 920)));
    // 0x233368: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x233368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23336c:
    // 0x23336c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x233370: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x233370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x233374: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x233374u;
    {
        const bool branch_taken_0x233374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233374) {
            ctx->pc = 0x233428u;
            goto label_233428;
        }
    }
    ctx->pc = 0x23337Cu;
label_23337c:
    // 0x23337c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233380: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x233380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x233384: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x233384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x233388: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x233388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23338c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23338Cu;
    SET_GPR_U32(ctx, 31, 0x233394u);
    ctx->pc = 0x233390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23338Cu;
    // 0x233390: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23338Cu, 0x233394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233394u;
label_233394:
    // 0x233394: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x233398: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x233398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23339c: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x23339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x2333a0: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2333a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
    // 0x2333a4: 0x8c4519ec  lw          $a1, 0x19EC($v0)
    ctx->pc = 0x2333a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6636)));
    // 0x2333a8: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2333ac: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2333ACu;
    SET_GPR_U32(ctx, 31, 0x2333B4u);
    ctx->pc = 0x2333B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333ACu;
    // 0x2333b0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2333ACu, 0x2333B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333B4u;
label_2333b4:
    // 0x2333b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2333b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2333b8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2333B8u;
    {
        const bool branch_taken_0x2333b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2333b8) {
            ctx->pc = 0x2333CCu;
            goto label_2333cc;
        }
    }
    ctx->pc = 0x2333C0u;
    // 0x2333c0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2333c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2333c4: 0x8c6219f0  lw          $v0, 0x19F0($v1)
    ctx->pc = 0x2333c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6640)));
    // 0x2333c8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2333c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2333cc:
    // 0x2333cc: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2333ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2333d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2333d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2333d4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2333d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2333d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2333d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2333dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2333DCu;
    {
        const bool branch_taken_0x2333dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2333E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333DCu;
        // 0x2333e0: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333dc) {
            ctx->pc = 0x233428u;
            goto label_233428;
        }
    }
    ctx->pc = 0x2333E4u;
label_2333e4:
    // 0x2333e4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x2333e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2333e8: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x2333e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2333ec: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x2333ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2333f0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2333f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2333f4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2333F4u;
    SET_GPR_U32(ctx, 31, 0x2333FCu);
    ctx->pc = 0x2333F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333F4u;
    // 0x2333f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2333F4u, 0x2333FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333FCu;
label_2333fc:
    // 0x2333fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2333fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x233400: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x233400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x233404: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x233404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x233408: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x233408u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x23340c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x23340cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x233410: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233414: 0x8c4330d8  lw          $v1, 0x30D8($v0)
    ctx->pc = 0x233414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12504)));
    // 0x233418: 0x8c4430dc  lw          $a0, 0x30DC($v0)
    ctx->pc = 0x233418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12508)));
    // 0x23341c: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x23341cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x233420: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x233420u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233424: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x233424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_233428:
    // 0x233428: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233428u;
    SET_GPR_U32(ctx, 31, 0x233430u);
    ctx->pc = 0x23342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233428u;
    // 0x23342c: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233428u, 0x233430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233430u;
label_233430:
    // 0x233430: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x233430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x233434: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x233434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x233438: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233438u;
    {
        const bool branch_taken_0x233438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233438u;
        // 0x23343c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233438) {
            ctx->pc = 0x233458u;
            goto label_233458;
        }
    }
    ctx->pc = 0x233440u;
    // 0x233440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233444: 0x24429d10  addiu       $v0, $v0, -0x62F0
    ctx->pc = 0x233444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941968));
    // 0x233448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23344c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23344cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233450: 0x800008  jr          $a0
    ctx->pc = 0x233450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233458u: goto label_233458;
            case 0x233470u: goto label_233470;
            case 0x23348Cu: goto label_23348c;
            case 0x2334B0u: goto label_2334b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233450u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x233458u;
label_233458:
    // 0x233458: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x233458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23345c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23345cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x233460: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x233460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x233464: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233468: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x233468u;
    {
        const bool branch_taken_0x233468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233468u;
        // 0x23346c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233468) {
            ctx->pc = 0x2334A8u;
            goto label_2334a8;
        }
    }
    ctx->pc = 0x233470u;
label_233470:
    // 0x233470: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x233470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x233478: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x233478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x23347c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23347cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x233480: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x233484u;
    {
        const bool branch_taken_0x233484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233484u;
        // 0x233488: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233484) {
            ctx->pc = 0x2334A8u;
            goto label_2334a8;
        }
    }
    ctx->pc = 0x23348Cu;
label_23348c:
    // 0x23348c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x23348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x233494: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x233494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x233498: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x233498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x23349c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23349cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2334a0: 0x0  nop
    ctx->pc = 0x2334a0u;
    // NOP
    // 0x2334a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2334a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2334a8:
    // 0x2334a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2334a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2334ac: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x2334acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_2334b0:
    // 0x2334b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2334b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2334b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2334b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2334bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2334c0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2334c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334c4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2334c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2334c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2334C8u;
    SET_GPR_U32(ctx, 31, 0x2334D0u);
    ctx->pc = 0x2334CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2334C8u;
    // 0x2334cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2334C8u, 0x2334D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334D0u;
label_2334d0:
    // 0x2334d0: 0x8e2406f0  lw          $a0, 0x6F0($s1)
    ctx->pc = 0x2334d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
    // 0x2334d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2334D4u;
    {
        const bool branch_taken_0x2334d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2334d4) {
            ctx->pc = 0x2334D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2334D4u;
            // 0x2334d8: 0x8e240708  lw          $a0, 0x708($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2334E8u;
            goto label_2334e8;
        }
    }
    ctx->pc = 0x2334DCu;
    // 0x2334dc: 0xc074134  jal         func_1D04D0
    ctx->pc = 0x2334DCu;
    SET_GPR_U32(ctx, 31, 0x2334E4u);
    ctx->pc = 0x1D04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04D0u, 0x2334DCu, 0x2334E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334E4u;
label_2334e4:
    // 0x2334e4: 0x8e240708  lw          $a0, 0x708($s1)
    ctx->pc = 0x2334e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
label_2334e8:
    // 0x2334e8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2334E8u;
    {
        const bool branch_taken_0x2334e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2334e8) {
            ctx->pc = 0x2334ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2334E8u;
            // 0x2334ec: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2334FCu;
            goto label_2334fc;
        }
    }
    ctx->pc = 0x2334F0u;
    // 0x2334f0: 0xc074170  jal         func_1D05C0
    ctx->pc = 0x2334F0u;
    SET_GPR_U32(ctx, 31, 0x2334F8u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x2334F0u, 0x2334F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334F8u;
label_2334f8:
    // 0x2334f8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2334f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_2334fc:
    // 0x2334fc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2334fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x233500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233504: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x233504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x233508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23350c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x23350cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x233510: 0xe6210600  swc1        $f1, 0x600($s1)
    ctx->pc = 0x233510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x233514: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x233514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x233518: 0xc6210604  lwc1        $f1, 0x604($s1)
    ctx->pc = 0x233518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23351c:
    // 0x23351c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23351cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233520: 0x0  nop
    ctx->pc = 0x233520u;
    // NOP
    // 0x233524: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x233524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233528: 0x0  nop
    ctx->pc = 0x233528u;
    // NOP
    // 0x23352c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23352Cu;
    {
        const bool branch_taken_0x23352c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23352Cu;
        // 0x233530: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23352c) {
            ctx->pc = 0x23354Cu;
            goto label_23354c;
        }
    }
    ctx->pc = 0x233534u;
    // 0x233534: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x233534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233538: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x233538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x23353c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23353cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x233540: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x233540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x233544: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x233544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x233548: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x233548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_23354c:
    // 0x23354c: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x23354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x233550: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x233550u;
    {
        const bool branch_taken_0x233550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233550u;
        // 0x233554: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233550) {
            ctx->pc = 0x2335BCu;
            goto label_2335bc;
        }
    }
    ctx->pc = 0x233558u;
    // 0x233558: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x233558u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x23355c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23355Cu;
    SET_GPR_U32(ctx, 31, 0x233564u);
    ctx->pc = 0x233560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23355Cu;
    // 0x233560: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23355Cu, 0x233564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233564u;
label_233564:
    // 0x233564: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x233564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23356c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x23356cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x233570: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x233570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x233574: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x233574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233578: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x233578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23357c: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x23357cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x233580: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x233580u;
    SET_GPR_U32(ctx, 31, 0x233588u);
    ctx->pc = 0x233584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233580u;
    // 0x233584: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x233580u, 0x233588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233588u;
label_233588:
    // 0x233588: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x233588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23358c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x23358cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x233590: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x233590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x233594: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x233594u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x233598: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x233598u;
    SET_GPR_U32(ctx, 31, 0x2335A0u);
    ctx->pc = 0x23359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233598u;
    // 0x23359c: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x233598u, 0x2335A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335A0u;
label_2335a0:
    // 0x2335a0: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x2335a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2335a4: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2335a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2335a8: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2335a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2335ac: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2335acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2335b0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2335B0u;
    SET_GPR_U32(ctx, 31, 0x2335B8u);
    ctx->pc = 0x2335B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335B0u;
    // 0x2335b4: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2335B0u, 0x2335B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335B8u;
label_2335b8:
    // 0x2335b8: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2335b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_2335bc:
    // 0x2335bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2335BCu;
    SET_GPR_U32(ctx, 31, 0x2335C4u);
    ctx->pc = 0x2335C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335BCu;
    // 0x2335c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2335BCu, 0x2335C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335C4u;
label_2335c4:
    // 0x2335c4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2335C4u;
    {
        const bool branch_taken_0x2335c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2335c4) {
            ctx->pc = 0x2335C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2335C4u;
            // 0x2335c8: 0xc6200338  lwc1        $f0, 0x338($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2335FCu;
            goto label_2335fc;
        }
    }
    ctx->pc = 0x2335CCu;
    // 0x2335cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2335ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2335d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2335d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2335d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2335d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335d8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2335D8u;
    SET_GPR_U32(ctx, 31, 0x2335E0u);
    ctx->pc = 0x2335DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335D8u;
    // 0x2335dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2335D8u, 0x2335E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335E0u;
label_2335e0:
    // 0x2335e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2335e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335e4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2335E4u;
    SET_GPR_U32(ctx, 31, 0x2335ECu);
    ctx->pc = 0x2335E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335E4u;
    // 0x2335e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2335E4u, 0x2335ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335ECu;
label_2335ec:
    // 0x2335ec: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2335ECu;
    SET_GPR_U32(ctx, 31, 0x2335F4u);
    ctx->pc = 0x2335F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335ECu;
    // 0x2335f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2335ECu, 0x2335F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335F4u;
label_2335f4:
    // 0x2335f4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2335F4u;
    {
        const bool branch_taken_0x2335f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335F4u;
        // 0x2335f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335f4) {
            ctx->pc = 0x233718u;
            goto label_233718;
        }
    }
    ctx->pc = 0x2335FCu;
label_2335fc:
    // 0x2335fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2335fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233600: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x233600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233608: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x233608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23360c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23360cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x233610: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x233610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x233614: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x233614u;
    SET_GPR_U32(ctx, 31, 0x23361Cu);
    ctx->pc = 0x233618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233614u;
    // 0x233618: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x233614u, 0x23361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23361Cu;
label_23361c:
    // 0x23361c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23361cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x233620: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x233620u;
    SET_GPR_U32(ctx, 31, 0x233628u);
    ctx->pc = 0x233624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233620u;
    // 0x233624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x233620u, 0x233628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233628u;
label_233628:
    // 0x233628: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x233628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_23362c:
    // 0x23362c: 0x24020222  addiu       $v0, $zero, 0x222
    ctx->pc = 0x23362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x233630: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233630u;
    {
        const bool branch_taken_0x233630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233630) {
            ctx->pc = 0x233634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233630u;
            // 0x233634: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233664u;
            goto label_233664;
        }
    }
    ctx->pc = 0x233638u;
    // 0x233638: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x233638u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x23363c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x23363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x233640: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233640u;
    {
        const bool branch_taken_0x233640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233640u;
        // 0x233644: 0x3062fffd  andi        $v0, $v1, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233640) {
            ctx->pc = 0x233660u;
            goto label_233660;
        }
    }
    ctx->pc = 0x233648u;
    // 0x233648: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x233648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x23364c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23364cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233654: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x233654u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x233658: 0xa2231865  sb          $v1, 0x1865($s1)
    ctx->pc = 0x233658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6245), (uint8_t)GPR_U32(ctx, 3));
    // 0x23365c: 0xe62017d4  swc1        $f0, 0x17D4($s1)
    ctx->pc = 0x23365cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6100), bits); }
label_233660:
    // 0x233660: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x233660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_233664:
    // 0x233664: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x233664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x233668: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233668u;
    {
        const bool branch_taken_0x233668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233668) {
            ctx->pc = 0x23369Cu;
            goto label_23369c;
        }
    }
    ctx->pc = 0x233670u;
    // 0x233670: 0x8e240700  lw          $a0, 0x700($s1)
    ctx->pc = 0x233670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x233674: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x233674u;
    {
        const bool branch_taken_0x233674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233674) {
            ctx->pc = 0x23369Cu;
            goto label_23369c;
        }
    }
    ctx->pc = 0x23367Cu;
    // 0x23367c: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x23367Cu;
    SET_GPR_U32(ctx, 31, 0x233684u);
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x23367Cu, 0x233684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233684u;
label_233684:
    // 0x233684: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233684u;
    {
        const bool branch_taken_0x233684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233684) {
            ctx->pc = 0x23369Cu;
            goto label_23369c;
        }
    }
    ctx->pc = 0x23368Cu;
    // 0x23368c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x23368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x233690: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x233690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x233694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x233694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x233698: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x233698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_23369c:
    // 0x23369c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x23369Cu;
    SET_GPR_U32(ctx, 31, 0x2336A4u);
    ctx->pc = 0x2336A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23369Cu;
    // 0x2336a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x23369Cu, 0x2336A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336A4u;
label_2336a4:
    // 0x2336a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2336a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2336a8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2336A8u;
    SET_GPR_U32(ctx, 31, 0x2336B0u);
    ctx->pc = 0x2336ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336A8u;
    // 0x2336ac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2336A8u, 0x2336B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336B0u;
label_2336b0:
    // 0x2336b0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2336b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2336b4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2336B4u;
    {
        const bool branch_taken_0x2336b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2336b4) {
            ctx->pc = 0x2336B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2336B4u;
            // 0x2336b8: 0x8e2205fc  lw          $v0, 0x5FC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336FCu;
            goto label_2336fc;
        }
    }
    ctx->pc = 0x2336BCu;
    // 0x2336bc: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x2336BCu;
    SET_GPR_U32(ctx, 31, 0x2336C4u);
    ctx->pc = 0x2336C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336BCu;
    // 0x2336c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x2336BCu, 0x2336C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336C4u;
label_2336c4:
    // 0x2336c4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2336C4u;
    {
        const bool branch_taken_0x2336c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2336c4) {
            ctx->pc = 0x2336C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2336C4u;
            // 0x2336c8: 0x8e2205fc  lw          $v0, 0x5FC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336FCu;
            goto label_2336fc;
        }
    }
    ctx->pc = 0x2336CCu;
    // 0x2336cc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2336ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2336d0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2336d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2336d4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2336D4u;
    {
        const bool branch_taken_0x2336d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2336d4) {
            ctx->pc = 0x2336D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2336D4u;
            // 0x2336d8: 0x8e2205fc  lw          $v0, 0x5FC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336FCu;
            goto label_2336fc;
        }
    }
    ctx->pc = 0x2336DCu;
    // 0x2336dc: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x2336dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x2336e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2336E0u;
    {
        const bool branch_taken_0x2336e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2336e0) {
            ctx->pc = 0x2336E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2336E0u;
            // 0x2336e4: 0x8e2205fc  lw          $v0, 0x5FC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336FCu;
            goto label_2336fc;
        }
    }
    ctx->pc = 0x2336E8u;
    // 0x2336e8: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2336E8u;
    SET_GPR_U32(ctx, 31, 0x2336F0u);
    ctx->pc = 0x2336ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336E8u;
    // 0x2336ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2336E8u, 0x2336F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336F0u;
label_2336f0:
    // 0x2336f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2336F0u;
    {
        const bool branch_taken_0x2336f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2336F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336F0u;
        // 0x2336f4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336f0) {
            ctx->pc = 0x233718u;
            goto label_233718;
        }
    }
    ctx->pc = 0x2336F8u;
    // 0x2336f8: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x2336f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
label_2336fc:
    // 0x2336fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2336FCu;
    {
        const bool branch_taken_0x2336fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336FCu;
        // 0x233700: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336fc) {
            ctx->pc = 0x233718u;
            goto label_233718;
        }
    }
    ctx->pc = 0x233704u;
    // 0x233704: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x233704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x233708: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x233708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23370c: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x23370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x233710: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x233710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x233714: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x233714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_233718:
    // 0x233718: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x233718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23371c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x23371cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233720: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x233720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233724: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x233724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23372c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x23372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233730: 0x3e00008  jr          $ra
    ctx->pc = 0x233730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233730u;
        // 0x233734: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233738u;
}
