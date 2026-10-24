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

// Function: func_00166780
// Address: 0x166780 - 0x166b60
void func_00166780_0x166780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00166780_0x166780");
#endif

    switch (ctx->pc) {
        case 0x166798u: goto label_166798;
        case 0x1667c8u: goto label_1667c8;
        case 0x1667e4u: goto label_1667e4;
        case 0x1669e8u: goto label_1669e8;
        case 0x166b44u: goto label_166b44;
        case 0x166b4cu: goto label_166b4c;
        default: break;
    }

    ctx->pc = 0x166780u;

    // 0x166780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166784: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x166784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x166788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16678c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166790: 0xc059cca  jal         func_167328
    ctx->pc = 0x166790u;
    SET_GPR_U32(ctx, 31, 0x166798u);
    ctx->pc = 0x166794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166790u;
    // 0x166794: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167328u, 0x166790u, 0x166798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166798u;
label_166798:
    // 0x166798: 0x3c11f7ff  lui         $s1, 0xF7FF
    ctx->pc = 0x166798u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63487 << 16));
    // 0x16679c: 0x82030130  lb          $v1, 0x130($s0)
    ctx->pc = 0x16679cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1667a0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1667a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1667a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1667a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1667a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1667a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1667ac: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1667acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1667b0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1667b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1667b4: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x1667b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1667b8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1667b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1667bc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1667bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1667c0: 0xc07f1c2  jal         func_1FC708
    ctx->pc = 0x1667C0u;
    SET_GPR_U32(ctx, 31, 0x1667C8u);
    ctx->pc = 0x1667C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667C0u;
    // 0x1667c4: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC708u, 0x1667C0u, 0x1667C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667C8u;
label_1667c8:
    // 0x1667c8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1667C8u;
    {
        const bool branch_taken_0x1667c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1667c8) {
            ctx->pc = 0x1667CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1667C8u;
            // 0x1667cc: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x1667D0u;
    // 0x1667d0: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1667d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1667d4:
    // 0x1667d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1667d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1667d8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1667d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1667dc: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x1667DCu;
    SET_GPR_U32(ctx, 31, 0x1667E4u);
    ctx->pc = 0x1667E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667DCu;
    // 0x1667e0: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x1667DCu, 0x1667E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667E4u;
label_1667e4:
    // 0x1667e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1667e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1667e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1667ec: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1667ECu;
    {
        const bool branch_taken_0x1667ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1667F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667ECu;
        // 0x1667f0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667ec) {
            ctx->pc = 0x16681Cu;
            goto label_16681c;
        }
    }
    ctx->pc = 0x1667F4u;
    // 0x1667f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1667F4u;
    {
        const bool branch_taken_0x1667f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667F4u;
        // 0x1667f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667f4) {
            ctx->pc = 0x16680Cu;
            goto label_16680c;
        }
    }
    ctx->pc = 0x1667FCu;
    // 0x1667fc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1667FCu;
    {
        const bool branch_taken_0x1667fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667FCu;
        // 0x166800: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667fc) {
            ctx->pc = 0x166824u;
            goto label_166824;
        }
    }
    ctx->pc = 0x166804u;
    // 0x166804: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x166804u;
    {
        const bool branch_taken_0x166804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166804u;
        // 0x166808: 0x904385f8  lbu         $v1, -0x7A08($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166804) {
            ctx->pc = 0x16684Cu;
            goto label_16684c;
        }
    }
    ctx->pc = 0x16680Cu;
label_16680c:
    // 0x16680c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16680Cu;
    {
        const bool branch_taken_0x16680c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16680Cu;
        // 0x166810: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16680c) {
            ctx->pc = 0x16682Cu;
            goto label_16682c;
        }
    }
    ctx->pc = 0x166814u;
    // 0x166814: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x166814u;
    {
        const bool branch_taken_0x166814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166814u;
        // 0x166818: 0x904385f8  lbu         $v1, -0x7A08($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166814) {
            ctx->pc = 0x16684Cu;
            goto label_16684c;
        }
    }
    ctx->pc = 0x16681Cu;
label_16681c:
    // 0x16681c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16681Cu;
    {
        const bool branch_taken_0x16681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16681Cu;
        // 0x166820: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16681c) {
            ctx->pc = 0x166830u;
            goto label_166830;
        }
    }
    ctx->pc = 0x166824u;
label_166824:
    // 0x166824: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166824u;
    {
        const bool branch_taken_0x166824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166824u;
        // 0x166828: 0x8e0400ac  lw          $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166824) {
            ctx->pc = 0x166830u;
            goto label_166830;
        }
    }
    ctx->pc = 0x16682Cu;
label_16682c:
    // 0x16682c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x16682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_166830:
    // 0x166830: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x166830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x166834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x166834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x166838: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x166838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16683c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16683cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x166840: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x166840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x166844: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x166844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x166848: 0x904385f8  lbu         $v1, -0x7A08($v0)
    ctx->pc = 0x166848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5E85F8u));
label_16684c:
    // 0x16684c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x16684Cu;
    {
        const bool branch_taken_0x16684c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16684c) {
            ctx->pc = 0x166850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16684Cu;
            // 0x166850: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166858u;
            goto label_166858;
        }
    }
    ctx->pc = 0x166854u;
    // 0x166854: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x166854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_166858:
    // 0x166858: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x166858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16685c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16685cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x166860: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x166860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x166864: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x166864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x166868: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x166868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16686c: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x16686cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x166870: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x166870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x166874: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x166874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x166878: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x166878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x16687c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x16687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x166880: 0x2484fb70  addiu       $a0, $a0, -0x490
    ctx->pc = 0x166880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966128));
    // 0x166884: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x166884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x166888: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x166888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x16688c: 0x82020130  lb          $v0, 0x130($s0)
    ctx->pc = 0x16688cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x166890: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x166890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x166894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166898: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x166898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16689c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1668a0: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1668a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1668a4: 0x8203005a  lb          $v1, 0x5A($s0)
    ctx->pc = 0x1668a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x1668a8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1668a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1668ac: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1668ACu;
    {
        const bool branch_taken_0x1668ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668ACu;
        // 0x1668b0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668ac) {
            ctx->pc = 0x166A68u;
            goto label_166a68;
        }
    }
    ctx->pc = 0x1668B4u;
    // 0x1668b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1668b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1668b8: 0x2442faa0  addiu       $v0, $v0, -0x560
    ctx->pc = 0x1668b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965920));
    // 0x1668bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1668bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1668c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1668c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1668c4: 0x800008  jr          $a0
    ctx->pc = 0x1668C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1668CCu: goto label_1668cc;
            case 0x166944u: goto label_166944;
            case 0x166A10u: goto label_166a10;
            case 0x166A68u: goto label_166a68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1668C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1668CCu;
label_1668cc:
    // 0x1668cc: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x1668ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x1668d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1668d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1668d4: 0x9223d9e8  lbu         $v1, -0x2618($s1)
    ctx->pc = 0x1668d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3BD9E8u));
    // 0x1668d8: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1668D8u;
    {
        const bool branch_taken_0x1668d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1668DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668D8u;
        // 0x1668dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668d8) {
            ctx->pc = 0x1669A4u;
            goto label_1669a4;
        }
    }
    ctx->pc = 0x1668E0u;
    // 0x1668e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1668E0u;
    {
        const bool branch_taken_0x1668e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668E0u;
        // 0x1668e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668e0) {
            ctx->pc = 0x1668F8u;
            goto label_1668f8;
        }
    }
    ctx->pc = 0x1668E8u;
    // 0x1668e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1668E8u;
    {
        const bool branch_taken_0x1668e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668E8u;
        // 0x1668ec: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668e8) {
            ctx->pc = 0x166910u;
            goto label_166910;
        }
    }
    ctx->pc = 0x1668F0u;
    // 0x1668f0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1668F0u;
    {
        const bool branch_taken_0x1668f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668F0u;
        // 0x1668f4: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668f0) {
            ctx->pc = 0x166A6Cu;
            goto label_166a6c;
        }
    }
    ctx->pc = 0x1668F8u;
label_1668f8:
    // 0x1668f8: 0x10640032  beq         $v1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1668F8u;
    {
        const bool branch_taken_0x1668f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1668FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668F8u;
        // 0x1668fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668f8) {
            ctx->pc = 0x1669C4u;
            goto label_1669c4;
        }
    }
    ctx->pc = 0x166900u;
    // 0x166900: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x166900u;
    {
        const bool branch_taken_0x166900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166900u;
        // 0x166904: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166900) {
            ctx->pc = 0x16692Cu;
            goto label_16692c;
        }
    }
    ctx->pc = 0x166908u;
    // 0x166908: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x166908u;
    {
        const bool branch_taken_0x166908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166908u;
        // 0x16690c: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166908) {
            ctx->pc = 0x166A6Cu;
            goto label_166a6c;
        }
    }
    ctx->pc = 0x166910u;
label_166910:
    // 0x166910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166914: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x166914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x166918: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x166918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16691c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16691cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166920: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x166920u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x166924: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x166924u;
    {
        const bool branch_taken_0x166924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166924u;
        // 0x166928: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166924) {
            ctx->pc = 0x1669E0u;
            goto label_1669e0;
        }
    }
    ctx->pc = 0x16692Cu;
label_16692c:
    // 0x16692c: 0x9043748c  lbu         $v1, 0x748C($v0)
    ctx->pc = 0x16692cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29836)));
    // 0x166930: 0x5060004e  beql        $v1, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x166930u;
    {
        const bool branch_taken_0x166930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166930) {
            ctx->pc = 0x166934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166930u;
            // 0x166934: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166A6Cu;
            goto label_166a6c;
        }
    }
    ctx->pc = 0x166938u;
    // 0x166938: 0xa204005a  sb          $a0, 0x5A($s0)
    ctx->pc = 0x166938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 4));
    // 0x16693c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x16693Cu;
    {
        const bool branch_taken_0x16693c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16693Cu;
        // 0x166940: 0xa220d9e8  sb          $zero, -0x2618($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294957544), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16693c) {
            ctx->pc = 0x166A68u;
            goto label_166a68;
        }
    }
    ctx->pc = 0x166944u;
label_166944:
    // 0x166944: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x166944u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x166948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16694c: 0x9223d9e8  lbu         $v1, -0x2618($s1)
    ctx->pc = 0x16694cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3BD9E8u));
    // 0x166950: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x166950u;
    {
        const bool branch_taken_0x166950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166950u;
        // 0x166954: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166950) {
            ctx->pc = 0x1669A4u;
            goto label_1669a4;
        }
    }
    ctx->pc = 0x166958u;
    // 0x166958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166958u;
    {
        const bool branch_taken_0x166958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166958u;
        // 0x16695c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166958) {
            ctx->pc = 0x166970u;
            goto label_166970;
        }
    }
    ctx->pc = 0x166960u;
    // 0x166960: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x166960u;
    {
        const bool branch_taken_0x166960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166960u;
        // 0x166964: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166960) {
            ctx->pc = 0x166988u;
            goto label_166988;
        }
    }
    ctx->pc = 0x166968u;
    // 0x166968: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x166968u;
    {
        const bool branch_taken_0x166968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166968u;
        // 0x16696c: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166968) {
            ctx->pc = 0x166A6Cu;
            goto label_166a6c;
        }
    }
    ctx->pc = 0x166970u;
label_166970:
    // 0x166970: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x166970u;
    {
        const bool branch_taken_0x166970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166970u;
        // 0x166974: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166970) {
            ctx->pc = 0x1669C4u;
            goto label_1669c4;
        }
    }
    ctx->pc = 0x166978u;
    // 0x166978: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x166978u;
    {
        const bool branch_taken_0x166978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166978u;
        // 0x16697c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166978) {
            ctx->pc = 0x1669F8u;
            goto label_1669f8;
        }
    }
    ctx->pc = 0x166980u;
    // 0x166980: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x166980u;
    {
        const bool branch_taken_0x166980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166980u;
        // 0x166984: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166980) {
            ctx->pc = 0x166A6Cu;
            goto label_166a6c;
        }
    }
    ctx->pc = 0x166988u;
label_166988:
    // 0x166988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16698c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x16698cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x166990: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x166990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x166994: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x166994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166998: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x166998u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x16699c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16699Cu;
    {
        const bool branch_taken_0x16699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16699Cu;
        // 0x1669a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16699c) {
            ctx->pc = 0x1669E0u;
            goto label_1669e0;
        }
    }
    ctx->pc = 0x1669A4u;
label_1669a4:
    // 0x1669a4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1669a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1669a8: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1669a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1669ac: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1669acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1669b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1669b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1669b4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1669B4u;
    {
        const bool branch_taken_0x1669b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669B4u;
        // 0x1669b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669b4) {
            ctx->pc = 0x166A68u;
            goto label_166a68;
        }
    }
    ctx->pc = 0x1669BCu;
    // 0x1669bc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1669BCu;
    {
        const bool branch_taken_0x1669bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669BCu;
        // 0x1669c0: 0xa222d9e8  sb          $v0, -0x2618($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294957544), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669bc) {
            ctx->pc = 0x166A68u;
            goto label_166a68;
        }
    }
    ctx->pc = 0x1669C4u;
label_1669c4:
    // 0x1669c4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1669c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1669c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1669c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669cc: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1669ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1669d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1669d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1669d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1669d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669d8: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1669d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1669dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1669dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1669e0:
    // 0x1669e0: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1669E0u;
    SET_GPR_U32(ctx, 31, 0x1669E8u);
    ctx->pc = 0x1669E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669E0u;
    // 0x1669e4: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1669E0u, 0x1669E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669E8u;
label_1669e8:
    // 0x1669e8: 0x9222d9e8  lbu         $v0, -0x2618($s1)
    ctx->pc = 0x1669e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294957544)));
    // 0x1669ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1669ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1669f0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1669F0u;
    {
        const bool branch_taken_0x1669f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669F0u;
        // 0x1669f4: 0xa222d9e8  sb          $v0, -0x2618($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294957544), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669f0) {
            ctx->pc = 0x166A68u;
            goto label_166a68;
        }
    }
    ctx->pc = 0x1669F8u;
label_1669f8:
    // 0x1669f8: 0x9043748c  lbu         $v1, 0x748C($v0)
    ctx->pc = 0x1669f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29836)));
    // 0x1669fc: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1669FCu;
    {
        const bool branch_taken_0x1669fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1669fc) {
            ctx->pc = 0x166A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1669FCu;
            // 0x166a00: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166A6Cu;
            goto label_166a6c;
        }
    }
    ctx->pc = 0x166A04u;
    // 0x166a04: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x166a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x166a08: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x166A08u;
    {
        const bool branch_taken_0x166a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A08u;
        // 0x166a0c: 0xa220d9e8  sb          $zero, -0x2618($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294957544), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a08) {
            ctx->pc = 0x166A68u;
            goto label_166a68;
        }
    }
    ctx->pc = 0x166A10u;
label_166a10:
    // 0x166a10: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x166a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x166a14: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x166a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x166a18: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x166a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x166a1c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x166a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x166a20: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x166a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x166a24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166a28: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x166a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x166a2c: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x166a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x166a30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x166a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x166a34: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166a38: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x166a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x166a3c: 0x82030131  lb          $v1, 0x131($s0)
    ctx->pc = 0x166a3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 305)));
    // 0x166a40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166A40u;
    {
        const bool branch_taken_0x166a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A40u;
        // 0x166a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a40) {
            ctx->pc = 0x166A58u;
            goto label_166a58;
        }
    }
    ctx->pc = 0x166A48u;
    // 0x166a48: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166A48u;
    {
        const bool branch_taken_0x166a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166a48) {
            ctx->pc = 0x166A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166A48u;
            // 0x166a4c: 0x8e0300dc  lw          $v1, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166A5Cu;
            goto label_166a5c;
        }
    }
    ctx->pc = 0x166A50u;
    // 0x166a50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x166A50u;
    {
        const bool branch_taken_0x166a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A50u;
        // 0x166a54: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a50) {
            ctx->pc = 0x166A6Cu;
            goto label_166a6c;
        }
    }
    ctx->pc = 0x166A58u;
label_166a58:
    // 0x166a58: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x166a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_166a5c:
    // 0x166a5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x166a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x166a60: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166a64: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x166a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_166a68:
    // 0x166a68: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x166a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_166a6c:
    // 0x166a6c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x166a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x166a70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x166a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x166a74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x166a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x166a78: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x166a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x166a7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x166a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x166a80: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x166a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x166a84: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x166a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x166a88: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x166a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x166a8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x166a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x166a90: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x166a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x166a94: 0x8e0500cc  lw          $a1, 0xCC($s0)
    ctx->pc = 0x166a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x166a98: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x166a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x166a9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x166a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x166aa0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x166aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x166aa4: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x166aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x166aa8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x166aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x166aac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x166aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x166ab0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x166ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x166ab4: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x166ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x166ab8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x166abc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x166abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x166ac0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x166ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x166ac4: 0x8203005a  lb          $v1, 0x5A($s0)
    ctx->pc = 0x166ac4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x166ac8: 0x5066000e  beql        $v1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x166AC8u;
    {
        const bool branch_taken_0x166ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x166ac8) {
            ctx->pc = 0x166ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166AC8u;
            // 0x166acc: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B04u;
            goto label_166b04;
        }
    }
    ctx->pc = 0x166AD0u;
    // 0x166ad0: 0x92020130  lbu         $v0, 0x130($s0)
    ctx->pc = 0x166ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x166ad4: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x166ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x166ad8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x166ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x166adc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x166adcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x166ae0: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x166ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x166ae4: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x166ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x166ae8: 0x92030130  lbu         $v1, 0x130($s0)
    ctx->pc = 0x166ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x166aec: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x166aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x166af0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x166af4: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x166af4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x166af8: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x166af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x166afc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x166AFCu;
    {
        const bool branch_taken_0x166afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AFCu;
        // 0x166b00: 0xa4430090  sh          $v1, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166afc) {
            ctx->pc = 0x166B14u;
            goto label_166b14;
        }
    }
    ctx->pc = 0x166B04u;
label_166b04:
    // 0x166b04: 0x24042008  addiu       $a0, $zero, 0x2008
    ctx->pc = 0x166b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x166b08: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x166b08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x166b0c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x166b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x166b10: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x166b10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
label_166b14:
    // 0x166b14: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x166b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x166b18: 0x2405300d  addiu       $a1, $zero, 0x300D
    ctx->pc = 0x166b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12301));
    // 0x166b1c: 0x2406300e  addiu       $a2, $zero, 0x300E
    ctx->pc = 0x166b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12302));
    // 0x166b20: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x166b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x166b24: 0xa4650090  sh          $a1, 0x90($v1)
    ctx->pc = 0x166b24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x166b28: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x166b2c: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x166b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x166b30: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x166b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x166b34: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x166b34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x166b38: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x166b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x166b3c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x166B3Cu;
    SET_GPR_U32(ctx, 31, 0x166B44u);
    ctx->pc = 0x166B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B3Cu;
    // 0x166b40: 0xa4460090  sh          $a2, 0x90($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x166B3Cu, 0x166B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B44u;
label_166b44:
    // 0x166b44: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x166B44u;
    SET_GPR_U32(ctx, 31, 0x166B4Cu);
    ctx->pc = 0x166B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B44u;
    // 0x166b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x166B44u, 0x166B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B4Cu;
label_166b4c:
    // 0x166b4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x166b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b58: 0x3e00008  jr          $ra
    ctx->pc = 0x166B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B58u;
        // 0x166b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166B60u;
}
