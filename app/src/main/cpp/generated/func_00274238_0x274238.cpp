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

// Function: func_00274238
// Address: 0x274238 - 0x2744b8
void func_00274238_0x274238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00274238_0x274238");
#endif

    switch (ctx->pc) {
        case 0x274298u: goto label_274298;
        case 0x27431cu: goto label_27431c;
        case 0x274398u: goto label_274398;
        case 0x274418u: goto label_274418;
        case 0x27442cu: goto label_27442c;
        case 0x27445cu: goto label_27445c;
        case 0x27449cu: goto label_27449c;
        default: break;
    }

    ctx->pc = 0x274238u;

    // 0x274238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x274238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27423c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x274240: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x274240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x274244: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x274244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274248: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x274248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27424c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274250: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x274250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x274254: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x274254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x274258: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x274258u;
    {
        const bool branch_taken_0x274258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274258u;
        // 0x27425c: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274258) {
            ctx->pc = 0x274444u;
            goto label_274444;
        }
    }
    ctx->pc = 0x274260u;
    // 0x274260: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x274260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x274264: 0x2444fdfc  addiu       $a0, $v0, -0x204
    ctx->pc = 0x274264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966780));
    // 0x274268: 0x2c83007b  sltiu       $v1, $a0, 0x7B
    ctx->pc = 0x274268u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)123) ? 1 : 0);
    // 0x27426c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27426Cu;
    {
        const bool branch_taken_0x27426c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27426Cu;
        // 0x274270: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27426c) {
            ctx->pc = 0x27428Cu;
            goto label_27428c;
        }
    }
    ctx->pc = 0x274274u;
    // 0x274274: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274278: 0x24427130  addiu       $v0, $v0, 0x7130
    ctx->pc = 0x274278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28976));
    // 0x27427c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274280: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x274280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274284: 0x800008  jr          $a0
    ctx->pc = 0x274284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27428Cu: goto label_27428c;
            case 0x274310u: goto label_274310;
            case 0x274384u: goto label_274384;
            case 0x27438Cu: goto label_27438c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274284u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27428Cu;
label_27428c:
    // 0x27428c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x27428cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x274290: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x274290u;
    SET_GPR_U32(ctx, 31, 0x274298u);
    ctx->pc = 0x274294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274290u;
    // 0x274294: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x274290u, 0x274298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274298u;
label_274298:
    // 0x274298: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x274298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27429c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x27429cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2742a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2742A0u;
    {
        const bool branch_taken_0x2742a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742A0u;
        // 0x2742a4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742a0) {
            ctx->pc = 0x2742C0u;
            goto label_2742c0;
        }
    }
    ctx->pc = 0x2742A8u;
    // 0x2742a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2742a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2742ac: 0x24427320  addiu       $v0, $v0, 0x7320
    ctx->pc = 0x2742acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29472));
    // 0x2742b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2742b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2742b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2742b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2742b8: 0x800008  jr          $a0
    ctx->pc = 0x2742B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2742C0u: goto label_2742c0;
            case 0x2742D0u: goto label_2742d0;
            case 0x2742E0u: goto label_2742e0;
            case 0x2742F0u: goto label_2742f0;
            case 0x274300u: goto label_274300;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2742C0u;
label_2742c0:
    // 0x2742c0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2742c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2742c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2742c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2742c8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2742C8u;
    {
        const bool branch_taken_0x2742c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742C8u;
        // 0x2742cc: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742c8) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x2742D0u;
label_2742d0:
    // 0x2742d0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2742d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2742d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2742d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2742d8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2742D8u;
    {
        const bool branch_taken_0x2742d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742D8u;
        // 0x2742dc: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742d8) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x2742E0u;
label_2742e0:
    // 0x2742e0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2742e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2742e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2742e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2742e8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2742E8u;
    {
        const bool branch_taken_0x2742e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742E8u;
        // 0x2742ec: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742e8) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x2742F0u;
label_2742f0:
    // 0x2742f0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2742f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2742f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2742f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2742f8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2742F8u;
    {
        const bool branch_taken_0x2742f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742F8u;
        // 0x2742fc: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742f8) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x274300u;
label_274300:
    // 0x274300: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x274300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x274304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274308: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x274308u;
    {
        const bool branch_taken_0x274308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274308u;
        // 0x27430c: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274308) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x274310u;
label_274310:
    // 0x274310: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x274310u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x274314: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x274314u;
    SET_GPR_U32(ctx, 31, 0x27431Cu);
    ctx->pc = 0x274318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274314u;
    // 0x274318: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x274314u, 0x27431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27431Cu;
label_27431c:
    // 0x27431c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x27431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x274320: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x274320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x274324: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x274324u;
    {
        const bool branch_taken_0x274324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274324u;
        // 0x274328: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274324) {
            ctx->pc = 0x274400u;
            goto label_274400;
        }
    }
    ctx->pc = 0x27432Cu;
    // 0x27432c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27432cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274330: 0x24427340  addiu       $v0, $v0, 0x7340
    ctx->pc = 0x274330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29504));
    // 0x274334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274338: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x274338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27433c: 0x800008  jr          $a0
    ctx->pc = 0x27433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274344u: goto label_274344;
            case 0x274354u: goto label_274354;
            case 0x274364u: goto label_274364;
            case 0x274374u: goto label_274374;
            case 0x274400u: goto label_274400;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27433Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274344u;
label_274344:
    // 0x274344: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x274344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x274348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27434c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27434Cu;
    {
        const bool branch_taken_0x27434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27434Cu;
        // 0x274350: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27434c) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x274354u;
label_274354:
    // 0x274354: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x274358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27435c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27435Cu;
    {
        const bool branch_taken_0x27435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27435Cu;
        // 0x274360: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27435c) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x274364u;
label_274364:
    // 0x274364: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x274364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x274368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27436c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27436Cu;
    {
        const bool branch_taken_0x27436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27436Cu;
        // 0x274370: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27436c) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x274374u;
label_274374:
    // 0x274374: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x274374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x274378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27437c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27437Cu;
    {
        const bool branch_taken_0x27437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27437Cu;
        // 0x274380: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27437c) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x274384u;
label_274384:
    // 0x274384: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x274384u;
    {
        const bool branch_taken_0x274384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274384u;
        // 0x274388: 0xae20173c  sw          $zero, 0x173C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274384) {
            ctx->pc = 0x274444u;
            goto label_274444;
        }
    }
    ctx->pc = 0x27438Cu;
label_27438c:
    // 0x27438c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x27438cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x274390: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x274390u;
    SET_GPR_U32(ctx, 31, 0x274398u);
    ctx->pc = 0x274394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274390u;
    // 0x274394: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x274390u, 0x274398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274398u;
label_274398:
    // 0x274398: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x274398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27439c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x27439cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2743a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2743A0u;
    {
        const bool branch_taken_0x2743a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743A0u;
        // 0x2743a4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743a0) {
            ctx->pc = 0x2743C0u;
            goto label_2743c0;
        }
    }
    ctx->pc = 0x2743A8u;
    // 0x2743a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2743a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2743ac: 0x24427360  addiu       $v0, $v0, 0x7360
    ctx->pc = 0x2743acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29536));
    // 0x2743b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2743b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2743b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2743b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2743b8: 0x800008  jr          $a0
    ctx->pc = 0x2743B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2743C0u: goto label_2743c0;
            case 0x2743D0u: goto label_2743d0;
            case 0x2743E0u: goto label_2743e0;
            case 0x2743F0u: goto label_2743f0;
            case 0x274400u: goto label_274400;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2743B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2743C0u;
label_2743c0:
    // 0x2743c0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2743c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2743c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2743c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2743c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2743C8u;
    {
        const bool branch_taken_0x2743c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743C8u;
        // 0x2743cc: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743c8) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x2743D0u;
label_2743d0:
    // 0x2743d0: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x2743d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x2743d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2743d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2743d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2743D8u;
    {
        const bool branch_taken_0x2743d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743D8u;
        // 0x2743dc: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743d8) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x2743E0u;
label_2743e0:
    // 0x2743e0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2743e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2743e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2743e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2743e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2743E8u;
    {
        const bool branch_taken_0x2743e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743E8u;
        // 0x2743ec: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743e8) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x2743F0u;
label_2743f0:
    // 0x2743f0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2743f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2743f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2743f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2743f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2743F8u;
    {
        const bool branch_taken_0x2743f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743F8u;
        // 0x2743fc: 0xe620173c  swc1        $f0, 0x173C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743f8) {
            ctx->pc = 0x274410u;
            goto label_274410;
        }
    }
    ctx->pc = 0x274400u;
label_274400:
    // 0x274400: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x274400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x274404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274408: 0x0  nop
    ctx->pc = 0x274408u;
    // NOP
    // 0x27440c: 0xe620173c  swc1        $f0, 0x173C($s1)
    ctx->pc = 0x27440cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
label_274410:
    // 0x274410: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x274410u;
    SET_GPR_U32(ctx, 31, 0x274418u);
    ctx->pc = 0x274414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274410u;
    // 0x274414: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x274410u, 0x274418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274418u;
label_274418:
    // 0x274418: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x274418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x27441c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x27441Cu;
    {
        const bool branch_taken_0x27441c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27441c) {
            ctx->pc = 0x274420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27441Cu;
            // 0x274420: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274448u;
            goto label_274448;
        }
    }
    ctx->pc = 0x274424u;
    // 0x274424: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x274424u;
    SET_GPR_U32(ctx, 31, 0x27442Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x274424u, 0x27442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27442Cu;
label_27442c:
    // 0x27442c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x27442cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x274430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x274430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274434: 0xc622173c  lwc1        $f2, 0x173C($s1)
    ctx->pc = 0x274434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274438: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x274438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27443c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27443cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x274440: 0xe622173c  swc1        $f2, 0x173C($s1)
    ctx->pc = 0x274440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
label_274444:
    // 0x274444: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x274444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_274448:
    // 0x274448: 0x24020279  addiu       $v0, $zero, 0x279
    ctx->pc = 0x274448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x27444c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27444Cu;
    {
        const bool branch_taken_0x27444c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27444Cu;
        // 0x274450: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27444c) {
            ctx->pc = 0x274460u;
            goto label_274460;
        }
    }
    ctx->pc = 0x274454u;
    // 0x274454: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x274454u;
    SET_GPR_U32(ctx, 31, 0x27445Cu);
    ctx->pc = 0x274458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274454u;
    // 0x274458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x274454u, 0x27445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27445Cu;
label_27445c:
    // 0x27445c: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x27445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_274460:
    // 0x274460: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x274460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x274464: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x274464u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x274468: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x274468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27446c: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x27446Cu;
    {
        const bool branch_taken_0x27446c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x274470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27446Cu;
        // 0x274470: 0xa23202f7  sb          $s2, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27446c) {
            ctx->pc = 0x27449Cu;
            goto label_27449c;
        }
    }
    ctx->pc = 0x274474u;
    // 0x274474: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x274474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x274478: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x274478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27447c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x274480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274484: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x274484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x274488: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27448c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27448cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274490: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x274490u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274494: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x274494u;
    SET_GPR_U32(ctx, 31, 0x27449Cu);
    ctx->pc = 0x274498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274494u;
    // 0x274498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x274494u, 0x27449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27449Cu;
label_27449c:
    // 0x27449c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27449cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2744a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2744a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2744a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2744a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2744a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2744a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2744ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2744ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2744B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744ACu;
        // 0x2744b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2744ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2744B4u;
    // 0x2744b4: 0x0  nop
    ctx->pc = 0x2744b4u;
    // NOP
    ctx->pc = 0x2744b8u;
}
