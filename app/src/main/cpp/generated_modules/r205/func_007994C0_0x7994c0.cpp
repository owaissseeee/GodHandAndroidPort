#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_007994C0
// Address: 0x7994c0 - 0x799640
void func_007994C0_0x7994c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007994C0_0x7994c0");
#endif

    switch (ctx->pc) {
        case 0x7994ecu: goto label_7994ec;
        case 0x799534u: goto label_799534;
        case 0x7995acu: goto label_7995ac;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995f0u: goto label_7995f0;
        case 0x799618u: goto label_799618;
        case 0x799624u: goto label_799624;
        default: break;
    }

    ctx->pc = 0x7994c0u;

    // 0x7994c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7994c4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7994c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7994c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7994cc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7994d0: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x7994d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7994d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7994d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7994d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7994dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7994e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7994e4: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x7994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E4u;
    // 0x7994e8: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0x24110203  addiu       $s1, $zero, 0x203
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x7994f0: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x7994f4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x7994f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7994f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7994fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7994fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799500: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x799504: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79950c: 0x3c014167  lui         $at, 0x4167
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16743 << 16));
    // 0x799510: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x799510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x799514: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79951c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79951cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799520: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x799520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799524: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x799524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799528: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x799528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79952c: 0xc1e68e6  jal         func_79A398
    ctx->pc = 0x79952Cu;
    SET_GPR_U32(ctx, 31, 0x799534u);
    ctx->pc = 0x799530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79952Cu;
    // 0x799530: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A398u, 0x79952Cu, 0x799534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799534u;
label_799534:
    // 0x799534: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x799538: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x799538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79953c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x799540: 0xa4710008  sh          $s1, 0x8($v1)
    ctx->pc = 0x799540u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x799544: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x799548: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79954c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79954Cu;
    {
        const bool branch_taken_0x79954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79954c) {
            ctx->pc = 0x799568u;
            goto label_799568;
        }
    }
    ctx->pc = 0x799554u;
    // 0x799554: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x799554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x799558: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x799558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79955c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79955cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x799560: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x799560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799564: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_799568:
    // 0x799568: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79956c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799570: 0x3c014047  lui         $at, 0x4047
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16455 << 16));
    // 0x799574: 0x3421f1e6  ori         $at, $at, 0xF1E6
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61926);
    // 0x799578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79957c: 0x24100110  addiu       $s0, $zero, 0x110
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x799580: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799584: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x799584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x799588: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79958c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799590: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x799590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x799594: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x799598: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79959c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7995a0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x7995a4: 0xc1e68f6  jal         func_79A3D8
    ctx->pc = 0x7995A4u;
    SET_GPR_U32(ctx, 31, 0x7995ACu);
    ctx->pc = 0x7995A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A4u;
    // 0x7995a8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A3D8u, 0x7995A4u, 0x7995ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ACu;
label_7995ac:
    // 0x7995ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x7995ACu;
    {
        const bool branch_taken_0x7995ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ACu;
        // 0x7995b0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995ac) {
            ctx->pc = 0x799618u;
            goto label_799618;
        }
    }
    ctx->pc = 0x7995B4u;
    // 0x7995b4: 0x94627a50  lhu         $v0, 0x7A50($v1)
    ctx->pc = 0x7995b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 31312)));
    // 0x7995b8: 0x10500018  beq         $v0, $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x7995B8u;
    {
        const bool branch_taken_0x7995b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b8) {
            ctx->pc = 0x79961Cu;
            goto label_79961c;
        }
    }
    ctx->pc = 0x7995C0u;
    // 0x7995c0: 0xc1e68f0  jal         func_79A3C0
    ctx->pc = 0x7995C0u;
    SET_GPR_U32(ctx, 31, 0x7995C8u);
    ctx->pc = 0x7995C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C0u;
    // 0x7995c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A3C0u, 0x7995C0u, 0x7995C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C8u;
label_7995c8:
    // 0x7995c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7995C8u;
    {
        const bool branch_taken_0x7995c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C8u;
        // 0x7995cc: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c8) {
            ctx->pc = 0x7995F8u;
            goto label_7995f8;
        }
    }
    ctx->pc = 0x7995D0u;
    // 0x7995d0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7995d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7995d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7995d8: 0x24c67b00  addiu       $a2, $a2, 0x7B00
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31488));
    // 0x7995dc: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x7995e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e8: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x7995E8u;
    SET_GPR_U32(ctx, 31, 0x7995F0u);
    ctx->pc = 0x7995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E8u;
    // 0x7995ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x7995E8u, 0x7995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7995F0u;
    {
        const bool branch_taken_0x7995f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F0u;
        // 0x7995f4: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f0) {
            ctx->pc = 0x79961Cu;
            goto label_79961c;
        }
    }
    ctx->pc = 0x7995F8u;
label_7995f8:
    // 0x7995f8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7995fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7995fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799600: 0x24c67b00  addiu       $a2, $a2, 0x7B00
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31488));
    // 0x799604: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x799608: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79960c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799610: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799610u;
    SET_GPR_U32(ctx, 31, 0x799618u);
    ctx->pc = 0x799614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799610u;
    // 0x799614: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799610u, 0x799618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79961c:
    // 0x79961c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79961Cu;
    SET_GPR_U32(ctx, 31, 0x799624u);
    ctx->pc = 0x799620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79961Cu;
    // 0x799620: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79961Cu, 0x799624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799624u;
label_799624:
    // 0x799624: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799628: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79962c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79962cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799634: 0x3e00008  jr          $ra
    ctx->pc = 0x799634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799634u;
        // 0x799638: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79963Cu;
    // 0x79963c: 0x0  nop
    ctx->pc = 0x79963cu;
    // NOP
    ctx->pc = 0x799640u;
}
} // namespace gh_r205
