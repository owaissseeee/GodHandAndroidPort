#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_0079A160
// Address: 0x79a160 - 0x79a4a0
void func_0079A160_0x79a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A160_0x79a160");
#endif

    switch (ctx->pc) {
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1ecu: goto label_79a1ec;
        case 0x79a1f4u: goto label_79a1f4;
        case 0x79a20cu: goto label_79a20c;
        case 0x79a220u: goto label_79a220;
        case 0x79a24cu: goto label_79a24c;
        case 0x79a274u: goto label_79a274;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a2a0u: goto label_79a2a0;
        case 0x79a2c4u: goto label_79a2c4;
        case 0x79a2dcu: goto label_79a2dc;
        case 0x79a2f4u: goto label_79a2f4;
        case 0x79a2fcu: goto label_79a2fc;
        case 0x79a304u: goto label_79a304;
        case 0x79a30cu: goto label_79a30c;
        case 0x79a334u: goto label_79a334;
        case 0x79a348u: goto label_79a348;
        case 0x79a36cu: goto label_79a36c;
        case 0x79a384u: goto label_79a384;
        case 0x79a39cu: goto label_79a39c;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3acu: goto label_79a3ac;
        case 0x79a3b4u: goto label_79a3b4;
        case 0x79a3d8u: goto label_79a3d8;
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a424u: goto label_79a424;
        case 0x79a44cu: goto label_79a44c;
        case 0x79a460u: goto label_79a460;
        case 0x79a46cu: goto label_79a46c;
        default: break;
    }

    ctx->pc = 0x79a160u;

    // 0x79a160: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x79a164: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x79a164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x79a168: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79a16c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79a170: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x79a174: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x79a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x79a178: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x79a17c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x79a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x79a180: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x79a184: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79a184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79a188: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x79a18c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79a190: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79a194: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79a194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79a198: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x79a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x79a19c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a1a0: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x79a1a4: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x79a1a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79a1a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a1ac: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
label_79a1b0:
    // 0x79a1b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x79a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x79a1b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a1b8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A1B8u;
    {
        const bool branch_taken_0x79a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B8u;
        // 0x79a1bc: 0x3c16003c  lui         $s6, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1b8) {
            ctx->pc = 0x79A1ECu;
            goto label_79a1ec;
        }
    }
    ctx->pc = 0x79A1C0u;
    // 0x79a1c0: 0xc1e69fe  jal         func_79A7F8
    ctx->pc = 0x79A1C0u;
    SET_GPR_U32(ctx, 31, 0x79A1C8u);
    ctx->pc = 0x79A7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A7F8u, 0x79A1C0u, 0x79A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C8u;
label_79a1c8:
    // 0x79a1c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A1C8u;
    {
        const bool branch_taken_0x79a1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C8u;
        // 0x79a1cc: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1c8) {
            ctx->pc = 0x79A1ECu;
            goto label_79a1ec;
        }
    }
    ctx->pc = 0x79A1D0u;
    // 0x79a1d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x79a1d4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a1d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a1dc: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79A1DCu;
    SET_GPR_U32(ctx, 31, 0x79A1E4u);
    ctx->pc = 0x79A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1DCu;
    // 0x79a1e0: 0xae227a8c  sw          $v0, 0x7A8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A1DCu, 0x79A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E4u;
label_79a1e4:
    // 0x79a1e4: 0xc1e6a20  jal         func_79A880
    ctx->pc = 0x79A1E4u;
    SET_GPR_U32(ctx, 31, 0x79A1ECu);
    ctx->pc = 0x79A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1E4u;
    // 0x79a1e8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A880u, 0x79A1E4u, 0x79A1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1ECu;
label_79a1ec:
    // 0x79a1ec: 0xc1e69ba  jal         func_79A6E8
    ctx->pc = 0x79A1ECu;
    SET_GPR_U32(ctx, 31, 0x79A1F4u);
    ctx->pc = 0x79A6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6E8u, 0x79A1ECu, 0x79A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F4u;
label_79a1f4:
    // 0x79a1f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A1F4u;
    {
        const bool branch_taken_0x79a1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F4u;
        // 0x79a1f8: 0x27c4b430  addiu       $a0, $fp, -0x4BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1f4) {
            ctx->pc = 0x79A228u;
            goto label_79a228;
        }
    }
    ctx->pc = 0x79A1FCu;
    // 0x79a1fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a200: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a200u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a204: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A204u;
    SET_GPR_U32(ctx, 31, 0x79A20Cu);
    ctx->pc = 0x79A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A204u;
    // 0x79a208: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A204u, 0x79A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A20Cu;
label_79a20c:
    // 0x79a20c: 0x26e4b438  addiu       $a0, $s7, -0x4BC8
    ctx->pc = 0x79a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947896));
    // 0x79a210: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a214: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a218: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A218u;
    SET_GPR_U32(ctx, 31, 0x79A220u);
    ctx->pc = 0x79A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A218u;
    // 0x79a21c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A218u, 0x79A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A220u;
label_79a220:
    // 0x79a220: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x79A220u;
    {
        const bool branch_taken_0x79a220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A220u;
        // 0x79a224: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a220) {
            ctx->pc = 0x79A418u;
            goto label_79a418;
        }
    }
    ctx->pc = 0x79A228u;
label_79a228:
    // 0x79a228: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
    // 0x79a22c: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x79a230: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A230u;
    {
        const bool branch_taken_0x79a230 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A230u;
        // 0x79a234: 0x3c15007a  lui         $s5, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a230) {
            ctx->pc = 0x79A250u;
            goto label_79a250;
        }
    }
    ctx->pc = 0x79A238u;
    // 0x79a238: 0x27c4b430  addiu       $a0, $fp, -0x4BD0
    ctx->pc = 0x79a238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947888));
    // 0x79a23c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a240: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a240u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a244: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A244u;
    SET_GPR_U32(ctx, 31, 0x79A24Cu);
    ctx->pc = 0x79A248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A244u;
    // 0x79a248: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A244u, 0x79A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A24Cu;
label_79a24c:
    // 0x79a24c: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
label_79a250:
    // 0x79a250: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x79a254: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a258: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A258u;
    {
        const bool branch_taken_0x79a258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A258u;
        // 0x79a25c: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a258) {
            ctx->pc = 0x79A274u;
            goto label_79a274;
        }
    }
    ctx->pc = 0x79A260u;
    // 0x79a260: 0x26e4b438  addiu       $a0, $s7, -0x4BC8
    ctx->pc = 0x79a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947896));
    // 0x79a264: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a268: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a268u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a26c: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A26Cu;
    SET_GPR_U32(ctx, 31, 0x79A274u);
    ctx->pc = 0x79A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A26Cu;
    // 0x79a270: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A26Cu, 0x79A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A274u;
label_79a274:
    // 0x79a274: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
    // 0x79a278: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x79a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x79a27c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x79A27Cu;
    {
        const bool branch_taken_0x79a27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A27Cu;
        // 0x79a280: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a27c) {
            ctx->pc = 0x79A31Cu;
            goto label_79a31c;
        }
    }
    ctx->pc = 0x79A284u;
    // 0x79a284: 0xc1e6998  jal         func_79A660
    ctx->pc = 0x79A284u;
    SET_GPR_U32(ctx, 31, 0x79A28Cu);
    ctx->pc = 0x79A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A660u, 0x79A284u, 0x79A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A28Cu;
label_79a28c:
    // 0x79a28c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79a290: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x79A290u;
    {
        const bool branch_taken_0x79a290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A290u;
        // 0x79a294: 0x26b0b430  addiu       $s0, $s5, -0x4BD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a290) {
            ctx->pc = 0x79A318u;
            goto label_79a318;
        }
    }
    ctx->pc = 0x79A298u;
    // 0x79a298: 0xc1e6bc6  jal         func_79AF18
    ctx->pc = 0x79A298u;
    SET_GPR_U32(ctx, 31, 0x79A2A0u);
    ctx->pc = 0x79A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A298u;
    // 0x79a29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AF18u, 0x79A298u, 0x79A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2A0u;
label_79a2a0:
    // 0x79a2a0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79A2A0u;
    {
        const bool branch_taken_0x79a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A0u;
        // 0x79a2a4: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2a0) {
            ctx->pc = 0x79A318u;
            goto label_79a318;
        }
    }
    ctx->pc = 0x79A2A8u;
    // 0x79a2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a2b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a2b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a2b4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x79a2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x79a2b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x79a2b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x79a2bc: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A2BCu;
    SET_GPR_U32(ctx, 31, 0x79A2C4u);
    ctx->pc = 0x79A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2BCu;
    // 0x79a2c0: 0xae227a8c  sw          $v0, 0x7A8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A2BCu, 0x79A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2C4u;
label_79a2c4:
    // 0x79a2c4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a2c8: 0x2484b438  addiu       $a0, $a0, -0x4BC8
    ctx->pc = 0x79a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947896));
    // 0x79a2cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a2d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a2d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a2d4: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A2D4u;
    SET_GPR_U32(ctx, 31, 0x79A2DCu);
    ctx->pc = 0x79A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2D4u;
    // 0x79a2d8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A2D4u, 0x79A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2DCu;
label_79a2dc:
    // 0x79a2dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a2e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a2e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a2e4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a2e8: 0x2484b438  addiu       $a0, $a0, -0x4BC8
    ctx->pc = 0x79a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947896));
    // 0x79a2ec: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A2ECu;
    SET_GPR_U32(ctx, 31, 0x79A2F4u);
    ctx->pc = 0x79A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2ECu;
    // 0x79a2f0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A2ECu, 0x79A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F4u;
label_79a2f4:
    // 0x79a2f4: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79A2F4u;
    SET_GPR_U32(ctx, 31, 0x79A2FCu);
    ctx->pc = 0x79A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F4u;
    // 0x79a2f8: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A2F4u, 0x79A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2FCu;
label_79a2fc:
    // 0x79a2fc: 0xc1e6928  jal         func_79A4A0
    ctx->pc = 0x79A2FCu;
    SET_GPR_U32(ctx, 31, 0x79A304u);
    ctx->pc = 0x79A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2FCu;
    // 0x79a300: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A0u, 0x79A2FCu, 0x79A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A304u;
label_79a304:
    // 0x79a304: 0xc1e6a20  jal         func_79A880
    ctx->pc = 0x79A304u;
    SET_GPR_U32(ctx, 31, 0x79A30Cu);
    ctx->pc = 0x79A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A304u;
    // 0x79a308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A880u, 0x79A304u, 0x79A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A30Cu;
label_79a30c:
    // 0x79a30c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x79a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x79a310: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x79A310u;
    {
        const bool branch_taken_0x79a310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A310u;
        // 0x79a314: 0x8e237a8c  lw          $v1, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a310) {
            ctx->pc = 0x79A3BCu;
            goto label_79a3bc;
        }
    }
    ctx->pc = 0x79A318u;
label_79a318:
    // 0x79a318: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
label_79a31c:
    // 0x79a31c: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x79a31cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
    // 0x79a320: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x79a320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x79a324: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x79A324u;
    {
        const bool branch_taken_0x79a324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A324u;
        // 0x79a328: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a324) {
            ctx->pc = 0x79A3E4u;
            goto label_79a3e4;
        }
    }
    ctx->pc = 0x79A32Cu;
    // 0x79a32c: 0xc1e6998  jal         func_79A660
    ctx->pc = 0x79A32Cu;
    SET_GPR_U32(ctx, 31, 0x79A334u);
    ctx->pc = 0x79A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A660u, 0x79A32Cu, 0x79A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A334u;
label_79a334:
    // 0x79a334: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x79a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x79a338: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79A338u;
    {
        const bool branch_taken_0x79a338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A338u;
        // 0x79a33c: 0x2690b438  addiu       $s0, $s4, -0x4BC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a338) {
            ctx->pc = 0x79A3E0u;
            goto label_79a3e0;
        }
    }
    ctx->pc = 0x79A340u;
    // 0x79a340: 0xc1e6bc6  jal         func_79AF18
    ctx->pc = 0x79A340u;
    SET_GPR_U32(ctx, 31, 0x79A348u);
    ctx->pc = 0x79A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A340u;
    // 0x79a344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AF18u, 0x79A340u, 0x79A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A348u;
label_79a348:
    // 0x79a348: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x79A348u;
    {
        const bool branch_taken_0x79a348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A348u;
        // 0x79a34c: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a348) {
            ctx->pc = 0x79A3E0u;
            goto label_79a3e0;
        }
    }
    ctx->pc = 0x79A350u;
    // 0x79a350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a354: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a358: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a358u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a35c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x79a35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x79a360: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x79a360u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x79a364: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A364u;
    SET_GPR_U32(ctx, 31, 0x79A36Cu);
    ctx->pc = 0x79A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A364u;
    // 0x79a368: 0xae227a8c  sw          $v0, 0x7A8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A364u, 0x79A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A36Cu;
label_79a36c:
    // 0x79a36c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a370: 0x2484b430  addiu       $a0, $a0, -0x4BD0
    ctx->pc = 0x79a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947888));
    // 0x79a374: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a378: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a37c: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A37Cu;
    SET_GPR_U32(ctx, 31, 0x79A384u);
    ctx->pc = 0x79A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A37Cu;
    // 0x79a380: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A37Cu, 0x79A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A384u;
label_79a384:
    // 0x79a384: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a388: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a388u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a38c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a390: 0x2484b430  addiu       $a0, $a0, -0x4BD0
    ctx->pc = 0x79a390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947888));
    // 0x79a394: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A394u;
    SET_GPR_U32(ctx, 31, 0x79A39Cu);
    ctx->pc = 0x79A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A394u;
    // 0x79a398: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A394u, 0x79A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A39Cu;
label_79a39c:
    // 0x79a39c: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79A39Cu;
    SET_GPR_U32(ctx, 31, 0x79A3A4u);
    ctx->pc = 0x79A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A39Cu;
    // 0x79a3a0: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A39Cu, 0x79A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A4u;
label_79a3a4:
    // 0x79a3a4: 0xc1e6928  jal         func_79A4A0
    ctx->pc = 0x79A3A4u;
    SET_GPR_U32(ctx, 31, 0x79A3ACu);
    ctx->pc = 0x79A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A4u;
    // 0x79a3a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A0u, 0x79A3A4u, 0x79A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3ACu;
label_79a3ac:
    // 0x79a3ac: 0xc1e6a20  jal         func_79A880
    ctx->pc = 0x79A3ACu;
    SET_GPR_U32(ctx, 31, 0x79A3B4u);
    ctx->pc = 0x79A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3ACu;
    // 0x79a3b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A880u, 0x79A3ACu, 0x79A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B4u;
label_79a3b4:
    // 0x79a3b4: 0x8e237a8c  lw          $v1, 0x7A8C($s1)
    ctx->pc = 0x79a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
    // 0x79a3b8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_79a3bc:
    // 0x79a3bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a3c0: 0x8e662f84  lw          $a2, 0x2F84($s3)
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a3c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a3c8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79a3cc: 0xae237a8c  sw          $v1, 0x7A8C($s1)
    ctx->pc = 0x79a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 3));
    // 0x79a3d0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A3D0u;
    SET_GPR_U32(ctx, 31, 0x79A3D8u);
    ctx->pc = 0x79A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3D0u;
    // 0x79a3d4: 0x8cc40020  lw          $a0, 0x20($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3D0u, 0x79A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D8u;
label_79a3d8:
    // 0x79a3d8: 0x1000ff75  b           . + 4 + (-0x8B << 2)
    ctx->pc = 0x79A3D8u;
    {
        const bool branch_taken_0x79a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D8u;
        // 0x79a3dc: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3d8) {
            ctx->pc = 0x79A1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1b0;
        }
    }
    ctx->pc = 0x79A3E0u;
label_79a3e0:
    // 0x79a3e0: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
label_79a3e4:
    // 0x79a3e4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x79a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x79a3e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a3ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A3ECu;
    {
        const bool branch_taken_0x79a3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3ECu;
        // 0x79a3f0: 0x3c03005f  lui         $v1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3ec) {
            ctx->pc = 0x79A408u;
            goto label_79a408;
        }
    }
    ctx->pc = 0x79A3F4u;
    // 0x79a3f4: 0xc1e6998  jal         func_79A660
    ctx->pc = 0x79A3F4u;
    SET_GPR_U32(ctx, 31, 0x79A3FCu);
    ctx->pc = 0x79A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A660u, 0x79A3F4u, 0x79A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3FCu;
label_79a3fc:
    // 0x79a3fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a400: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79A400u;
    {
        const bool branch_taken_0x79a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A400u;
        // 0x79a404: 0x3c03005f  lui         $v1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a400) {
            ctx->pc = 0x79A42Cu;
            goto label_79a42c;
        }
    }
    ctx->pc = 0x79A408u;
label_79a408:
    // 0x79a408: 0x8c628658  lw          $v0, -0x79A8($v1)
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936152)));
    // 0x79a40c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79a410: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A410u;
    {
        const bool branch_taken_0x79a410 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x79A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A410u;
        // 0x79a414: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a410) {
            ctx->pc = 0x79A42Cu;
            goto label_79a42c;
        }
    }
    ctx->pc = 0x79A418u;
label_79a418:
    // 0x79a418: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a41c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A41Cu;
    SET_GPR_U32(ctx, 31, 0x79A424u);
    ctx->pc = 0x79A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A41Cu;
    // 0x79a420: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A41Cu, 0x79A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x79A424u;
    {
        const bool branch_taken_0x79a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A424u;
        // 0x79a428: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a424) {
            ctx->pc = 0x79A1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1b0;
        }
    }
    ctx->pc = 0x79A42Cu;
label_79a42c:
    // 0x79a42c: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x79a430: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x79a430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79a434: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a438: 0x26a4b430  addiu       $a0, $s5, -0x4BD0
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947888));
    // 0x79a43c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a440: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a444: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A444u;
    SET_GPR_U32(ctx, 31, 0x79A44Cu);
    ctx->pc = 0x79A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A444u;
    // 0x79a448: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A444u, 0x79A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A44Cu;
label_79a44c:
    // 0x79a44c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a44cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a450: 0x2684b438  addiu       $a0, $s4, -0x4BC8
    ctx->pc = 0x79a450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947896));
    // 0x79a454: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a458: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A458u;
    SET_GPR_U32(ctx, 31, 0x79A460u);
    ctx->pc = 0x79A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A458u;
    // 0x79a45c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A458u, 0x79A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A460u;
label_79a460:
    // 0x79a460: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79a464: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A464u;
    SET_GPR_U32(ctx, 31, 0x79A46Cu);
    ctx->pc = 0x79A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A464u;
    // 0x79a468: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A464u, 0x79A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A46Cu;
label_79a46c:
    // 0x79a46c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79a46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a470: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79a470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a474: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79a474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a478: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79a478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a47c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79a47cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a480: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79a480u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a484: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x79a484u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a488: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x79a488u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a48c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x79a48cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a494: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x79a494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a498: 0x3e00008  jr          $ra
    ctx->pc = 0x79A498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A498u;
        // 0x79a49c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4A0u;
}
} // namespace gh_r604
