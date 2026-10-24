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

// Function: cOmbb__clearFire
// Address: 0x1b8518 - 0x1b8640
void cOmbb__clearFire_0x1b8518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmbb__clearFire_0x1b8518");
#endif

    switch (ctx->pc) {
        case 0x1b8538u: goto label_1b8538;
        case 0x1b855cu: goto label_1b855c;
        case 0x1b8570u: goto label_1b8570;
        case 0x1b8598u: goto label_1b8598;
        case 0x1b85a4u: goto label_1b85a4;
        default: break;
    }

    ctx->pc = 0x1b8518u;

    // 0x1b8518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b851c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b851cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8520: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b8520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b8524: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b8524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b852c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8530: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1B8530u;
    SET_GPR_U32(ctx, 31, 0x1B8538u);
    ctx->pc = 0x1B8534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8530u;
    // 0x1b8534: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B8530u, 0x1B8538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8538u;
label_1b8538:
    // 0x1b8538: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1b8538u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x1b853c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1b853cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1b8540: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b8540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b8544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8548: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b8548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b854c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b854cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8550: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8554: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1B8554u;
    SET_GPR_U32(ctx, 31, 0x1B855Cu);
    ctx->pc = 0x1B8558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8554u;
    // 0x1b8558: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1B8554u, 0x1B855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B855Cu;
label_1b855c:
    // 0x1b855c: 0x8e050608  lw          $a1, 0x608($s0)
    ctx->pc = 0x1b855cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1b8560: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8560u;
    {
        const bool branch_taken_0x1b8560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8560) {
            ctx->pc = 0x1B8564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8560u;
            // 0x1b8564: 0xae000608  sw          $zero, 0x608($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8574u;
            goto label_1b8574;
        }
    }
    ctx->pc = 0x1B8568u;
    // 0x1b8568: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1B8568u;
    SET_GPR_U32(ctx, 31, 0x1B8570u);
    ctx->pc = 0x1B856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8568u;
    // 0x1b856c: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1B8568u, 0x1B8570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8570u;
label_1b8570:
    // 0x1b8570: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x1b8570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
label_1b8574:
    // 0x1b8574: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x1b8574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    // 0x1b8578: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b8578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b857c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1b857cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1b8580: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b8580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8588: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b8588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b858c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b858cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8590: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B8590u;
    SET_GPR_U32(ctx, 31, 0x1B8598u);
    ctx->pc = 0x1B8594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8590u;
    // 0x1b8594: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B8590u, 0x1B8598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8598u;
label_1b8598:
    // 0x1b8598: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b8598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b859c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1B859Cu;
    SET_GPR_U32(ctx, 31, 0x1B85A4u);
    ctx->pc = 0x1B85A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B859Cu;
    // 0x1b85a0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1B859Cu, 0x1B85A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85A4u;
label_1b85a4:
    // 0x1b85a4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1b85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b85a8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1b85a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b85ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B85ACu;
    {
        const bool branch_taken_0x1b85ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B85ACu;
        // 0x1b85b0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85ac) {
            ctx->pc = 0x1B85CCu;
            goto label_1b85cc;
        }
    }
    ctx->pc = 0x1B85B4u;
    // 0x1b85b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b85b8: 0x24428b20  addiu       $v0, $v0, -0x74E0
    ctx->pc = 0x1b85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937376));
    // 0x1b85bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b85bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b85c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b85c4: 0x800008  jr          $a0
    ctx->pc = 0x1B85C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B85CCu: goto label_1b85cc;
            case 0x1B85DCu: goto label_1b85dc;
            case 0x1B85ECu: goto label_1b85ec;
            case 0x1B85FCu: goto label_1b85fc;
            case 0x1B860Cu: goto label_1b860c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B85C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B85CCu;
label_1b85cc:
    // 0x1b85cc: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x1b85ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x1b85d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b85d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b85d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B85D4u;
    {
        const bool branch_taken_0x1b85d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B85D4u;
        // 0x1b85d8: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85d4) {
            ctx->pc = 0x1B861Cu;
            goto label_1b861c;
        }
    }
    ctx->pc = 0x1B85DCu;
label_1b85dc:
    // 0x1b85dc: 0x3c0143af  lui         $at, 0x43AF
    ctx->pc = 0x1b85dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17327 << 16));
    // 0x1b85e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b85e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b85e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B85E4u;
    {
        const bool branch_taken_0x1b85e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B85E4u;
        // 0x1b85e8: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85e4) {
            ctx->pc = 0x1B861Cu;
            goto label_1b861c;
        }
    }
    ctx->pc = 0x1B85ECu;
label_1b85ec:
    // 0x1b85ec: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x1b85ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x1b85f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b85f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b85f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B85F4u;
    {
        const bool branch_taken_0x1b85f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B85F4u;
        // 0x1b85f8: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85f4) {
            ctx->pc = 0x1B861Cu;
            goto label_1b861c;
        }
    }
    ctx->pc = 0x1B85FCu;
label_1b85fc:
    // 0x1b85fc: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x1b85fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x1b8600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8604: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8604u;
    {
        const bool branch_taken_0x1b8604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8604u;
        // 0x1b8608: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8604) {
            ctx->pc = 0x1B861Cu;
            goto label_1b861c;
        }
    }
    ctx->pc = 0x1B860Cu;
label_1b860c:
    // 0x1b860c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1b860cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1b8610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8614: 0x0  nop
    ctx->pc = 0x1b8614u;
    // NOP
    // 0x1b8618: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x1b8618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_1b861c:
    // 0x1b861c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8620: 0xa2000600  sb          $zero, 0x600($s0)
    ctx->pc = 0x1b8620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8624: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1b8624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b8628: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1b8628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b862c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b862cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8638: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8638u;
        // 0x1b863c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8640u;
}
