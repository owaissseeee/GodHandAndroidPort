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

// Function: func_002282B8
// Address: 0x2282b8 - 0x2284c8
void func_002282B8_0x2282b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002282B8_0x2282b8");
#endif

    switch (ctx->pc) {
        case 0x2282e8u: goto label_2282e8;
        case 0x228310u: goto label_228310;
        case 0x228330u: goto label_228330;
        case 0x22835cu: goto label_22835c;
        case 0x228370u: goto label_228370;
        case 0x228414u: goto label_228414;
        case 0x228434u: goto label_228434;
        case 0x22843cu: goto label_22843c;
        case 0x22844cu: goto label_22844c;
        case 0x228460u: goto label_228460;
        case 0x22846cu: goto label_22846c;
        case 0x228480u: goto label_228480;
        default: break;
    }

    ctx->pc = 0x2282b8u;

    // 0x2282b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2282b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2282bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2282bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2282c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2282c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2282c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2282c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2282c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2282c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2282cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2282ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2282d0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2282d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2282d4: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x2282d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x2282d8: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2282d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2282dc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2282dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2282e0: 0xc098a84  jal         func_262A10
    ctx->pc = 0x2282E0u;
    SET_GPR_U32(ctx, 31, 0x2282E8u);
    ctx->pc = 0x2282E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2282E0u;
    // 0x2282e4: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x2282E0u, 0x2282E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282E8u;
label_2282e8:
    // 0x2282e8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2282e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2282ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2282ECu;
    {
        const bool branch_taken_0x2282ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2282F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282ECu;
        // 0x2282f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282ec) {
            ctx->pc = 0x228304u;
            goto label_228304;
        }
    }
    ctx->pc = 0x2282F4u;
    // 0x2282f4: 0x50620043  beql        $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2282F4u;
    {
        const bool branch_taken_0x2282f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2282f4) {
            ctx->pc = 0x2282F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2282F4u;
            // 0x2282f8: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228404u;
            goto label_228404;
        }
    }
    ctx->pc = 0x2282FCu;
    // 0x2282fc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2282FCu;
    {
        const bool branch_taken_0x2282fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282FCu;
        // 0x228300: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282fc) {
            ctx->pc = 0x228470u;
            goto label_228470;
        }
    }
    ctx->pc = 0x228304u;
label_228304:
    // 0x228304: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x228304u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x228308: 0xc09d91a  jal         func_276468
    ctx->pc = 0x228308u;
    SET_GPR_U32(ctx, 31, 0x228310u);
    ctx->pc = 0x22830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228308u;
    // 0x22830c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x228308u, 0x228310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228310u;
label_228310:
    // 0x228310: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x228310u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228314: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x228314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x228318: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x228318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22831c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22831cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228320: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x228320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x228324: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x228324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228328: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x228328u;
    SET_GPR_U32(ctx, 31, 0x228330u);
    ctx->pc = 0x22832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228328u;
    // 0x22832c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x228328u, 0x228330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228330u;
label_228330:
    // 0x228330: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x228330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x228334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228338: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x228338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22833c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x22833cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228340: 0x8c4515f0  lw          $a1, 0x15F0($v0)
    ctx->pc = 0x228340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5616)));
    // 0x228344: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x228344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x228348: 0x8c4615f4  lw          $a2, 0x15F4($v0)
    ctx->pc = 0x228348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5620)));
    // 0x22834c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22834cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228350: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x228350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x228354: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x228354u;
    SET_GPR_U32(ctx, 31, 0x22835Cu);
    ctx->pc = 0x228358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228354u;
    // 0x228358: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x228354u, 0x22835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22835Cu;
label_22835c:
    // 0x22835c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x22835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x228360: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x228360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x228364: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x228364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x228368: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228368u;
    SET_GPR_U32(ctx, 31, 0x228370u);
    ctx->pc = 0x22836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228368u;
    // 0x22836c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228368u, 0x228370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228370u;
label_228370:
    // 0x228370: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x228370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228374: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x228374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x228378: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228378u;
    {
        const bool branch_taken_0x228378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228378u;
        // 0x22837c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228378) {
            ctx->pc = 0x228398u;
            goto label_228398;
        }
    }
    ctx->pc = 0x228380u;
    // 0x228380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228384: 0x244286b0  addiu       $v0, $v0, -0x7950
    ctx->pc = 0x228384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936240));
    // 0x228388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22838c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22838cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228390: 0x800008  jr          $a0
    ctx->pc = 0x228390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228398u: goto label_228398;
            case 0x2283B0u: goto label_2283b0;
            case 0x2283CCu: goto label_2283cc;
            case 0x2283F0u: goto label_2283f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228390u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x228398u;
label_228398:
    // 0x228398: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x228398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22839c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22839cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2283a0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2283a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2283a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2283a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2283a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2283A8u;
    {
        const bool branch_taken_0x2283a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2283ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283A8u;
        // 0x2283ac: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2283a8) {
            ctx->pc = 0x2283E8u;
            goto label_2283e8;
        }
    }
    ctx->pc = 0x2283B0u;
label_2283b0:
    // 0x2283b0: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2283b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2283b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2283b8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2283b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2283bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2283bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2283c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2283c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2283c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2283C4u;
    {
        const bool branch_taken_0x2283c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2283C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283C4u;
        // 0x2283c8: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2283c4) {
            ctx->pc = 0x2283E8u;
            goto label_2283e8;
        }
    }
    ctx->pc = 0x2283CCu;
label_2283cc:
    // 0x2283cc: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2283ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2283d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2283d4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2283d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2283d8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2283d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2283dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2283dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2283e0: 0x0  nop
    ctx->pc = 0x2283e0u;
    // NOP
    // 0x2283e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2283e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2283e8:
    // 0x2283e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2283e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2283ec: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x2283ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_2283f0:
    // 0x2283f0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2283f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2283f4: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x2283f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x2283f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2283f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2283fc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2283fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x228400: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x228400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_228404:
    // 0x228404: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x228404u;
    {
        const bool branch_taken_0x228404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228404u;
        // 0x228408: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228404) {
            ctx->pc = 0x228434u;
            goto label_228434;
        }
    }
    ctx->pc = 0x22840Cu;
    // 0x22840c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22840Cu;
    SET_GPR_U32(ctx, 31, 0x228414u);
    ctx->pc = 0x228410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22840Cu;
    // 0x228410: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22840Cu, 0x228414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228414u;
label_228414:
    // 0x228414: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x228414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22841c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22841cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x228420: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x228420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x228424: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x228424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228428: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x228428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22842c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22842Cu;
    SET_GPR_U32(ctx, 31, 0x228434u);
    ctx->pc = 0x228430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22842Cu;
    // 0x228430: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22842Cu, 0x228434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228434u;
label_228434:
    // 0x228434: 0xc055f06  jal         func_157C18
    ctx->pc = 0x228434u;
    SET_GPR_U32(ctx, 31, 0x22843Cu);
    ctx->pc = 0x228438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228434u;
    // 0x228438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x228434u, 0x22843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22843Cu;
label_22843c:
    // 0x22843c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22843Cu;
    {
        const bool branch_taken_0x22843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22843c) {
            ctx->pc = 0x22844Cu;
            goto label_22844c;
        }
    }
    ctx->pc = 0x228444u;
    // 0x228444: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x228444u;
    SET_GPR_U32(ctx, 31, 0x22844Cu);
    ctx->pc = 0x228448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228444u;
    // 0x228448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x228444u, 0x22844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22844Cu;
label_22844c:
    // 0x22844c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22844cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228450: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x228450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x228454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228458: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x228458u;
    SET_GPR_U32(ctx, 31, 0x228460u);
    ctx->pc = 0x22845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228458u;
    // 0x22845c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x228458u, 0x228460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228460u;
label_228460:
    // 0x228460: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x228460u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x228464: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x228464u;
    SET_GPR_U32(ctx, 31, 0x22846Cu);
    ctx->pc = 0x228468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228464u;
    // 0x228468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x228464u, 0x22846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22846Cu;
label_22846c:
    // 0x22846c: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x22846cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
label_228470:
    // 0x228470: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228470u;
    {
        const bool branch_taken_0x228470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228470) {
            ctx->pc = 0x228474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228470u;
            // 0x228474: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228484u;
            goto label_228484;
        }
    }
    ctx->pc = 0x228478u;
    // 0x228478: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x228478u;
    SET_GPR_U32(ctx, 31, 0x228480u);
    ctx->pc = 0x22847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228478u;
    // 0x22847c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x228478u, 0x228480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228480u;
label_228480:
    // 0x228480: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x228480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_228484:
    // 0x228484: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x228484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x228488: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x228488u;
    {
        const bool branch_taken_0x228488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228488u;
        // 0x22848c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228488) {
            ctx->pc = 0x228494u;
            goto label_228494;
        }
    }
    ctx->pc = 0x228490u;
    // 0x228490: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x228490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_228494:
    // 0x228494: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x228494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x228498: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228498u;
    {
        const bool branch_taken_0x228498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228498u;
        // 0x22849c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228498) {
            ctx->pc = 0x2284B4u;
            goto label_2284b4;
        }
    }
    ctx->pc = 0x2284A0u;
    // 0x2284a0: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x2284a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2284a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2284a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2284a8: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2284a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2284ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2284acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2284b0: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x2284b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_2284b4:
    // 0x2284b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2284b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2284b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2284b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2284bc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2284bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2284c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2284C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2284C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284C0u;
        // 0x2284c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2284C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2284C8u;
}
