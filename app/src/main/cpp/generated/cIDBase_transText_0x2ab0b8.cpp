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

// Function: cIDBase_transText
// Address: 0x2ab0b8 - 0x2ab2a0
void cIDBase_transText_0x2ab0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_transText_0x2ab0b8");
#endif

    switch (ctx->pc) {
        case 0x2ab0e4u: goto label_2ab0e4;
        case 0x2ab124u: goto label_2ab124;
        case 0x2ab140u: goto label_2ab140;
        case 0x2ab15cu: goto label_2ab15c;
        case 0x2ab16cu: goto label_2ab16c;
        case 0x2ab1a8u: goto label_2ab1a8;
        case 0x2ab1dcu: goto label_2ab1dc;
        case 0x2ab1f4u: goto label_2ab1f4;
        case 0x2ab20cu: goto label_2ab20c;
        case 0x2ab22cu: goto label_2ab22c;
        case 0x2ab240u: goto label_2ab240;
        case 0x2ab270u: goto label_2ab270;
        case 0x2ab280u: goto label_2ab280;
        default: break;
    }

    ctx->pc = 0x2ab0b8u;

    // 0x2ab0b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ab0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ab0bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ab0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ab0c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ab0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ab0c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab0c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ab0cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab0d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ab0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ab0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab0d8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab0dc: 0xc0aae6a  jal         func_2AB9A8
    ctx->pc = 0x2AB0DCu;
    SET_GPR_U32(ctx, 31, 0x2AB0E4u);
    ctx->pc = 0x2AB0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB0DCu;
    // 0x2ab0e0: 0x9225008b  lbu         $a1, 0x8B($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 139)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB9A8u, 0x2AB0DCu, 0x2AB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB0E4u;
label_2ab0e4:
    // 0x2ab0e4: 0x92230089  lbu         $v1, 0x89($s1)
    ctx->pc = 0x2ab0e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 137)));
    // 0x2ab0e8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AB0E8u;
    {
        const bool branch_taken_0x2ab0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab0e8) {
            ctx->pc = 0x2AB0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB0E8u;
            // 0x2ab0ec: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB100u;
            goto label_2ab100;
        }
    }
    ctx->pc = 0x2AB0F0u;
    // 0x2ab0f0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB0F0u;
    {
        const bool branch_taken_0x2ab0f0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2AB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB0F0u;
        // 0x2ab0f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab0f0) {
            ctx->pc = 0x2AB100u;
            goto label_2ab100;
        }
    }
    ctx->pc = 0x2AB0F8u;
    // 0x2ab0f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ab0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ab0fc: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x2ab0fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_2ab100:
    // 0x2ab100: 0x92030046  lbu         $v1, 0x46($s0)
    ctx->pc = 0x2ab100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2ab104: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ab104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ab108: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB108u;
    {
        const bool branch_taken_0x2ab108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ab108) {
            ctx->pc = 0x2AB10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB108u;
            // 0x2ab10c: 0x92050046  lbu         $a1, 0x46($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB12Cu;
            goto label_2ab12c;
        }
    }
    ctx->pc = 0x2AB110u;
    // 0x2ab110: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x2ab110u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x2ab114: 0x9225008d  lbu         $a1, 0x8D($s1)
    ctx->pc = 0x2ab114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 141)));
    // 0x2ab118: 0x26047510  addiu       $a0, $s0, 0x7510
    ctx->pc = 0x2ab118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 29968));
    // 0x2ab11c: 0xc0abdc4  jal         func_2AF710
    ctx->pc = 0x2AB11Cu;
    SET_GPR_U32(ctx, 31, 0x2AB124u);
    ctx->pc = 0x2AB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB11Cu;
    // 0x2ab120: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF710u, 0x2AB11Cu, 0x2AB124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB124u;
label_2ab124:
    // 0x2ab124: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB124u;
    {
        const bool branch_taken_0x2ab124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB124u;
        // 0x2ab128: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab124) {
            ctx->pc = 0x2AB140u;
            goto label_2ab140;
        }
    }
    ctx->pc = 0x2AB12Cu;
label_2ab12c:
    // 0x2ab12c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2ab12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ab130: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x2ab130u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x2ab134: 0x26047510  addiu       $a0, $s0, 0x7510
    ctx->pc = 0x2ab134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 29968));
    // 0x2ab138: 0xc0abdc4  jal         func_2AF710
    ctx->pc = 0x2AB138u;
    SET_GPR_U32(ctx, 31, 0x2AB140u);
    ctx->pc = 0x2AB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB138u;
    // 0x2ab13c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF710u, 0x2AB138u, 0x2AB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB140u;
label_2ab140:
    // 0x2ab140: 0x8622008e  lh          $v0, 0x8E($s1)
    ctx->pc = 0x2ab140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 142)));
    // 0x2ab144: 0x26707510  addiu       $s0, $s3, 0x7510
    ctx->pc = 0x2ab144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 29968));
    // 0x2ab148: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ab148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab14c: 0x0  nop
    ctx->pc = 0x2ab14cu;
    // NOP
    // 0x2ab150: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ab150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ab154: 0xc0abdc8  jal         func_2AF720
    ctx->pc = 0x2AB154u;
    SET_GPR_U32(ctx, 31, 0x2AB15Cu);
    ctx->pc = 0x2AB158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB154u;
    // 0x2ab158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF720u, 0x2AB154u, 0x2AB15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB15Cu;
label_2ab15c:
    // 0x2ab15c: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x2ab15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab164: 0xc0abda6  jal         func_2AF698
    ctx->pc = 0x2AB164u;
    SET_GPR_U32(ctx, 31, 0x2AB16Cu);
    ctx->pc = 0x2AB168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB164u;
    // 0x2ab168: 0xc62d005c  lwc1        $f13, 0x5C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF698u, 0x2AB164u, 0x2AB16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB16Cu;
label_2ab16c:
    // 0x2ab16c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2ab16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2ab170: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x2ab170u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2ab174: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AB174u;
    {
        const bool branch_taken_0x2ab174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB174u;
        // 0x2ab178: 0xc62d005c  lwc1        $f13, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab174) {
            ctx->pc = 0x2AB1B0u;
            goto label_2ab1b0;
        }
    }
    ctx->pc = 0x2AB17Cu;
    // 0x2ab17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab180: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2ab180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2ab184: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab188: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x2ab188u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x2ab18c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2ab18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2ab190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab194: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ab194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ab198: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ab198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab19c: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x2ab19cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2ab1a0: 0xc0abd9a  jal         func_2AF668
    ctx->pc = 0x2AB1A0u;
    SET_GPR_U32(ctx, 31, 0x2AB1A8u);
    ctx->pc = 0x2AB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB1A0u;
    // 0x2ab1a4: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF668u, 0x2AB1A0u, 0x2AB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB1A8u;
label_2ab1a8:
    // 0x2ab1a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AB1A8u;
    {
        const bool branch_taken_0x2ab1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1A8u;
        // 0x2ab1ac: 0x26707510  addiu       $s0, $s3, 0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 29968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab1a8) {
            ctx->pc = 0x2AB1E0u;
            goto label_2ab1e0;
        }
    }
    ctx->pc = 0x2AB1B0u;
label_2ab1b0:
    // 0x2ab1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1b4: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2ab1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2ab1b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab1bc: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x2ab1bcu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x2ab1c0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2ab1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2ab1c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab1c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ab1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ab1cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ab1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab1d0: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x2ab1d0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2ab1d4: 0xc0abd9a  jal         func_2AF668
    ctx->pc = 0x2AB1D4u;
    SET_GPR_U32(ctx, 31, 0x2AB1DCu);
    ctx->pc = 0x2AB1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB1D4u;
    // 0x2ab1d8: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF668u, 0x2AB1D4u, 0x2AB1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB1DCu;
label_2ab1dc:
    // 0x2ab1dc: 0x26707510  addiu       $s0, $s3, 0x7510
    ctx->pc = 0x2ab1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 29968));
label_2ab1e0:
    // 0x2ab1e0: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x2ab1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab1e4: 0xc62d0054  lwc1        $f13, 0x54($s1)
    ctx->pc = 0x2ab1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ab1e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ab1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1ec: 0xc0abd96  jal         func_2AF658
    ctx->pc = 0x2AB1ECu;
    SET_GPR_U32(ctx, 31, 0x2AB1F4u);
    ctx->pc = 0x2AB1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB1ECu;
    // 0x2ab1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF658u, 0x2AB1ECu, 0x2AB1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB1F4u;
label_2ab1f4:
    // 0x2ab1f4: 0x96220090  lhu         $v0, 0x90($s1)
    ctx->pc = 0x2ab1f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2ab1f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB1F8u;
    {
        const bool branch_taken_0x2ab1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1F8u;
        // 0x2ab1fc: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab1f8) {
            ctx->pc = 0x2AB204u;
            goto label_2ab204;
        }
    }
    ctx->pc = 0x2AB200u;
    // 0x2ab200: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ab200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab204:
    // 0x2ab204: 0xc0abd64  jal         func_2AF590
    ctx->pc = 0x2AB204u;
    SET_GPR_U32(ctx, 31, 0x2AB20Cu);
    ctx->pc = 0x2AB208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB204u;
    // 0x2ab208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF590u, 0x2AB204u, 0x2AB20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB20Cu;
label_2ab20c:
    // 0x2ab20c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2ab20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2ab210: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x2ab210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x2ab214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ab218: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB218u;
    {
        const bool branch_taken_0x2ab218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB218u;
        // 0x2ab21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab218) {
            ctx->pc = 0x2AB234u;
            goto label_2ab234;
        }
    }
    ctx->pc = 0x2AB220u;
    // 0x2ab220: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ab220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ab224: 0xc0ab30a  jal         func_2ACC28
    ctx->pc = 0x2AB224u;
    SET_GPR_U32(ctx, 31, 0x2AB22Cu);
    ctx->pc = 0x2AB228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB224u;
    // 0x2ab228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACC28u, 0x2AB224u, 0x2AB22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB22Cu;
label_2ab22c:
    // 0x2ab22c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AB22Cu;
    {
        const bool branch_taken_0x2ab22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB22Cu;
        // 0x2ab230: 0x96220090  lhu         $v0, 0x90($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab22c) {
            ctx->pc = 0x2AB244u;
            goto label_2ab244;
        }
    }
    ctx->pc = 0x2AB234u;
label_2ab234:
    // 0x2ab234: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ab234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ab238: 0xc0ab30a  jal         func_2ACC28
    ctx->pc = 0x2AB238u;
    SET_GPR_U32(ctx, 31, 0x2AB240u);
    ctx->pc = 0x2AB23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB238u;
    // 0x2ab23c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACC28u, 0x2AB238u, 0x2AB240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB240u;
label_2ab240:
    // 0x2ab240: 0x96220090  lhu         $v0, 0x90($s1)
    ctx->pc = 0x2ab240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
label_2ab244:
    // 0x2ab244: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AB244u;
    {
        const bool branch_taken_0x2ab244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB244u;
        // 0x2ab248: 0x26647510  addiu       $a0, $s3, 0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 29968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab244) {
            ctx->pc = 0x2AB274u;
            goto label_2ab274;
        }
    }
    ctx->pc = 0x2AB24Cu;
    // 0x2ab24c: 0x8222008c  lb          $v0, 0x8C($s1)
    ctx->pc = 0x2ab24cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2ab250: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB250u;
    {
        const bool branch_taken_0x2ab250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB250u;
        // 0x2ab254: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab250) {
            ctx->pc = 0x2AB274u;
            goto label_2ab274;
        }
    }
    ctx->pc = 0x2AB258u;
    // 0x2ab258: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ab258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ab25c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x2ab25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ab260: 0x26647510  addiu       $a0, $s3, 0x7510
    ctx->pc = 0x2ab260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 29968));
    // 0x2ab264: 0x3012  mflo        $a2
    ctx->pc = 0x2ab264u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2ab268: 0xc0abd92  jal         func_2AF648
    ctx->pc = 0x2AB268u;
    SET_GPR_U32(ctx, 31, 0x2AB270u);
    ctx->pc = 0x2AB26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB268u;
    // 0x2ab26c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF648u, 0x2AB268u, 0x2AB270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB270u;
label_2ab270:
    // 0x2ab270: 0x26647510  addiu       $a0, $s3, 0x7510
    ctx->pc = 0x2ab270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 29968));
label_2ab274:
    // 0x2ab274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab278: 0xc0abdca  jal         func_2AF728
    ctx->pc = 0x2AB278u;
    SET_GPR_U32(ctx, 31, 0x2AB280u);
    ctx->pc = 0x2AB27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB278u;
    // 0x2ab27c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF728u, 0x2AB278u, 0x2AB280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB280u;
label_2ab280:
    // 0x2ab280: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ab280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab284: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ab284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab288: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab28c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ab28cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab294: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB294u;
        // 0x2ab298: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB29Cu;
    // 0x2ab29c: 0x0  nop
    ctx->pc = 0x2ab29cu;
    // NOP
    ctx->pc = 0x2ab2a0u;
}
